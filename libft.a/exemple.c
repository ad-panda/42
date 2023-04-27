char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    int ln;
    char    *strh;
    //char    *strn;

    i = 0;
    ln = ft_strlen((char *)needle);
    strh = (char *)haystack;
    //strn = (char *)needle;
    while (haystack[i] && i < len)
    {
        if (haystack[i] == '\0')
            return (NULL);
        if (haystack[i] == needle[ln])
            return (strh + i);
        i++;
    }
    return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	size_t	lendst;
	size_t	lensrc;
	char	*str;

	i = 0;
	str = (char *)src;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(str);
	if (dstsize == 0)
		return (lensrc);
	if (dstsize < lendst)
		return (lendst);
	while(i < dstsize && dstsize < lendst)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	while(i < dstsize + 1 && dstsize > lendst)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return(lendst + lensrc);
}

static	void    *ft_memcpy2(void *dst, const void *src, size_t n)
{
    size_t  len;
    unsigned char    *str;
    unsigned char    *str2;

    str = (unsigned char*)dst;
    str2 = (unsigned char*)src;
    if (str == NULL && str2 == NULL)
        return (dst);
    len = n - 1;
    while (0 < n)
    {
        str[len] = str2[len];
        n--;
        len--;
    }
    return (dst);
}

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	return (ft_memcpy2(dst, src, len));
}


char    *ft_strrchr(const char *s, int c)
{
	int	i;
	char	*str;

	i = ft_strlen((char *)s);
	str = (char *)s;
	while (str[i] != (char)c && i >= 0)
	{
		if (str[i - 1] == '\0')
			return (NULL);
		i--;
	}
        if (str[i] != (char)c)
                return (NULL);
	return ((char *)s + i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((str = malloc(len + 1)) == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s))
	{
		str[i] = '\0';
		return (str);
	}
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}