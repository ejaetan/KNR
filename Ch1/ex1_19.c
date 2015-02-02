/*
Write a function reverse(s) that reverses the character string s . 
Use it to write a program that reverses its input a line at a time. 
*/

#include <stdio.h>
#define MAXLINE 1000

int catchline (char line[], int maxline);
void reverse(char to[]);

int main()
{

	int len;
	char line[MAXLINE];
	char s[MAXLINE];
	
	while ((len = catchline (line, MAXLINE)) > 0)
	{
		reverse(line);
		printf("%s", line);
	}	
	return 0;
}


/* catchline: read a line into s, return length*/
int catchline(char s[], int lim)
{
    char c; 
    int i;

    for (i = 0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) 
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* reverse: reverse line from 'from" to 'to'  */
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