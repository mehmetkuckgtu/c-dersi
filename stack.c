#include<stdio.h>

void push(char item,char stack[],int size,int *top);
char pop(char stack[],int *top);
int main()
{
	const int mainSize=20;
	int mainTop2=4;
	int mainTop1=1;
	int mainTop0=0;
	char stackMain[mainSize];
	push('c',stackMain,mainSize,&mainTop2);
	push('a',stackMain,mainSize,&mainTop1);
	push('b',stackMain,mainSize,&mainTop0);	
	pop(stackMain,&mainTop0);
	int i;
	for(i=0;i<mainSize;++i)
	{
		printf("\n stack %d elemani %c",i,stackMain[i]);
	}
	return 0;
}

char pop(char stack[],int *top)
{
	char elem;
	if(*top>=0)
	{
		elem=stack[*top];//--*top diye yazýlabilir.
		--*top;
	}
	else
	{
		elem='\0';
	}
	return elem;
}
void push(char item,char stack[],int size,int *top)
{
	if (*top < size-1)
	{
	
		stack[*top] = item;
			++(*top);
	}
}
