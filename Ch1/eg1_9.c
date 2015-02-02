#include <stdio.h>
#define MAXLINE 1000    // maximum input line size

int catchline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */

main()
{
    int len;            //current line lenght
    int max;            //maximum length seen so far
    char line[MAXLINE]; //current input line
    char longest[MAXLINE];//longest line saved here

    max = 0;
    while ((len = catchline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)   //there was a line
            printf("%s", longest);
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


/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[],char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0') 
        ++i;
}
