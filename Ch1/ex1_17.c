/* Write a program to print all input lines that are longer than 80 characters*/

#include <stdio.h>
#define MAXLINE 1000    // maximum input line size

int catchline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
    int len;            //current line length
    char line[MAXLINE]; //current input line


  
    while ((catchline(line, MAXLINE)) > 80)
         printf("%s", line);
    
    return 0;
}

/*  catchline: read a line into s, return length */
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

