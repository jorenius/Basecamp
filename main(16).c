
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb);

int		main(void)
{
	int nb = 787896453;

		ft_putnbr(nb);
		write(1, "\n", 1);
}
