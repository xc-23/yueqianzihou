#include <stdio.h>

int main(void)
{
    int in=0,i=0,j;
    int a[5];
    printf("请输入一个数：");
    scanf("%d",&in);
    while(1)
    {
    	a[i]=in%10;
    	in=in/10;
    	if(in==0)
    		break;
    	i++;
    }
    in=0;
    j=i;
    printf("%d 位数 \n",i+1);
	for(;i>=0;i--)
	{
		printf("%d  ",a[i]);
		in=in*10+a[j-i];
	}
    printf("\n%d\n",in);
    return 0;
}

