#include <stdio.h>

void main()
{
	int a[3][4];
	int i,j;
	for(i=0;i<12;i++)
		switch(i)
		{
			case 0:;
			case 1:;
			case 2:;
			case 3:scanf("%d",&a[0][i]);break;
			case 4:;
			case 5:;
			case 6:;
			case 7:scanf("%d",&a[1][i-4]);break;
			case 8:;
			case 9:;
			case 10:;
			case 11:scanf("%d",&a[2][i-8]);break;
		}

	for(i=0;i<12;i++)
		switch(i)
		{
			case 0:printf("\n");
			case 1:;
			case 2:;
			case 3:printf("%4d",a[0][i]);break;
			case 4:printf("\n");
			case 5:;
			case 6:;
			case 7:printf("%4d",a[1][i-4]);break;
			case 8:printf("\n");
			case 9:;
			case 10:;
			case 11:printf("%4d",a[2][i-8]);break;
		}
	printf("\n");
}
