#include "libft.h"

static int		ft_size(int c)
{
	int			n;
	int			size;

	size = 0;
	n = c;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	if (c == 0)
		size++;
	return (size);
}

static char		*numput(char *rez, long int c, int size)
{
	int			tr;

	if (c == 0)
		rez[0] = '0';
	while (c != 0)
	{
		tr = c % 10;
		rez[size] = tr + '0';
		c = c / 10;
		size--;
	}
	return (rez);
}

char			*ft_itoa(int c)
{
	int			size;
	char		*rez;
	long int	b;

	b = c;
	size = ft_size(b);
	rez = (char*)malloc(size + 1);
	if (rez == NULL)
		return (NULL);
	if (b < 0)
	{
		rez[0] = '-';
		b = -b;
	}
	rez[size] = '\0';
	size--;
	numput(rez, b, size);
	return (rez);
}
