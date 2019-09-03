#include<stdio.h>
#include<conio.h>
int main()
{
	char name[100];int age;long long ph;
	printf("enter the name\n");
	scanf("%s",&name);
	printf("enter your age\n");
	scanf("%d",&age);
	printf("enter your phone no.\n");
	scanf("%lld",&ph);
	printf("\nname is %s",name);
	printf("\nage is %d",age);
	printf("\nphone noo. is %lld",ph);
	getch();
	
}
