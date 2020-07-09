#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while(a <= '99')
	{
		b = a + 1;
		while(b <= '99')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			b++;
		}
		a++;
	}	
}
