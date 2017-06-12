#include "get_next_line.h"

int					get_next_line(const int fd, char **line)
{
	long long		sizeb;
	static t_get	*list = NULL;
	int				ret;
	t_get			*lfd;

	sizeb = 0;
	if (!line || fd < 0)
		return (-1);
	if (list == NULL)
	{
		list = (t_get*)malloc(sizeof(t_get));
		list->s = NULL;
		list->fd = fd;
		list->next = NULL;
		list->i = 0;
	}
	lfd = fdposh(fd, &list);
	ret = zc(fd, line, sizeb, lfd);
	return (ret);
}

int					zc(const int fd, char **line, long long sizeb, t_get *list)
{
	char			buf[BUFF_SIZE + 1];
	char			*ptrbuf;
	char			*ff;

	while ((sizeb = read(fd, buf, BUFF_SIZE)))
	{
		if (sizeb == -1)
			return (-1);
		ft_strncpy((ptrbuf = ft_strnew(sizeb)), buf, sizeb);
		ff = list->s;
		if (list->s == NULL)
			list->s = ft_strdup(ptrbuf);
		else
			list->s = ft_strjoin(list->s, ptrbuf);
		ft_strdel(&ptrbuf);
		ft_strdel(&ff);
		if (ft_strchr(list->s, '\n') != NULL)
			break ;
	}
	list->i = list->s[0];
	if (ft_strchr(list->s, '\n') != NULL || sizeb == 0)
		zalstr(list, ptrbuf, line);
	if (*line[0] == '\0' && !list->s[0] && list->i != 10 && !list->i)
		return (0);
	return (1);
}

void				zalstr(t_get *list, char *ptrbuf, char **line)
{
	size_t			bits;
	char			*ptrj;

	bits = 0;
	while (list->s[bits] != '\n' && list->s[bits])
		bits++;
	ptrj = ft_strnew(bits);
	ft_strncpy(ptrj, list->s, bits);
	*line = ptrj;
	if ((bits + 1) > (ft_strlen(list->s)))
		--bits;
	ptrbuf = ft_strsub(list->s, ++bits, ft_strlen(list->s));
	ft_strdel(&list->s);
	list->s = ft_strdup(ptrbuf);
	ft_strdel(&ptrbuf);
}

t_get				*fdposh(const int fd, t_get **list)
{
	t_get			*first;
	t_get			*new;
	t_get			*tmp;

	tmp = *list;
	first = *list;
	while (first != NULL)
	{
		if (first->fd == fd)
			return (first);
		first = first->next;
	}
	new = (t_get*)malloc(sizeof(t_get));
	new->s = NULL;
	new->fd = fd;
	*list = new;
	new->next = tmp;
	return (new);
}
