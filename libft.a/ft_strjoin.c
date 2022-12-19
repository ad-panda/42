#include <unistd.h>


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int 	len;
	char	*s3 = NULL;

	i = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	if ((s3 = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	if (s1[i] == NULL && s2[i] == NULL)
		return (NULL);
	if (s1[i] == NULL && s2[i] != NULL)
		while (s2[i])
			{
				s3[i] = s2[i];
				i++;
			}
	i = 0;
	if (s1[i] != NULL && s2[i] == NULL)
                while (s1[i])
                        {
                                s3[i] = s1[i];
                                i++;
                        }
	i = 0;
	if (s1[i] != NULL && s2[i] != NULL)
		{
			while (s1[i])
                        	{
                                	s3[j] = s1[i];
                                	i++;
					j++;
                        	}
			while (s2[i])
                                {
                                        s3[j] = s2[i];
                                        i++;
					j++;
                                }
		}
	return (s3);
}
