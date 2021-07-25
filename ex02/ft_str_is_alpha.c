int	ft_str_is_alpha(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if ((str[iterator] > 'z' || str[iterator] < 'a') && \
		 (str[iterator] > 'Z' || str[iterator] < 'A'))
			return (0);
		else
			++iterator;
	}
	if (iterator == 0)
		return (1);
	return (1);
}
