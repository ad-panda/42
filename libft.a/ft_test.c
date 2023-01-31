brouillon 

ft_memmove.c

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst < src || dst > src)
		return (ft_memcpy(dst, src, len));
	while (len >= 0 && str[len])
	{
		str[len] = str2[len];
		len--;
	}
	return (dst);
}
