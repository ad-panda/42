char    *ft_itoa(int n)
{
    char    *str;
    int len;

    len = ft_len_n(n);  
    if ((str = malloc((len + 1) * sizeof(char))) == NULL)
        return (NULL);
    str[len] = '\0';
    len--;
    if (n < 0)
    {
        str[0] = '-';
        n *= (-1);
        if (n < 10)
        str[len] = n + '0';
        while (len > 0)
        {
            str[len] = (n % 10) + '0';
            n = n / 10;
            len--;
        }
    }
    else while (len >= 0)
        {
            str[len] = (n % 10) + '0';
            n = n / 10;
            len--;
        }
    return (str);
}