#include <stdio.h>

void ft_is_negative(int n)
{
	if(n < 0)
		putchar('N');
	else
		putchar('P');
}

int main(int argc, const char *argv[])
{
	ft_is_negative(0);
	return 0;
}
