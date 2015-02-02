#include <stdio.h>
#define MAXLINE 1000

int rm_trailing(char s[], int line);

int main()
{
    int i = 0;
    char s[MAXLINE];
    while ( (i = rm_trailing(s, MAXLINE)) > 0)
    {
        if (i != 0)
        {
            printf("%s\n", s);
        }

        if (s[i - 1] == EOF)
            break;
    }

    return 0;
}

int rm_trailing(char s[], int line)
{
    int i = 0, j = 0;

    for (i = 0; (s[i] = getchar()) != EOF && s[i] != '\n'; ++i)
        if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
            j = i;

    if (j != 0)
        s[j + 1] = '\0';

    return i;
}
