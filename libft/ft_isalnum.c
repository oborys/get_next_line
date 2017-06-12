int	ft_isalnum(int c)
{
	if (((c >= 48) && (c <= 57)) || (((c >= 'A') && (c <= 'Z'))
	|| ((c >= 'a') && (c <= 'z'))))
		return (1);
	return (0);
}
