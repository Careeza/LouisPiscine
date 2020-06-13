#include <stdio.h>

void ft_print_numbers(void)
{
	int a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
}

int main(int argc, const char *argv[])
{
	ft_print_numbers();
	return 0;
}
