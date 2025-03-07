#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_put_nmbrs(int n)
{	
	if(n>=10)
	{
		ft_put_nmbrs(n/10); //this is to remove the tens and return a normal number
		ft_put_nmbrs(n%10); //this is for the remainder
	}
	else
	{
		ft_putchar(n+'0'); //this is to add 1
	}
}

void	ft_put_all(int n1, int n2)
{
	ft_putchar(' ');
	if (n1 < 10)
	{
		ft_putchar('0');
	}	
	ft_put_nmbrs(n1);
	ft_putchar(' ');
	
	if (n2 < 10)
	{
		ft_putchar('0');
	}	
	ft_put_nmbrs(n2);
	ft_putchar(',');
}


	
void ft_print_comb2(void)
{
	int i, j;
	i = 0;
	j = 0;
	while (i != 100)
	{
		while (j !=100)
		{
			ft_put_all(i,j);
			j++;		
		}
		i++;
		j=i+1;
	}
}

int main(){
ft_print_comb2();
return 0;
}
