#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = ft_strnew(len - start);
	while (i != start)
		s++;
	cpy = ft_strncpy(cpy, s, len);
	return (cpy);
}
