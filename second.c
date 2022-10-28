//8.second smallest number.
#include<stdio.h>
int main()
{
	int a[10],i,min1,min2;
	printf("enter the 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]<a[1])
	{
	   min1=a[0];
	   min2=a[1];
    }
    else
    {
    min1=a[1];
    min2=a[0];
    }
    for(i=2;i<=9;i++)
    {
    	if(a[i]<min1)
    	{
    	  min2=min1;
    	  min1=a[i];
        }
        else
        if(a[i]<min2&&a[i]>min1)
        {
        	min2=a[i];
		}
	}
	printf("second smallest number is:%d",min2);
    return 0;
}
