#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define x 10
#define y 10

void main()
{
	srand(time(NULL));
	int a[x][y];
	int i,j,k,sum=0,people,choice=0;

	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			a[i][j] = rand()%2;	
		}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			printf("%2d",a[i][j]);
		printf("\n");
	}
	
	printf("请输入你们一共多少人\n");
	scanf("%d",&people);
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			sum=0;
			if(j+people-1<y)
			{
				for(k=0;k<people;k++)
					sum=sum+a[i][j+k];
				if(sum==0)
					choice++;
			}
		}
	}
	if(choice!=0)
		printf("您一共有%d种选择\n",choice);
	else
		printf("没有座位了\n");
}


