#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<time.h>

 
void main()
{
	int a,b;
	int defen=0;
	int s[20][30],ss[20][30],sum[20];
	int g,h,g1=0,h1=0,i,j,z,ch,www,aaa,ddd,sss,sl;
	char k,zt;
	srand((unsigned long)time(0));

	for(a=0;a<20;a++)
		for(b=0;b<30;b++)
		{s[a][b]=0;ss[a][b]=0;}
    for(a=0;a<20;a++)
		for(b=0;b<30;b++)
			if(a==19||b==0||b==29)
		        ss[a][b]=1;
			else
				ss[a][b]=0;

	int yushe[4][4];
	int fk[7][4][4][4]=
	{
		{
			{0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0},
			{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0},
			{0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0},
			{0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0}
		},
		{
			{0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0},
			{0,1,1,0,0,1,0,0,0,1,0,0,0,0,0,0},
			{0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0},
			{0,0,1,0,0,0,1,0,0,1,1,0,0,0,0,0}
		},
		{
			{0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0},
            {0,1,0,0,0,1,0,0,0,1,1,0,0,0,0,0}, 
            {0,0,0,0,1,1,1,0,1,0,0,0,0,0,0,0},
			{0,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0}
		},
		{
			{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0},
			{0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0}
		},
		{
			{0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},
			{1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0},
			{0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0},
			{1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,0}
		},
		{
			{0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0},
			{0,1,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
			{0,0,0,0,1,1,1,0,0,1,0,0,0,0,0,0},
			{0,1,0,0,1,1,0,0,0,1,0,0,0,0,0,0}
		},
		{
			{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0},
			{0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0},
			{0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0},
			{0,1,0,0,1,1,0,0,1,0,0,0,0,0,0,0}
		}
	};


	for(;;)
	{	
start:		
		ch=12,k=48;
		g=g1;
		h=h1;
		g1=rand()%7;
	    h1=rand()%4;
		for(i=0;i<20;i++)
		{
begin:
        for(a=0;a<3;a++)
                for(b=0;b<4;b++)
					if(ss[a][b+12]==1)goto end;
		
		sl=1;
		    for(a=0;a<20;a++)
		        for(b=0;b<30;b++)
				{s[a][b]=0;sum[a]=0;}
            for(a=0;a<4;a++)
                for(b=0;b<4;b++)
				{
					s[a+i][b+ch]=fk[g][h][a][b];
					yushe[a][b]=fk[g1][h1][a][b];
				}
				
			
            
					
			for(a=0;a<20;a++)
			{
		        if((a==1)&&(b==30))
					printf("     ��һ������:");
				if((a==3)&&(b==30))
				{
					printf("       ");
					for(z=0;z<4;z++)
						if(yushe[0][z]==0)
							printf("  ");
						else
							printf("��");
				}
				if((a==4)&&(b==30))
				{
					printf("       ");
					for(z=0;z<4;z++)
						if(yushe[1][z]==0)
							printf("  ");
						else
							printf("��");
				}
				if((a==5)&&(b==30))
				{
					printf("       ");
					for(z=0;z<4;z++)
						if(yushe[2][z]==0)
							printf("  ");
						else
							printf("��");
				}
				if((a==6)&&(b==30))
				{
					printf("       ");
					for(z=0;z<4;z++)
						if(yushe[3][z]==0)
							printf("  ");
						else
							printf("��");
				}
				if((a==10)&&(b==30))
					printf("       �÷�: %d",defen);
				printf("\n");
		        for(b=0;b<30;b++)
				{
			        if(a==19||b==0||b==29)
						printf("��");
					else
				        if(ss[a][b])
				            printf("��");
				        else
					        if(s[a][b]) 
						        printf("��");
						    else
							    printf("  ");
				}
			}

			
			for(j=0;j<5000;j++)
			{
                if(kbhit())
				{
    	            k=getch();
                    break;
				}
			}

			switch(k)
			{
			case 101:printf("\n��Ϸ�����˳���\n�밴�س�������");k=48;getchar();goto end;break;//e�˳���Ϸ



			case 119:
				www=0;if(h+1==4)h=0;else h=h+1;
				for(a=0;a<4;a++)
					 {for(b=0;b<4;b++)
					 {www=fk[g][h][a][b]+ss[a+i][b+ch];
				if(www==2){www=5;break;}}if(www==5)break;}
				
					 if(www!=5)
					 for(a=0;a<4;a++)
					 {for(b=0;b<4;b++)
					 {s[a+i][b+ch]=fk[g][h][a][b];if(a==3&&b==3){system("cls");k=48;www=0;goto begin;}}}
					 else 
						 if(h==0)
							 h=3;
						 else
							 h=h-1;
					printf("\n%d",h);//
					;k=48;break;//w����ת��



			case 97:aaa=2;
				for(a=0;a<4;a++)
                {for(b=0;b<4;b++)
			        if(s[a+i][b+ch]+ss[a+i][b+ch-1]==2)
					{aaa=0;break;}if(aaa==0)break;aaa=1;}
					if(aaa==1){ch=ch-1;system("cls");k=48;goto begin;}


				;k=48;break;//a��������



			case 100:ddd=2;
				for(a=0;a<4;a++)
                {for(b=0;b<4;b++)
			        if(s[a+i][b+ch]+ss[a+i][b+ch+1]==2)
					{ddd=0;break;}if(ddd==0)break;ddd=1;}
					if(ddd==1){ch=ch+1;system("cls");k=48;goto begin;}
					;k=48;break;//d��������



			case 115:k=48;sl=0;break;//s�����½�



			case 32:printf("\n��Ϸ��ͣ");
				for(;;)
			{if(kbhit()){zt=getch();if(zt==32){break;zt=0;}}}k=48;break;



			default :k=48;
			}

            for(a=0;a<4;a++)
                for(b=0;b<4;b++)
			        if(s[a+i][b+ch]+ss[a+1+i][b+ch]==2)
					{
						for(a=0;a<4;a++)
                for(b=0;b<4;b++)
					if(ss[a+i][b+ch]!=1)	
					    ss[a+i][b+ch]=s[a+i][b+ch];i=20;}


				for(a=0;a<19;a++)
		            for(b=1;b<29;b++)
						sum[a]=sum[a]+ss[a][b];
					for(a=0;a<19;a++)
					 if(sum[a]==28)
					 {
						 for(b=1;b<29;b++)
							 ss[a][b]=0;
						 for(i=a;i>0;i--)
		                     for(j=1;j<29;j++)
							 {
								 ss[i][j]=ss[i-1][j];
							 }
						defen+=10;

						system("cls");
						goto start;
					 }

	   Sleep(sl*10);
    system("cls");
		}
	}
end:
    system("cls");
	printf("\n\n\n\n\n                     ��Ϸ����");
	getchar();
}