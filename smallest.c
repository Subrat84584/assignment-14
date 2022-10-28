//5.smallest number stored in an array
#include<stdio.h>
int main()
{
	int i,a[10];
	printf("enter your 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=9;i++)
	{
		if(a[0]>a[i])
		a[0]=a[i];
	}
	printf("smallest number is :%d",a[0]);
	return 0;
}
