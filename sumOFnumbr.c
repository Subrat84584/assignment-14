//1.
#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	printf("enter 10 number in the arrya");
	for(i=0;i<=9;i++)
	{
	    scanf("%d",&a[i]);
	    sum=sum+a[i];
    }
    printf("sum of number is:%d",sum);
    return 0;
}
