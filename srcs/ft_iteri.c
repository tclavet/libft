#include "libft.h"

void	ft_isetiri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && s[i])
	{
		while (s[i])
		{
			f(i, s);
			i++;
		}
	}
}
