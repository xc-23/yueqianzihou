#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main()
{
    int shi,fen,miao,a;
    while(1)
	{
	    for(shi=0;shi<24;shi++)
	    	for(fen=0;fen<60;fen++)
	    		for(miao=0;miao<60;miao++)
			    {
					//a=8000000;
					//fflush(stdout);
			        printf("\r %02d:%02d  %02d  ",shi,fen,miao);
			        fflush(stdout); 
					sleep(1);	//延时1s
					//while(a--);
			    }
	}
}

