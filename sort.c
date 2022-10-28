//6.sort
#include<stdio.h>
int main()
{
	int a[10],i,j,n;
	printf("enter your 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				n=a[i];
				a[i]=a[j];
				a[j]=n;
			}
			
		}
		
	}
	printf("The number are in sorting order");
	for(i=0;i<=9;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
