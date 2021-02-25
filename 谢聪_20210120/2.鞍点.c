#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define x 4
#define y 4

void main()
{
	srand(time(NULL));
	int a[x][y]={{1,2,3,4},{9,8,7,5},{4,5,6,8},{1,2,3,4}};
	int b[x][y]={0};
	int i,j,maxh[y],minl[x];

	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			//a[i][j] = rand()%20;
			maxh[i]=(a[i][j]>maxh[i])?a[i][j]:maxh[i];	
		}
	
	for(i=0;i<y;i++)
		printf("%d*",maxh[i]);
	printf("\n");

	
	for(i=0;i<x;i++)
		minl[i]=a[0][i];

	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}

	for(i=0;i<y;i++)
		for(j=0;j<x;j++)
		{
			minl[i]=(a[j][i]<minl[i])?a[j][i]:minl[i];
		}

	for(i=0;i<x;i++)
		printf("%d*",minl[i]);
	printf("\n");

	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
		{
			if(a[i][j]==maxh[i])
				if(maxh[i]<=minl[j])
					printf("%d行，%d列**",i+1,j+1);
		}
}


