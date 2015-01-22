
#include <stdio.h>

/* print Fahrenheit-Celsius table 
	for fahr = 0, 20, ..., 300 */

main()
{
	int fahr, celsius;
	int lower, upper, step;
	
					/* assignment statement*/
	lower = 0; 		/* lower limit of temperature table*/
	upper = 300; 	/* upper limit */
	step = 20; 		/* step size*/
	
	fahr = lower;
	while (fahr <= upper){			
		celsius = 5.0 * (fahr-32) / 9;
		printf("%d\t %d\n", fahr, celsius);
		fahr = fahr + step;
	
	}
}


/* WHILE Loop
 -> the condition in () is tested, if it is true, the body statements in {} will be execute
 -> the condition is retests and the body statements is re-executes 
 -> until the test become false, then the loop ends
 */
 
 /* The reason we use 5 * (fahr-32) / 9 instead of (5/9)(fahr - 32)
 	is because C will truncates integer division.
 	here, 5/9 will read as 0 and if we use 5/9, we will get zero for all 
 	
 	But, in the ex1_4, we could do (5.0/9.0)(fahr - 32) 
 	because it shows the ratio of two floating points value */
 	
 
 