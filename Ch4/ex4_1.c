/*
* Write the function strrindex(s,t), which returns the position
* of the rightmost occurrence of t in s, or -1 if there is none.
*/

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int catchline(char line[], int max);
int strindex(char source[], char searchfor[], int length);

char pattern[] = "ire"; /* pattern to search for */

/* find all lines matching pattern */
int main()
{
	char line[MAXLINE];
	int found = 0;
	int length;
	
	while ((length = catchline(line,MAXLINE)) > 0) {
		if (strindex(line, pattern, length) >= 0){
			printf("%s\n", line);
			found++;
		}
	}
	return found;
}

/* catchline: get line into s , return length */
int catchline(char s[], int lim)
{
	int c, i;
	
	i=0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == 'n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[], int length)
{
	int i = length;
	int j;
	int k = 0;
	extern char pattern[];
	
	
	while (pattern[k] != '\0')
		++k;
	
	for (i = i-1; s[i] > -1; i--){
		for (j=i, k= k-1; k > -1 && s[j] == t[k] ;j--,k--)
			;
		if(k == -1)
			return i;
	}
	return -1;

}
