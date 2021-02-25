#include <stdio.h>

int zimu(char *a,char *b)
{
	int i=0,j=0;
	while(*(a+i)!='\0')
	{
		if(*(a+i)==*b)
			for(;;)
			{
				if(*(b+j)=='\0')
					return 1;
				else if(*(a+i)!=*(b+j))
				{
					i--;
					break;
				}
				i++;
				j++;
			}
		i++;
		j=0;
	}
	return 0;
}

void main()
{
	int i,j;
	char a[100]={0};
	char b[100]={0};
	while(1)
	{
		printf("请输入母字符\n");
		fgets(a,100,stdin);
		printf("请输入子字符\n");
		scanf("%s",b);
		getchar();
		i=zimu(a,b);
		printf("\n%d\n",i);
	}
}

