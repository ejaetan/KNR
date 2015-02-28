/*
* Write a recursive version of the function reverse(s) , 
* which reverses the string s in place.
*/

#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int catchline (char line[], int maxline);
void swap (char v[], int i, int j);
void reverse(char s[]);

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



/* swap: interchange v[i] and v[j] */
void swap (char v[], int i, int j)
{
	int temp;
	
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

/* reverse function in recursive version */
void reverse(char s[])
{
	static int j;
	static int i = 0;
	
	if(i == 0)
		j = strlen(s) - 1;
		
	swap(s,i++,j--);
	
	if(i < j)
		reverse(s);

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