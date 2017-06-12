#include "libft.h"

char	*ft_lowcase(char *s)
{
	int		i;
	char	*str;

	str = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = s[i] - 65 + 97;
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
