#include "libft.h"

static char		*zapolmas(const char *s, char *rez, size_t i, size_t len)
{
	size_t		j;

	j = 0;
	while (i <= len)
	{
		rez[j] = s[i];
		i++;
		j++;
	}
	rez[j] = '\0';
	return (rez);
}

char			*ft_strtrim(char const *s)
{
	char		*rez;
	size_t		len;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s) - 1;
	while ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n'))
		i++;
	if (s[i] == '\0')
		return (rez = ft_strnew(1));
	if (i == len + 1)
		return (0);
	while ((s[len] == ' ') || (s[len] == '\t') || (s[len] == '\n'))
		len--;
	rez = (char*)malloc(len - i + 2);
	if (rez == NULL)
		return (NULL);
	zapolmas(s, rez, i, len);
	return (rez);
}
