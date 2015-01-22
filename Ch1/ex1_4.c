 /* In eg1_2a, The reason we use 5 * (fahr-32) / 9 instead of (5/9)(fahr - 32)
 	is because C will truncates integer division.
 	here, 5/9 will read as 0 and if we use 5/9, we will get zero for all 
 	
 	But, in the below example, we could do (5.0/9.0)(fahr - 32) 
 	because it shows the ratio of two floating points value */
 	
 
 /* print Fahrenheit-Celsius table 
	for fahr = 0, 20, ..., 300 ; floating-point version*/


#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;
	
					/* assignment statement*/
	lower = 0; 		/* lower limit of temperature table*/
	upper = 300; 	/* upper limit */
	step = 20; 		/* step size*/
	
	printf("Celcius to Fahrenheit Conversion Table\n");
	fahr = lower;
	while (fahr <= upper){			
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	
	}
}
