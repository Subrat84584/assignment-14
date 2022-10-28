//3.sum of all even num and odd num 
#include<stdio.h>
int main()
{
	int a[10],i,so=0,se=0;
	printf("enter 10 number");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		se=se+a[i];
		else
		so=so+a[i];
		
	}
	printf("sum of even num is:%d\n",se);
	printf("sum of odd num is:%d",so);
	return 0;
}
