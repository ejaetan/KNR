/* 
* Define a macro swap(t,x,y) that interchanges two arguments of type t . 
* (Block structure will help.)
*/

#include <stdio.h>
#define SWAP(t,w,y) {t temp;\
						temp = w;\
						w = y;\
						y = temp;\
									}
									

int main()
{
    int a = 100;
    int b = 88;

    SWAP(int, a, b);
    printf("%d %d\n",a,b);
    
    return 0;
}