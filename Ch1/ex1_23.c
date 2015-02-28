/*
* Write a program to remove all comments from a C program. 
* Don't forget to handle quoted strings and character constants properly.
* C comments do not nest. 
*/

#include <stdio.h>

#define IN 1
#define OUT 0


/* this is a comment */

int main()
{
	int c,k, state;
	
	state = IN;
	
	if((c = getchar()) != EOF){
		while ((k = getchar()) != EOF) {
		if (state == IN && c == '/' && k == '*'){
			state = OUT;
			
			} else if (state == OUT && c == '*' && k == '/') {
				state = IN;
		
			}else if (state == IN){
				putchar(c);	
			}				
		c = k;
		}
	}
/* this is another comment */

}