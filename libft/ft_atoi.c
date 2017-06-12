int		ft_atoi(const char *str)
{
	int	num;
	int	neg;
	int	i;

	i = 0;
	num = 0;
	neg = 1;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while ((str[i] <= 57) && (str[i] >= 48))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (neg * num);
}
