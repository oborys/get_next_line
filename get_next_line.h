#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft/libft.h"
# define BUFF_SIZE 1

typedef struct		s_tlist
{
	int				fd;
	char			*s;
	int				i;
	struct s_tlist	*next;
}					t_get;

int					get_next_line(const int fd, char **line);
int					zc(const int fd, char **line, long long sizeb, t_get *list);
void				zalstr(t_get *list, char *ptrbuf, char **line);
t_get				*fdposh(const int fd, t_get **list);

#endif
