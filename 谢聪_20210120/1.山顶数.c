#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define x 10
#define y 10

void main()
{
	srand(time(NULL));
	int a[x][y];
	int b[x][y]={0};
	int i,j,max,sd1,sd2,sd3,sd4;
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			a[i][j] = rand()%10;
			max=(a[i][j]>max)?a[i][j]:max;
		}
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			printf("%2d",a[i][j]);
		printf("\n");
	}
	printf("山顶数所在的位置：\n");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			sd1=1,sd2=1,sd3=1,sd4=1;
			if(i-1>=0)
				if(a[i][j]>a[i-1][j])
					sd1=1;
				else
					sd1=0;
			if(i+1<x)
				if(a[i][j]>a[i+1][j])
					sd2=1;
				else
					sd2=0;
			if(j-1>=0)
				if(a[i][j]>a[i][j-1])
					sd3=1;
				else
					sd3=0;
			if(j+1<y)
				if(a[i][j]>a[i][j+1])
					sd4=1;
				else
					sd4=0;
			if(sd1&sd2&sd3&sd4)
			{
				b[i][j]=a[i][j];
				printf("%d行,%d列**",i+1,j+1);
			}
		}
	for(i=0;i<x;i++)
	{
		printf("\n");
		for(j=0;j<y;j++)
			printf("%2d",b[i][j]);
	}
	printf("     max=%d\n",max);
}


