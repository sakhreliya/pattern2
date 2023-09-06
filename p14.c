#include<stdio.h>
main()
{
	char j,i,k;
	
	for(i='A';i<='E';i++)
	{
		for(k=i;k<='D';k++)
		{
			printf(" ");
		}
		for(j='A';j<=i;j++)
		{
			printf("%c",j);		
		}
		printf("\n");
	}
}
