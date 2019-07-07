#include<stdio.h>


int convert(int n,int pv)
{
	int res=0;
	while(n!=0)
	{
	
	int rem= n%2;
	res=rem*pv+res;
	n=n/2;
	pv=pv*10;
}
return res;
}

int recursionConvert(int n,int pv)
{
	int rem=0;
	if(n==0)
		return 0;
	rem =(n%2)*pv;
	return  rem+recursionConvert(n/2,pv*10);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",convert(n,1));
	printf("\n%d",recursionConvert(n,1));
}
