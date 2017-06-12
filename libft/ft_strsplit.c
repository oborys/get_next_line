#include "libft.h"

static size_t	sliv(char const *s, char c, size_t len)
{
	size_t		chsliv;
	size_t		i;

	chsliv = 0;
	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1)
	{
		while ((s[i] == c) && (i < len))
			i++;
		while ((s[i] != c) && (i < len))
			i++;
		chsliv++;
	}
	return (chsliv);
}

static size_t	rozmsl(char const *s, char c, size_t i, size_t len)
{
	size_t		lit;

	lit = 0;
	while ((s[i] != c) && (i < len))
	{
		lit++;
		i++;
	}
	return (lit);
}

static void		charzapov(char const *s, char **rez, char c, size_t len)
{
	size_t		n;
	size_t		str_m;
	size_t		i;
	size_t		lens;

	str_m = 0;
	i = 0;
	while (i < len)
	{
		while ((s[i] == c) && (i < len))
			i++;
		if (s[i] == '\0')
			break ;
		lens = rozmsl(s, c, i, len);
		rez[str_m] = (char*)malloc(lens + 1);
		n = 0;
		while (s[i] != c && s[i])
			rez[str_m][n++] = s[i++];
		rez[str_m][n] = '\0';
		str_m++;
	}
	rez[str_m] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char		**rez;
	size_t		len;

	len = 0;
	if (!s || !c)
		return (0);
	while (s[len])
		len++;
	rez = (char**)malloc(sizeof(char*) * ((sliv(s, c, len)) + 1));
	if (rez == NULL)
		return (0);
	charzapov(s, rez, c, len);
	return (rez);
}
