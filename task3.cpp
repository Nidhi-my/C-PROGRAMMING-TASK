#include<stdio.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,sum=0,avg=0;
	printf("enter the 1st sub marks\n ");
	scanf("%d",&m1);
	printf("enter the 2nd sub marks\n");
	scanf("%d",&m2);
	printf("enter the 3rd sub marks\n");
	scanf("%d",&m3);
	 sum=m1+m2+m3;
	 avg=sum/3;
	 printf("sum is %d ",sum);
	 printf("\naverage is %d ",avg);
	 getch();
}
