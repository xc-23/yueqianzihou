#include <stdio.h>
void main()
{
	int i,j,k,sum=1;
	scanf("%d",&k);
	for(i=1;i<k;i++)
	{
		for(j=1;j<i;j++)
			if(i%j==0)
				sum=sum+j;
		if(sum==i)
			printf("%d\n",i);
		sum=0;
	}
}
