#include <stdio.h>

void ft_print_alphabet(void)
{
	char c;

	c = 'a';
	while(c <= 'z')
	{
		putchar(c);
		c++;
	}
}

int main(int argc, const char *argv[])
{
	ft_print_alphabet();
	return 0;
}
