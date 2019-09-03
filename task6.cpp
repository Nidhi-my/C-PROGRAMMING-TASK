#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int p,num,j,n,sum=0,d;
	printf("enter the no. of digits\n");
	scanf("%d",&n);
	printf("enter the no.\n");
	scanf("%d",&num);
	j=num;
	while(num>0)
	{
		d=num%10;
		num=num/10;
		p=pow(d,n);
		sum=sum+p;
	}
	if(sum==j)
	printf("no. is armstrong\n");
	else
	printf("no. is not armstrong\n");
	getch();
}
