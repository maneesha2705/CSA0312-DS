#include <stdio.h>
int main()
{
	int a,i,j,b[10],c;
	printf("enter the  no.of elements in list ");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("enter the elements in list");
		scanf("%d",&b[i]);
	}
		for(i=0;i<=a;i++)
	{
		for(j=i+1;j<a;++j)
		{
			if((b[i]+b[j])/2)
			{
				if(b[i]>b[j])
				{
				c=b[i];
				b[i]=b[j];
				b[j]=c;
				}
					
			}
		}
	}
	printf("the megerge sorting=");
	for(i=0;i<a;++i)
	printf("%d  ",b[i]);
}
output:
enter the  no.of elements in list: 5
enter the elements in list:12
enter the elements in list:11
enter the elements in list:15
enter the elements in list:18
enter the elements in list:19
the megerg sorting=11  12  15  18  19  
