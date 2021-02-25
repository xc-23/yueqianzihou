#include <stdio.h>

void main()
{
	int a[10];
	int i,k;
	printf("请输入十个数：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);

	while(1)
	{
		printf("\n请输入你要删除的数：");
		scanf("%d",&k);
		for(i=0;i<10;i++)
			if(a[i]==k)
			{
				for(;i<9;i++)
				{
					a[i]=a[i+1];
				}
				break;
				
			}
		if(a[8]==a[9]||a[9]==k)
		{
			a[9]=0;
			break;
		}
	}
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
}
