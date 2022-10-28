//9.read the value of array and display the reverse.
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("enter your value according to your array size");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("your value is in the array: ");
	for(i=0;i<=4;i++)
	{
	   printf("%d",a[i]);
    }
    printf("\nyour reverse value is in the array: ");
    for(i=4;i>=0;i--)
    {
    	printf("%d ",a[i]);
	}
	return 0;
	
}
