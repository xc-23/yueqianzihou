/*
	寒假作业：
	结构体如下：
		struct test
		{
			char data[10];		//存储字符 A~Z	 从键盘输入
			int len[10][10];	//各个字符到另一个字符的 长度  从键盘输入
		};

	输入举例：
		ABCD
		A C 10			A->C 长度为10	len[0][2]=10
		A B 9			A->B 长度为 9
		A D 15
		D C 6
		B D 12
		……

	===》
		data：
			0 1 2 3
			A B C D
		len：
				A	B	C	D
				0	1	2	3
			A0  0   9   10  15
			B1  0	0	0	12
			C2	0	0	0	0
			D3  0   0   6	0

	要求：
		1：编写程序 实现上述输入和输出(写代码)
		2：试从键盘输入两个字母，判断是否能从第一个到第二个字母（判断是否能直达，写代码)
		3：从键盘输入两个字母，如果无法直达，请思考如何判断是否可以通过中转到达（思考，图再讲）
			思考！！！


	<---- 利用二维数组 存储 一维数组各个元素之间的关系 （图）
 */

#include <stdio.h>
#include <string.h>
struct test
{
	char data[10];		//存储字符 A~Z	 从键盘输入
	int len[10][10];	//各个字符到另一个字符的 长度  从键盘输入
};

/*
 *	find_data_index:用来在指定数组中查找某个元素的下标
 *		@ch：要查找的元素
 *		@data：字符数组
 *		@count:数组元素个数
 *	返回值：
 *		成功 返回元素在数组的下标
 *		失败 返回 -1
 */
int find_data_index(char ch,char data[],int count)
{
	int i;
	
	for(i=0;i<count;i++)
	{
		if(ch == data[i])
		{
			return i;
		}
	}

	return -1;
}

int main(void)
{
	int i,j;
	char ch1,ch2;
	int len;
	int count;
	int h,l;
	struct test t;

	memset(&t,0,sizeof(t));	//memory setting 设置指定地址空间中的数据
	
	printf("Please input 10's char\n");
	for(i=0;i<10;i++)
	{
		scanf("%c",&t.data[i]);
		if('\n' == t.data[i])
		{
			count = i;
			printf("input %d data:%s\n",i,t.data);
			break;
		}
	}
	
	printf("Please input data to data len,input \"# # 0\" end,eg A C 10:\n");
	while(1)
	{
		scanf("%c %c %d",&ch1,&ch2,&len);
		getchar();	//去掉scanf输入后剩余在缓冲区stdin中的 换行符
		
		if('#' == ch1 && '#' == ch2 && 0 == len)
		{
			break;
		}
		h = find_data_index(ch1,t.data,i);	//找到第一个符号的下标作为行标
		l = find_data_index(ch2,t.data,i);	//找到第二个符号的下标作为列标
		t.len[h][l] = len;
	}

	for(j=0;j<count;j++)
	{
		printf("\t%c",t.data[j]);
	}
	printf("\n");

	for(i=0;i<count;i++)
	{
		printf("%c",t.data[i]);
		for(j=0;j<count;j++)
		{
			printf("\t%d",t.len[i][j]);
		}
		printf("\n");
	}
}
