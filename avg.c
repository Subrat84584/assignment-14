//2.avarage of numbers.
#include<stdio.h>
int main()
{
	int a[10],i,sum;
	printf("enter 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	float avg=sum/10;
	printf("Avg is: %0.02f",avg);
	return 0;
}
