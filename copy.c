//write array to copy the elements one array to another.
#include<stdio.h>
int main()
{
	int original[5],copied[5],i;
	printf("enter your value according to your array size\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&original[i]);
	}
	for(i=0;i<=4;i++)
	{
		copied[i]=original[i];
	}
	printf("data original -> copied \n ");
	for(i=0;i<=4;i++)
	{
		printf(" %d   %d\n",original[i],copied[i]);
	}
	
	return 0;
}
