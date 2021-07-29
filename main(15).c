
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main()
{


	char str[] = "4565";
	int a = ft_atoi(str);

	printf("%d\n", a);
	return ;
}
