#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (a <= '7')
    {
        ft_putchar(',');
        ft_putchar(' ');
    }    
}


void ft_print_comb(void){
	int i, j, k;
	i=48;
	j=49;
	k=50;
	
	while(i<=55){
		j=i+1;
		while(j<=56){
			k=j+1;
			while(k<=57){
			ft_print_numbers(i,j,k);
			k++;
			}
		j++;
		}
	i++;
	}

}

int main(){
ft_print_comb();
}
