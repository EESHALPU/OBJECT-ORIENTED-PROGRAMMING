#include<stdio.h>
#include<conio.h>
//reverse of paramid pattern-2
int main()
{
	int i,j,k,n;
	n=5;
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}		
		
		for(k=1;k<=(2*i-1);k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
