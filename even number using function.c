#include<stdio.h>
void even(int n)
{
	if(n%2==0)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	even(n);
	return 0;
}

