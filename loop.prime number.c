#include<stdio.h>
main()
{
	int n,c,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(n%i==0)
    	{
    		c=c+1;
		}
}
		if(c==2)
		{
			printf("it is a prime number");
        }

		if(c!=2)
		{
	        printf("it is not a prime number");
		}

}
