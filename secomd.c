//second highest number.
#include<stdio.h>
int main()
{
	int a[5],i,max1,max2;
	printf("enter your number of your size");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		max1=a[0];
		max2=a[1];
	}
   else
   {
       max1=a[1];
	   max2=a[0];	
   }	
   for(i=2;i<=4;i++)
   {
   	 if(a[i]>max1)
   	 {
   	 	max2=max1;
   	 	max1=a[i];
		}
		else
		if(a[i]>max2&&a[i]<max1)
		max2=a[i];
   }
   printf("second highest number is:%d",max2);
   return 0;
}
