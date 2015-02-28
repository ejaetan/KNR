/* 
* Rewrite the routines day_of_year and month_day with pointers 
* instead of indexing 
*/


#include <stdio.h>


int day_of_year(int year, int month, int *day);

static char (**daytab)[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int main(){
	
	int a,b,c;
	
	a = 2010;
	b = 7; 
	c = 11;
	
	day_of_year(a,b,&c);
	
}

/* day_of_year: set day of year from month & day */
int day_of_year(int year, int month, int *day)
{
	int leap;
	
	leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
	
	while (daytab[leap]++ < month)
		*day += *daytab[leap];	

}