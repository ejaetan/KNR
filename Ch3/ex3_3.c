/*
* Write a function expand(s1,s2) that expands shorthand notations like a-z in 
* the string s1 into the equivalent complete list abc...xyz in s2 . Allow for letters of 
* either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z .
* Arrange that a leading or trailing - is taken literally.
*/

#include <stdio.h>
#define	MAXLINE 1000

void expand(char s1[], char s2[])
{
	char s3[MAXLINE] = "abcdefghijklmnopqrstuvwxyz0123456789";
	char s4[MAXLINE];
	int i, j, k, m;
	
	for(i=0, k=0; s1[i] != '\0'; i++)
	{	
		if(s1[i] != '-')
			s4[k++] = s1[i];
			
	}	
	
	s4[1] = s4[k-1];
	s4[k] = '\0';
	
	for(m=0, j=0; s3[m] != s4[1]; m++)
	{
		if(s3[m] == s4[0])
		{	
			while (s3[m] != s4[1])
			{	
				s2[j++] = s3[m++];
			}
			break;	
		}
		
	}
	
	s2[j] = s4[1];
	s2[j+1] = '\0';
}

/* main(): run your function by giving s1 n s2, and verifying s2's 
output is equals to the desired function output.*/


int main()
{
	char s1[]= "c-d-5";
	char s2[MAXLINE];
	
	expand(s1,s2);
	printf("%s",s2);
		
	return 0;

}