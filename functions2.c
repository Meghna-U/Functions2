#include<stdio.h>
int prime(int a,int b);
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	int z=prime(x,x/2);
	if(z==1)
	{
		printf("%d is a prime number",x);
	}
	else
	{
		printf("%d is not a prime number",x);
	}
	return 0;
}
int prime(int p,int q)
{
	if(q==1)
	{
		return 1;
	}
	else
	{
		if(p%q==0)
		{
			return 0;
		}
		else
		{
			return prime(p,q-1);
		}
	}
}
