#include <stdio.h>

void main()
{
	int i,sum=1;
	for(i=1;i<=1024;i++)
	{
		sum=sum*2;
		sum=sum%10000;
	}
	printf("%d\n",sum);
}

