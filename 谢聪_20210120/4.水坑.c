#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define x 10
#define y 10

int a[x][y];

void cl(int i,int j)
{
	int up=0,down=0,left=0,right=0;
	if(i-1>=0)
		if(a[i][j]+a[i-1][j]==2)
		{
			a[i][j]=0;
			cl(i-1,j);
			a[i][j]=1;
			up=1;
		}
		else
			up=0;
	if(i+1<x)
		if(a[i][j]+a[i+1][j]==2)
		{
			a[i][j]=0;
			cl(i+1,j);
			a[i][j]=1;
			down=1;
		}
		else
			down=0;
	if(j-1>=0)
		if(a[i][j]+a[i][j-1]==2)
		{
			a[i][j]=0;
			cl(i,j-1);
			a[i][j]=1;
			left=1;
		}
		else
			left=0;
	if(j+1<y)
		if(a[i][j]+a[i][j+1]==2)
		{
			a[i][j]=0;
			cl(i,j+1);
			a[i][j]=1;
			right=1;
		}
		else
			right=0;
	if(up)
		a[i-1][j]=0;
	if(down)
		a[i+1][j]=0;
	if(left)
		a[i][j-1]=0;
	if(right)
		a[i][j+1]=0;
	a[i][j]=0;
}

void main()
{
	int ken=0;
	srand(time(NULL));
	int i,j,i1,j1,k,sum=0,people,choice=0;

	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			a[i][j] = rand()%2;	
		}
	printf("初始方块\n\n");
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			printf("%2d",a[i][j]);
		printf("\n");
	}
	
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			if(a[i][j])
			{
				cl(i,j);
				ken++;
			}
	printf("有%d个坑\n",ken);
}


