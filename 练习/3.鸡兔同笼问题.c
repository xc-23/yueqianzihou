#include<stdio.h>

void main()
{
	int ji,tu,tou,tui;
	while(1)
	{
		tu=0,tou=0;
		while(tui<(2*tou)||tui>(4*tou))
		{
			printf("\r请输入正确的脑袋和腿的数量:");
			fflush(stdout);
			scanf("%d,%d",&tou,&tui);
		}
		tu=(tui-2*tou)/2;
		ji=tou-tu;
		printf("鸡有%d只，兔有%d只\n",ji,tu);	
	}
}

