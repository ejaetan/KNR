/*
* Adapt the ideas of printd to write a recursive version of itoa ; 
* that is, convert an integer into a string by calling a recursive routine.
*/

#include <stdio.h>

void itoa(int n, char s[]);

int main()
{
	int c;
	char s[100];
	
	c = 12;
	itoa(c,s);
	printf("%s\n", s);
}




void itoa(int n,char s[])
{

	static int i = 0;

	if (n < 0){
		n = -n;
		s[i++] = '-';
	}
	
	if (n/10)
		itoa(n/10, s);
	s[i++] = n % 10 + '0';
	s[i] = '\0';

}