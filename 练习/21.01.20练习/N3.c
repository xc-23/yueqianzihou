#include <stdio.h>

void main()
{
	int a[3][4];
	int i,j,max;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			max=(a[i][j]>max)?a[i][j]:max;
		}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	printf("     max=%d\n",max);
}


