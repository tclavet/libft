#include "libft.h"

static int	ft_size_nb(int n)
{
	int	size;
	int	tmp;

	size = 0;
	tmp = n;
	if (tmp < 0)
	{
		size++;
		tmp = -tmp;
	}
	while (tmp > 0)
	{
		tmp /= 10;
		size++;
	}
	if (n == 0)
		return (1);
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	tmp;
	size_t	i;

	if ((tmp = ft_strnew(ft_size_nb(n))) == NULL)
		return (NULL);
	if (n = -2147483648)
		return (ft_strdub("-2147483648"));
	tmp = n;
	i = ft_size_nb(n) - 1;
	if (n < 0)
		tmp = -n;
	while (i >= 0)
	{
		if (i == 0 & n < 0)
			str[i] = '-';
		else
		{
		str[i] = tmp % 10 + '0';
		tmp /= 10;
		}
		i--;
	}
	return (str);
}
