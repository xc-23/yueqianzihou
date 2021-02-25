#include <stdio.h>
//#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char ch=0;
    while(ch<=64||(ch>90&&ch<97)||ch>122)
    {
		printf("\r请输入字母！");
		fflush(stdout);
    	scanf("%c",&ch);
    }
    if(ch<97)
    	ch=ch+32;
    else
    	ch=ch-32;
    printf("%c\n",ch);
    return 0;
}

