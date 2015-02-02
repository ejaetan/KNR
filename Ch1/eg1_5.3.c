#include <stdio.h>

/* count lines in input */

main()
{
	int c, n1;
	
	n1 = 0;
	while ((c = getchar()) != EOF)
		if( c == '\n')
			++n1;
			printf("%d\n", n1);
}

/*
* At line11, == "means equal to" 
*
* At line11, /n was typed in a single quote. 
* For a character that was typed in a single quote, it became 
* a character constant and it represent its ASCII value. 
* Eg, 'A' ASCII character value = 65; '/n' ASCII character value = 10
*/