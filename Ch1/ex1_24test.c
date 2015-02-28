/*
*Write a program to check a C program for rudimentary syntax errors like 
*unbalanced parentheses, brackets and braces. Don't forget about quotes, 
*both single and double, escape sequences, and comments. 
*(This program is hard if you do it in full generality.) 
*/

#include <stdio.h>
#define MAX 1000


int main()
{
	
	int c,k,l,m,state;
	int i = 0, j = 0, p = 0, d = 0 ;
	char s[MAX], t[MAX], r[MAX],h[MAX];

		
	if((c = getchar()) != EOF) {
		while ((k = getchar()) != EOF) {
	
	/* To check if {}, (), [], "", and '' is unbalanced */
			if(c == '{')
				s[i++] = c;
			else if(c == '(')
				t[j++] = c;
			else if(c == '[')
				r[p++] = c;
			else if (c == '}')
				s[--i] = c;
			else if (c == ')')
				t[--j] = c;
			else if (c == ']')
				r[--p] = c;
			
	/* To check if comment signs is unbalanced */
			
			if (c == '/' && k == '*'){
				h[d++] = c;
			}
			else if (c == '*' && k == '/') {
				h[--d] = c;
			}			
	
		
	/* To check if escape sequence is unbalanced */
		
			if (c == '\\' && k == 'n'){
			
				if((l = getchar()) != EOF)
					;
				if ((m = getchar()) != EOF)
					;	
				if(l == 'n' && m != 'n')
					printf("Escape sequence syntax unbalanced1");
				c= m;
			}
			else if (c == '\\' && k == 'x'){
				if((l = getchar()) != EOF)
					;
				if ((m = getchar()) != EOF)
					;	
				if((l != 'h' || m != 'h'))
					printf("Escape sequence syntax unbalanced2");
				c= m;
			}
				
			else if(c == '\\' && k !='a' && k != 'b' && k != 'f' && k != 'r' 
				   && k != 't'&& k != 'v' && k != '\\'&& k != '\''&& k != '\"'&& k != '\?'){
				printf("Escape sequence syntax unbalanced3");
				
				c=k;		
			}
			else
				c = k;
		}		
			
	}
		
	if (d !=0)
		printf("Comment syntax unbalanced");
	
	if (i != 0 || j != 0 || p != 0)
		printf("Bracket(s) syntax unbalanced");
	
		return 0;	

	
}
