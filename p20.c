#include<stdio.h>
main()
{
	int j,i,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		for(j=5;j>=i;j--)
		{
				if(j%2==1)
			{
				printf("1");
			}	
			else
			{
				printf("0");
			}	
		}
		printf("\n");
	}
}
