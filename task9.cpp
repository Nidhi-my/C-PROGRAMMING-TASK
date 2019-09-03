#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,fact=1;
	printf("enter the no. whose factorial has to be calculated\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	getch();
}
