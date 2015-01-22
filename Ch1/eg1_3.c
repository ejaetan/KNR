#include <stdio.h>

/* print Fahrenheit-Celsius table */

main()
{
	int fahr;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

/* FOR loop
   generalization of WHILE loop
   it initialize fahr = 0 -> test condition fahr <= 300, 
   then, execute printf  -> fahr + 20 -> retest condition
   
   -> initialize, test conditions in () -> execute printf 
   -> retest condition -> re-execute
   -> end loop when condition is false 
   
*/
   