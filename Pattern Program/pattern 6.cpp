#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n=15;
	for(i=1;i<n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i;k++)
		{
			printf("*");			
		}
		printf("\n");
		
	}

	return 0;
}
