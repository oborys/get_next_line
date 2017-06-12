#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char*)malloc(len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
