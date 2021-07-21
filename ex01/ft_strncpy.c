#include <stdio.h>

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
		if (iterator < n)
			while(iterator != n)
			{
				dest[iterator] = '\0';
				iterator++;
			}
		return (dest);
	}
}

int main()
{
	char *src = "Wat Leuk!";
	char dest[] = "Niet leuk!";
	ft_strncpy(&dest[0], src, 9);
	printf("%s\n", dest);
}
