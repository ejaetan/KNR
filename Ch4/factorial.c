#include <stdio.h>

int facto(int n);
int main(){
	int a;
	a = 3;
	
	printf("%d\n",facto(a));
	


}

int facto(int n){
	if (n <= 1)
		return 1;
	else if (n > 1)
		return (n * facto(n-1));
}