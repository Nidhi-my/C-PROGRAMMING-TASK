#include<stdio.h>
#include<conio.h>
int main()
{
	float cel,fah;
	printf("enter the temp. in celcius\n");
	scanf("%f",&cel);
	fah=(cel*1.8)+32;
	printf("%f",fah);
	getch();
}
