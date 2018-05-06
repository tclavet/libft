#include "includes/libft.h"

int		main()
{
	char *str = "      split       this for   me  !       ";
	char **split;
	
	int i = 0;

	split = ft_strsplit(str, ' ');
	while (split[i])
	{
		printf("%s\n", split[i]);
		printf("%d\n", i);
		i++;
	}
	return (1);
}
