#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;
	scanf("%d",&n);
	printf("%d\n%d\n",a,b);
	while(c<=n)
	{
	c=a+b;
	printf("%d\n",c);
	a=b;
	b=c;
   }
}
