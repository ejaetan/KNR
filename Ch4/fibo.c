#include <stdio.h>

int fibo(int);
int fibotail(int n, int a, int b);

int main(){
	int a;
	a = 7;
	
	printf("%d\n",fibotail(a, 0 , 1));
}

int fibo(int n)
{
	if(n == 0)
		return 0;
	
	else if( n == 1)
		return 1;
	
	else if ( n > 1)
		return (fibo(n-1) + fibo(n-2));
}


int fibotail(int n, int a, int b)
{
	if(n == 0)
		return a;
	
	else if( n == 1)
		return b;
	
	else if ( n > 1)
		return fibotail(n-1, b, a+b);
}