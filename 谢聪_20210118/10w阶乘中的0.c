#include <stdio.h>
int sum=0;
void add(int a)
{
	if(a%5==0)
	{
		sum++;
		add(a/5);
	}
}

void main()
{
	int i,k;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
		add(i);
	printf("%d\n",sum);
}

