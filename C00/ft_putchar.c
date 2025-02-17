#include <unistd.h>
void ft_putchar(char c);

void ft_putchar(char c)
{
write(1, &c,1);
}

int main(void){
	char c;
	c = '9';

	ft_putchar(c);
}


