#include<stdio.h>
#include<conio.h>
//Pattern for paramid structure-3
int main()
{
	int i,j,k,n;
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");		
	}
	
	for(i=1;i<=n;i++)
	{
	
		for(k=n-i;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
	
	}

	return 0;
	
}
