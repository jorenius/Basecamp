
#include <stdio.h>

int		*ft_range(int min, int max);

int main()
{

	int *a;
	int max;
	int min;

	min = -10;
	max = 10;
	
	a = ft_range(min, max);
	if (a == 0)
		return (0);

	while (min < max )
	{
		printf("%d\n", *a); 
		a++;
		min++;
	}
}
