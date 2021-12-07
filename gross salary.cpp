#include<stdio.h>
main()
{
	float basic,gross,da,hra;
	scanf("%f",&basic);
	if(basic<=10000)
	{
		da=basic*80/100;
		hra=basic*20/100;
	}
	else
	if(basic<=20000)
	{
		da=basic*90/100;
		hra=basic*25/100;
	}
	else
	{
		da=basic*95/100;
		hra=basic*3/100;
	}
	gross=basic+hra+da;
	printf("gross salary of employee=%2f");
}
