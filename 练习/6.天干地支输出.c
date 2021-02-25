#include<stdio.h>

void main()
{
	int year,i,tian,di;
	while(1)
	{
		printf("请输入年份：");
		scanf("%d",&year);
		i=(year-3)%60;
		tian=i%10;
		di=i%12;
		
		switch(tian)
		{
			case 0:printf("\n该年是癸");break;
			case 1:printf("\n该年是甲");break;
			case 2:printf("\n该年是乙");break;
			case 3:printf("\n该年是丙");break;
			case 4:printf("\n该年是丁");break;
			case 5:printf("\n该年是戊");break;
			case 6:printf("\n该年是己");break;
			case 7:printf("\n该年是庚");break;
			case 8:printf("\n该年是辛");break;
			case 9:printf("\n该年是壬");break;
		}

		switch(di)
		{
			case 1:printf("子年\n");break;
			case 2:printf("丑年\n");break;
			case 3:printf("寅年\n");break;
			case 4:printf("卯年\n");break;
			case 5:printf("辰年\n");break;
			case 6:printf("巳年\n");break;
			case 7:printf("午年\n");break;
			case 8:printf("未年\n");break;
			case 9:printf("申年\n");break;
			case 10:printf("酉年\n");break;
			case 11:printf("戌年\n");break;
			case 0:printf("亥年\n");break;
		}

		printf("\n");

	}	
}


