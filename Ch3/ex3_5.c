/*
* Write the function itob(n,s,b) that converts the integer n into a base b character 
* representation in the string s . In particular, itob(n,s,16) formats n as a hexadecimal 
* integer in s .
*/

#include <stdio.h>

#define MAXLINE 1000

void reverse(char t[]);
void itob (int n, char s[], int b);
int main()
{
	int n=-4;
	char s[MAXLINE];
	int b=2;
	
	itob(n,s,b);
	printf("%s\n",s);
}

void itob (int n, char s[], int b)
{
	int a = 0, i;
	int sign;
	
	if((sign = n) < 0)
		n = -n;
	
	i=0;
	for(; n != 0; n /= b )
	{
		a = n%b;
		s[i++] = '0' + a;
	}
	
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
		
}

void reverse(char s[])
{
	int i, j;
	char k;

	
	for (i=0; s[i] != '\0' && s[i] != '\n'; i++)
		;
	for(j=0; j<(i/2); j++)
	{
		k = s[j];
		s[j] = s[i-1-j];
		s[i-1-j] = k;	
	}
}

