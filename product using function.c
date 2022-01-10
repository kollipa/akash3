#include<stdio.h>
void product(int a,int b,int c)
{
	int d;
	d=a*b*c;
	printf("%d",d);
}
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	product(a,b,c);
	return 0;
}
