#include <stdio.h>

void ft_print_reverse_alphabet(void)
{
	char c;

	c = 'z';
	while(c >= 'a')
	{
		putchar(c);
		c--;
	}
}

int main(int argc, const char *argv[])
{
	ft_print_reverse_alphabet();
	return 0;
}
