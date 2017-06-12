#include "libft.h"

char	*ft_uppcase(char *s)
{
	int		i;
	char	*str;

	str = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 97 + 65;
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
