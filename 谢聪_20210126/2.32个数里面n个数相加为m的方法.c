#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#define N 28

void main()
{
	int i,j,fh,m,n,sum,sumi,num=0;
	char a[N]={0};
	srand(time(NULL));
	for(i=0;i<N;i++)
	{
		fh=rand()%2;
		if(fh==0)
			a[i] =0 - rand()%30;
		else
			a[i] = rand()%30;
	}
	for(i=0;i<N;i++)
	{
		printf("%4d",a[i]);
		if((i+1)%10==0)
			printf("\n");
	}
	printf("\n");
	printf("请输入m的值:");
	scanf("%d",&m);
	printf("请输入n的值:");
	scanf("%d",&n);
	printf("\n");

	for(i=0;i<=0xfffffff;i++)/**/
	{
		sum=0;
		sumi=0;
		for(j=0;j<N;j++)
		{
			if((1&(i>>j))==1)
			{
				sum=sum+a[j];
				sumi++;
			}
		}
		if(sumi!=n)
			sum=0;
		sumi=0;
		if(sum==m)
		{
			for(j=0;j<N;j++)
			{
				if((1&(i>>j))==1)
				{
					printf("%3d(第%2d个)+",a[j],j+1);
					sumi++;
					if(sumi==n)
						break;
				}
			}
			printf("\b=%4d\n",m);
			num++;
		}
	}
	printf("一共%d种方法\n",num);
}

