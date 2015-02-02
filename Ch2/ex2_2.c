#include <stdio.h>

main()
{
	int c, i, lim;
	char s[lim];
	
	for (i=0; i < lim-1; ++i){
		if ((c=getchar()) != '\n')
			if (c != EOF)
				s[i] = c;
	}
	printf ("%s\n",s);
	return 1;
}