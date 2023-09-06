#include<stdio.h>
main()
{
	int j,i,k;
	
	for(i=5;i>=1;i--)
	{
		for(k=i;k<=4;k++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
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
