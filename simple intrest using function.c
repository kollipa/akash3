#include<stdio.h>
void si(float p,float t,float r)
{
	float a;
	a=p*t*r/100;
	printf("%f",a);
}
	int main()
	{
	
	float p,t,r;
	scanf("%f%f%f",&p,&t,&r);
	si(p,t,r);
	return 0;
    }
