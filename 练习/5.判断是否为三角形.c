#include<stdio.h>
void main()
{
	int a,b,c,i;
	i=0;
	printf("请输入三个数:\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	if(a+b>c)
		if(a+c>b)
			if(b+c>a)
				i=1;
	if(i==1)
		printf("YES\n");
	else
		printf("NO\n");
}
