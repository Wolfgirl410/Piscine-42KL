#include<unistd.h>

void ft_is_negative(int n);

void ft_is_negative(int n){
	int i;
	if (n<0){
		write(1,"N",1);
	}
	else{
		write(1,"P",1);
	}
}

int main(){
	ft_is_negative(19);
	ft_is_negative(-29);
} 
