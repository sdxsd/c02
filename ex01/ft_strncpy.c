char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	iterator;

	iterator = 0;
	if (n == 0)
		return (dest);
	else
	{
		while (iterator < n && src[iterator] != '\0')
		{
			dest[iterator] = src[iterator];
			++iterator;
		}
		dest[iterator] = '\0';
		return (dest);
	}
}
