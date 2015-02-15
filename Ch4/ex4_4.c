#include <stdio.h>
#include <stdlib.h>

#define MAXVAL 100

double val[MAXVAL];
int sp = 0;

void push(double);
double pop (void);
void nopop(void);
void duplicate(void);
void swap(void);
void clear(void);
int isempty(void);


int main(){

	int i;
	
	nopop();
	push(50.0);
	nopop();
	push(-50.05);
	nopop();
	
	swap();
	nopop();
	
	duplicate();
	nopop();
	pop();
	nopop();
	
	return 0;
	
}



/* push: push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else{
		printf("error: stack empty\n");
		return 0.0;
	}
}

/* nopop: print the top element of the stack without popping */
void nopop(void)
{
	double a;
	
	if(sp > 0){
		a = val[sp-1];
		printf("%f\n",a);
	}else if (sp == MAXVAL){
		a = val[sp];
		printf("%f\n",a);
	}else if (sp == 0)
		printf("error: stack empty\n");
}

/* duplicate: copy the top element of the stack */
void duplicate(void)
{
	if(sp > 0)
		val[sp++] = val[sp-1];	
	else if (sp == MAXVAL)
		printf("error: stack full, can't do copy\n");
	else if (sp == 0)
		printf("error: stack empty, can't do copy\n");	
	
	
}

/* swap: exchange the top two elements of the stack */
void swap(void)
{
	double a;
	
	if (sp > 1 || sp == MAXVAL){
		a = val[sp-2];
		val[sp-2] = val[sp-1] ;
		val[sp-1] = a;
	
	}
	else if (sp < 1)
		printf("error: there is only one element in the stack");	
}

/* clear: clear the stack */
void clear(void)
{
	sp = 0;
	
}

/* isempty: verify if the stack is empty */
int isempty(void)
{
	if(sp != 0)
		return 0;
	else 
		return 1;
}





