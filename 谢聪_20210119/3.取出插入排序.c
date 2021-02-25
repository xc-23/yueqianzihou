#include <stdio.h>

void main()
{
	int a[10];
	int i,j,k,b,z,mid;
	printf("请输入十个数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
	printf("\n");

	for(i=0;i<10;i++)
	{
		k=i+1;
		b=a[k];
		for(j=0;j<k;j++)
			if(a[j]>a[k])
			{
				break;
			}
		if(j<k)
		{
			k=j;
			for(j=i;j>=k;j--)
				a[j+1]=a[j];
			a[k]=b;
		}
		printf("\n");
		for(z=0;z<10;z++)
			printf("%d  ",a[z]);
	}
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
}

