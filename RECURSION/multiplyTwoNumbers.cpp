#include<stdio.h>

int multiply(int a,int b)
{
	if(b==0)
	return 0;
	return a+multiply(a,b-1);
}
int main()
{
	int a=10,b=90;
	if(a>b)
	printf("RESULT = %d",multiply(b,a));
	else
	printf("RESULT = %d",multiply(a,b));
}
