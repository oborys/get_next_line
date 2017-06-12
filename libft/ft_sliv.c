#include "libft.h"

size_t			ft_sliv(char const *s, char c, size_t len)
{
	size_t		chsliv;
	size_t		i;

	chsliv = 0;
	i = 0;
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
