#include <stdio.h>
#include <string.h>

char a[20]={0},i=0;

void daoxu(char b[])
{
	if(b[i++]!='\0')
		daoxu(b);
	printf("%c",b[i-2]);
	i--;
}

#if 0			//亮哥代码

void F(char s[])
{	
	if('\0'==s[0])
		return;
	F(&s[1]);
	printf("%c",s[0]);
}
	
#endif
void main()
{
	fgets(a,20,stdin);
	daoxu(a);//F(a);
	printf("\n");
}
