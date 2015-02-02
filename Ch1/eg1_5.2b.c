#include <stdio.h>

/* count character in input; FOR version */

main()
{
	double nc;
	for (nc = 0; getchar() != EOF; ++nc)
	;
	printf("%.0f\n", nc);
}

