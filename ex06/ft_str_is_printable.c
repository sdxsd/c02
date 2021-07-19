int ft_str_is_printable(char *str)
{
    int iterator;

    iterator = 0;
    while (str[iterator] != '\0')
    {
        if (str[iterator] <= 31)
            return (0);
        iterator++;
    }
    if (iterator == 0)
        return (1);
    return (1);
}

