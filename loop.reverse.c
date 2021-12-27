#include<stdio.h>
int main()
{
	int n,sum=0,reverse;
	scanf("%d",&n);
	while(n%10!=0)
	{
		reverse=n%10;
		printf("%d\n",reverse);
		n=n/10;
	}
}
