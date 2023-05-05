#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Factorial: %d",&fact);
	return 0;
	
}
output:
Enter the number:12
Factorial: -521851680
