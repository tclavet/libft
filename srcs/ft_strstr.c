#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	s2len;
	size_t	j;

	i = 0;
	j = 0;
	if ((s2len = ft_strlen(s2)) == 0)
		return ((char *)s1);
	while (s1[i])
	{	
		j = 0;
		while (haystack[i] == needle[i + j])
		{
			if (j == len - 1)
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL)
}
