#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	out = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	out = ft_strcpy(out, s1);
	out = ft_strcat(out, s2);
	return (out);
}
