char *ft_strlowcase(char *str)
{
    int iterator;

    iterator = 0;
    while(str[iterator] != '\0')
    {
        if (str[iterator] >= 65 && str[iterator] <= 90)
            str[iterator] += 32;
        ++iterator;
    }
    return (str);
}
