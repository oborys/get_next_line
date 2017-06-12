#include "libft.h"

char				*ft_strrchr(const char *s, int c)
{
	char			ch;
	int				len;
	char			*str;

	str = (char*)s;
	ch = c;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == ch)
			return (str + len);
		len--;
	}
	return (NULL);
}
