#include <stdio.h>

#define space 1 
#define NSPACE 0

main()
{
	int c, state;
	
	
	while((c = getchar()) != EOF)
	{
		if ( c != ' ') {
			state = NSPACE;
			putchar(c);
		}
		else if (c == ' ') {
			if (state == nspace)
				putchar(c);
				state = space;
		}

		// a  j
		// 0110
		/*
		input: a  j
		output a j
		a -> a
		' ' -> ' '
		' ' -> 
		j -> j
		
		a
		
		' ', state = NSPACE
		
		
		
		*/
	}

}