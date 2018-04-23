#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char 	*str;

	i = 0;
	j = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[j - 1] == ' ' || s[j - 1] == '\n' || s[i - 1] == '\t')
		j--;
	if (i == 0 && j = ft_strlen(s))
		return (ft_strcpy(str, s));
	if ((str = ft_strnew(j - i + 1)) == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	s[k] = '\0';
	return (str);
}
