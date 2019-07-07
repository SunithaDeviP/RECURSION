#include<stdio.h>

int trailingZeros(int n)
{
	if(n<5)
	return 0;
	return n/5 + trailingZeros(n/5);
}
int main()
{
	int fact = 5;
//	printf("FACTORILA OF 5 = %d",fact;
	printf("NO. OF TRAILING %d",trailingZeros(fact)); 
}
