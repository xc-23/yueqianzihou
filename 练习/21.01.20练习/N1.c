#include <stdio.h>

void main()
{
	int a[3][4];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
}

