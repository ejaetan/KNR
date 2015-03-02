/*
* Write a pointer version of the function strcat that we showed in 
* Chapter 2: strcat(s,t) copies the string t to the end of s .
* Write the function strend(s,t) , which returns 1 if the string t occurs 
* at the end of the string s , and zero otherwise.
*/


#include <stdio.h>

void strconcat(char *s, char *t);
int strend(char *s, char *t);

int main()
{
	char a[10] = "abc", b[10] = "efg";

	strconcat(a, b);
	printf("%s\n", a);
	
	printf("%d\n", strend(a,b));


}

void strconcat(char *s, char *t)
{

	while (*s++ != '\0')	/* find end of s*/
		;
	s--;
	while ((*s++ = *t++) != '\0')	/* copy t to s */
		;


}

int strend(char *s, char *t)
{	
	while(*s++ != *t)
		;
	s--;

	for(; *s == *t; s++, t++){
		if(*s != '\0')
			continue;
		else if(*s == '\0')
			return 1;
		
	}

}