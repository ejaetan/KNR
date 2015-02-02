#include <stdio.h>

main()
{
	int c, b,t,nl;
	
	b = t = nl = 0;
	while ((c = getchar()) != EOF)
		if (c == ' ')
		 	++b; 
		else if ( c == '\t')
			++t; 
		else if (c == '\n')
			++nl;
		 	
	printf("%d %d %d\n", b, t, nl);


}