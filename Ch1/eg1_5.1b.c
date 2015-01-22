#include <stdio.c>

/* copy input to output; 2nd version */

main()
{
	int c;
	
	while ((c = getchar()) != EOF)
	putchar(c);


}

/* Explanation
-> With while, gets a value character = c and test if it's != EOF
-> If it was not, executes while's body statement until EOF
-> print
*/
