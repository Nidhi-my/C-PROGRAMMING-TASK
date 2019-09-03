#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,i,max,min;
	printf("enter the no. of terms\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("maximun no. is %d",max);
	printf("\nminimum no. is %d",min);
	getch();
}
