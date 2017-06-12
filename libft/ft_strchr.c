#include "libft.h"

char				*ft_strchr(const char *s, int c)
{
	char			ch;
	size_t			i;
	char			*str;

	str = (char*)s;
	ch = c;
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	if ((str[i] == '\0') && (ch == '\0'))
		return (&str[i]);
	return (NULL);
}
