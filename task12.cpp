#include<stdio.h>
#include<conio.h>
int main()
{
	int choice,cel,fare;
	float r1,r2;
	printf("press 1 to convert celsius to farenhite\n");
	printf("press 2 to convert farenhite to celsius\n");
	printf("press 3 to exit\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("you have selected to convert celsius to farenhite\n");
			printf("enter the temperature in celsius\n");
			scanf("%d",&cel);
			r1=cel*1.8+32;
			printf("the temp. in farenhite is %f",r1);
			break;
		case 2:
		    printf("you have selected to convert farenhite to celsius\n");
			printf("enter the temperature in farenhite\n");
			scanf("%d",&fare);
			r2=((fare-32)*5)/9;
			printf("the temp. in celsius is %f",r2);
			break;
		case 3:
		    printf("you choose to exit press enter\n");
			break;
		default:
		    printf("wrong choice\n");			
	}
	getch();
}
