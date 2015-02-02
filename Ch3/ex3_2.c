/* Write a function escape(s,t) that converts characters like newline and tab 
into visible escape sequences like \n and \t as it copies the string t to s. 
Use a Switch. Write a function for the other direction as well,converting the 
escape sequences into the real characters */

#include <stdio.h>
#include <string.h>

void escape (char s[], char t[])
{
	int i = 0, j = 0;
	
	
	while (t[i] != '\0'){
		switch (t[i]){
			case '\n': 
				s[j++] = '\\';
				s[j++] = 'n';
				i++;
				break;
			
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				i++;
				break;
				
			default:
				s[j++] = t[i++];
				break;
	
	
		}
	}

}
