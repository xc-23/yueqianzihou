#include<stdio.h>

void marriage()
{
	int a,b,c;
	for(a=0;a<3;a++)
		for(b=0;b<3;b++)
			for(c=0;c<3;c++)
				if(a!=0&&a!=2&&c!=2&&a!=b&&b!=c&&a!=c)
					printf("X与%c\tY与%c\tZ与%c\t",'A'+a,'A'+b,'A'+c);
}

void six()
{
	int i,j,n,m;
	for(i=100000;i<1000000;i++)
		for(j=316;j<1000;j++)
			if(i==j*j)
				for(m=0;m<i%1000;m++)
					if(i%1000==m*m)
						for(n=0;n<i/1000;n++)
							if(i/1000==n*n)
								printf("%d\n",i);
}

void main(void)
{
	int a;
	printf("1为marriage问题，2为6位数的求解。\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:marriage();break;
	case 2:six();break;
	}			
}	

