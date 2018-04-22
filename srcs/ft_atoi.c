#include "libft.h"

static int	ft_positive(char str)
{
	int		sign;

	sign = 1;
	if (str == '-')
		sign = -1;
	return (sign);
}

int			ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		value;

	i = 0;
	while ((str[i] > 8 && str[i] < 16) && str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = ft_positive(str[i]);
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = value * 10 + (str[i] - 48);
		i++;
	}
	return (sign * value);
}
