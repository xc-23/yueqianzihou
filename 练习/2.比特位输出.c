#include<stdio.h>

void main()
{
	int a,i;
	scanf("%d",&a);
	for(i=31;i>=0;i--)
	{
		if((i+1)%4==0)
			printf(" ");
		if((a&(1<<i))==0)
			printf("0");
		else
			printf("1");
	}
	printf("\n");		
}
