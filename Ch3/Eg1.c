#include <stdio.h>


 
int main ()
{

   /* local variable definition */
   
   char grade = getchar();
   int c;

   switch(grade)
   {
   case 'A' :
      printf("Excellent!\n" );
      break;

   case 'C' :
      printf("Well done\n" );
      break;
      
   case 'D' :
      printf("You passed\n" );
      break;
    
   case 'F' :
      printf("Better try again\n" );
      break;
   
   default :
      printf("Invalid grade\n" );
      break;
   }
   printf("Your grade is  %c\n", grade );
   
   while ( (c = getchar()) != EOF)
   		putchar(c);
 
   return 0;
}

