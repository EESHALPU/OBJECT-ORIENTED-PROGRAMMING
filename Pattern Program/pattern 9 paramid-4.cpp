#include<stdio.h>
#include<conio.h>
//Pattern for paramid structure-3
int main()
{
	int i,j,k,n;
	n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		
		for(k=1;k<=i;k++)	
			printf("*");
			printf("\n");
	}
	
		for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		
		for(k=1;k<=i;k++)	
			printf("*");
			printf("\n");
	}
	
	return 0;
	
}
