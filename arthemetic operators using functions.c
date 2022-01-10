#include<stdio.h>
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("\n%d",c);
}
void sub(int d,int e)
{
	int f;
	f=e-d;
	printf("\n%d",f);
}
void product(int g,int h)
{
	int i;
	i=g*h;
	printf("\n%d",i);
}
void mod(int j,int k)
{
	int l;
	l=k%j;
	printf("\n%d",l);
}
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l;
scanf("%d%d%d%d%d%d%d%d",&a,&b,&d,&e,&g,&h,&j,&k);
add(a,b);
sub(d,e);
product(g,h);
mod(j,k);
}
