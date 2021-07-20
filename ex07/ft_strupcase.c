char	*ft_strupcase(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if (str[iterator] >= 97 && str[iterator] <= 122)
			str[iterator] -= 32;
		++iterator;
	}
	return (str);
}
