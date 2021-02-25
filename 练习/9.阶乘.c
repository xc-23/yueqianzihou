#include <stdio.h>

int jc(unsigned int j)
{
	if(j==0||j==1)
		return(1);
	return j*jc(j-1);
}

int main()
{
	unsigned int i;
	while(1)
	{
		printf("请输入要求的结成：");
		scanf("%d",&i);
		i=jc(i);
		printf("\n%d\n",i);
	}
}

