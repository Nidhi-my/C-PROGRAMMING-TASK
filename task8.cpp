#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,a[10];
	printf("enter the no. whose multiplication table has to be printed\n");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		a[i]=i*num;
		printf("%d ",a[i]);
	}
	getch();
}
