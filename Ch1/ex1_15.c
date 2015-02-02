/* Rewrite the temperature conversion program of Section 1.2 
*  to use a function for conversion
*/

#include <stdio.h>

#define STEP 20
#define LOWER 0
#define UPPER 300


/* function declaration */
float convert(float m);

main()
{
	/* local variable definition*/
	int fahr;
	
	/* calling a function to get celsius */
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, convert(fahr));
	return 0;
}

/* function returning celsius*/
float convert(float k)
{	
	float celsius; 
	
	celsius	= (5.0/9.0) * (fahr - 32.0);
	return celsius;
}