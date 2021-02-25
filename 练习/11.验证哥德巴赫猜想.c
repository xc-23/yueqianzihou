#include<stdio.h>

int aa[500],n=0;
void sushu(int ch1)
{
	int i,j;
	for(i=3;i<=ch1;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
				break;
			else
				if(j==i-1)
				{
					aa[n]=i;
					n++;
				}
				else
					continue;
		}
	}	
}
void main()
{
	int ch=0,i,j;
	while(ch<4||ch%2!=0)
	{
		printf("请输入大于4的偶数  ");
		scanf("%d",&ch);
	}
	sushu(ch);
	getchar();
	for(i=0;i<n/2;i++)
		for(j=0;j<n;j++)
			if(aa[j]+aa[i]==ch)
				printf("%3d=%3d+%3d\n",ch,aa[i],aa[j]);

}

