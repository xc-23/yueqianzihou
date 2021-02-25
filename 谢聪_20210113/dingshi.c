#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{

    int time=0;
    for(time=10;time>0;time--)
    {
		//printf("\033[2J");
        printf(" 定时时间: %d  ",time);
        fflush(stdout); //冲洗流（文件IO的内容），stdout 输出缓存区，
						//冲洗输出缓冲区就可以把缓存区的数据直接输出
		sleep(1);	//延时1s
    }
    printf("\rbloom                 \n");
    fflush(stdout); //冲洗流（文件IO的内容），stdout 输出缓存区，
                    //冲洗输出缓冲区就可以把缓存区的数据直接输出
    return 0;
}
