#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if ((str[iterator] > 'z' || str[iterator] < 'a') && (str[iterator] > 'Z' || str[iterator] < 'A'))
				return (0);
		else
			++iterator;
	}
	if (iterator == 0)
		return (1);
	return (1);
}

int main()
{
	char *str = "GOED";
	char *str2 = "1234";
	char *str3 = "in3";
	char *str4 = "DSSD#$SF#343qFD";

	int x = ft_str_is_alpha(str);
	int y = ft_str_is_alpha(str2);
	int c = ft_str_is_alpha(str3);
	int b = ft_str_is_alpha(str4);

	printf("x: %d | y: %d | c: %d | c: %d\n", x, y, c, b);
}
