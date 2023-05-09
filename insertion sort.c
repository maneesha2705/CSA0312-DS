#include <stdio.h>
int main()
{
	int a,j,i,b[10],c;
	printf("enter the no.of elements in array:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{  
	printf("enter the elements in array:");
	scanf("%d",&b[i]);
	}
	for(i=0;i<=a;i++)
	{
		for(j=i+1;j<a;++j)
		{
			if(b[i]>b[j])
			{
				c=b[i];
				b[i]=b[j];
				b[j]=c;
					
			}
		}
	}
	printf("the insertion sorting=");
	for(i=0;i<=a;++i)
	printf("%d  ",b[i]);
	
}
enter the no.of elements in array:5
enter the elements in array:2
enter the elements in array:4
enter the elements in array:6
enter the elements in array:8
enter the elements in array:9
the insertion sorting=2  4  6  8  9  0  
