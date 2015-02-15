/*
* Extend atof to handle scientific notation of the form 123.45e-6 where a floating-point 
* number may be followed by e or E and an optionally signed exponent.
*/

#include <stdio.h>
#include <ctype.h>
#define MAXLINE 1000

int catchline(char line[], int max);
double atof(char s[MAXLINE]);


int main()
{
	char line[MAXLINE];
	
	while (catchline(line,MAXLINE) > 0)
			printf("%f\n", atof(line));
	
			
	return 0;
}

/* atof: convert string s into double*/
double atof (char t[])
{
	double val, power,v;
	int i, sign, dpt, a, b;
	
	for (i = 0; isspace(t[i]); i++) /* skip white space */
		;
	sign = (t[i] == '-') ? -1 : 1;
	if(t[i] == '+' || t[i] == '-')
		i++;
	for (val = 0.0; isdigit(t[i]); i++)
		val = 10.0 * val + (t[i] - '0');
	if (t[i] == '.')
		i++;
	for (power = 1.0; isdigit(t[i]); i++){
		val = 10.0 * val + (t[i] - '0');
		power *= 10.0;
	}
	
	/* input occurs to have 'e' or 'E' */
	
	if (t[i] == 'e' || t[i] == 'E'){
		i++;
		if (t[i] == '-'){
			i++;
			for (dpt = 0.0; isdigit(t[i]); i++)
				dpt = 10.0 * dpt + (t[i] - '0');
	
			v = 1;
			for (a = 1 ;  a <= dpt ; a++ )
				v *= 10;
			
			return (sign * val / power) * (1/v);
		}
	
		else if(t[i] != '-'){
			for (dpt = 0.0; isdigit(t[i]); i++)
				dpt = 10.0 * dpt + (t[i] - '0');
	
			v = 1;
			for (a = 1 ;  a <= dpt ; a++ )
				v *= 10;
			return (sign * val / power) * v;
		}	
	}
					
	

	/* input occurs to have '^' */
	
	else if (t[i] == '^'){
		i++;
		if (t[i] == '-'){
			i++;
			for (dpt = 0.0; isdigit(t[i]); i++)
				dpt = 10.0 * dpt + (t[i] - '0');
		
			b = sign * val / power;
			v = 1;
			for (a = 1 ;  a <= dpt ; a++ )
				v *= b;
			return 1 / v;
		}
		else if (t[i] != '-'){
			for (dpt = 0.0; isdigit(t[i]); i++)
				dpt = 10.0 * dpt + (t[i] - '0');
		
			b = sign * val / power;
			v = 1;
			for (a = 1 ;  a <= dpt ; a++ )
				v *= b;
			return v;
		
		}
	}
	
	
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