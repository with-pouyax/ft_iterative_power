#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	r;

	r = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (power > 1)
		{
			r *= nb;
			power--;
		}
		return (r);
	}
}
int main(void)
{
	int nb = 1;
	int power = 2;
	int	n = ft_iterative_power(nb, power);
	printf("%i", n);
}