#include<stdio.h>
#include<conio.h>
int main()
{
	int num,d;
	printf("enter the no. whose reverse has to printed\n");
	scanf("%d",&num);
	printf("reverse is\n");
	while(num>0)
	{
		d=num%10;
		num=num/10;
		printf("%d",d);
	}
	getch();
}
