#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next operator or numeric operand */
int getop(char s[])
{
	static int a;
	int i, c;
	while ((s[0] = c = getchar()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	
	
	if (!isdigit(c) && c != '.' && c != '-')
		return c; 		/* not a number*/
	
	i = 0;	

	if(c == '-') {
		if(isdigit(c = getchar()) || c == '.')
			s[++i] = c;
		else {
			if(c != EOF)
				ungetch(c);
			return '-';
		}
	}
     
	if (isdigit(c))		/* collect integer part */
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')		/* collect fraction part*/
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		c = a;
	return NUMBER;
}