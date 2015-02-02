#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

/* print Celsius-Fahrenheit Table 
* for cels = 0, 20, ..., 300; floating-point version
*/

main()
{
	float fahr, cels;
	
	printf("Celsius-Fahrenheit Conversion Table\n");
	
	cels = LOWER;
	while (cels <= UPPER){			
		fahr = (9.0/5.0) * (cels) + 32.0;
		printf("%6.1f %3.1f\n", cels, fahr);
		cels = cels + STEP;
	
	}
		

}