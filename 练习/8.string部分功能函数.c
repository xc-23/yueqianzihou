#include <stdio.h>
#include <string.h>

int mystrlen(char a[])
{
	printf("\n字符串长度：\n");
	int i=0;
	while(a[i]!='\0')
		i++;
	return i;
}

void mystrcpy(char a[],char b[])
{
	printf("\n字符串copy：\n");
	printf("输入a字符：\n");
	fgets(a,20,stdin);
	int i=0;
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
}

void mystrcat(char a[],char b[])
{
	printf("\n字符串粘贴：\n");
	int i=0,j=0;
	printf("输入a字符：\n");
	fgets(a,20,stdin);
	printf("输入b字符：\n");
	fgets(b,20,stdin);
	while(a[i]!='\0')
		i++;
	while(b[j]!='\0')
	{
		a[i+j-1]=b[j];
		j++;
	}
}

int mystrcmp(char a[],char b[])
{
	printf("\n字符串比较：\n");
	int i=0,j=0;
	printf("输入a字符：\n");
	fgets(a,20,stdin);
	printf("输入b字符：\n");
	fgets(b,20,stdin);
	while(a[i]!='\0'||b[i]!='\0')
	{
		j=a[i]>b[i]?1:(a[i]==b[i])?0:-1;
		if(j!=0)
			break;
		i++;
	}
	return j;
}

void main()
{
	char a[20]={0},b[20]={0},i;
	mystrcpy(a,b);
	puts(b);
	mystrcat(a,b);
	puts(a);
	i=mystrcmp(a,b);
	printf("my:%d\n",i);
	i=mystrlen(a);
	printf("my:%d\n",i);
	i=mystrlen(b);
	printf("my:%d\n",i);
}

