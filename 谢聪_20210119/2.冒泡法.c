#include <stdio.h>

void main()
{
	int a[10];
	int i,j,mid;
	printf("请输入十个数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);

	for(i=9;i>=0;i--)
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				mid=a[j];
				a[j]=a[j+1];
				a[j+1]=mid;
			}	
		}
	
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
}

