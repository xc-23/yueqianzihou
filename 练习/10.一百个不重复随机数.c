#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void maopao(int b[])
{
	int i,j,mid;
	for(i=99;i>=0;i--)
		for(j=0;j<i;j++)
		{
			if(b[j]>b[j+1])
			{
				mid=b[j];
				b[j]=b[j+1];
				b[j+1]=mid;
			}	
		}
}

void main()
{
	int i,j,num;
	int a[100]={0};
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
		num=(rand()%100)+1;
		a[i]=num;
		for(j=0;j<i;j++)
			if(num==a[j])
				i=i-1;
	}
	for(i=0;i<100;i++)
		printf("\t%d",a[i]);

	maopao(a);
	printf("\n\n\n");
	for(i=0;i<100;i++)
	{
		if(i%10==0)
			printf("\n");
		printf("\t%d",a[i]);
	}
	printf("\n");
}

