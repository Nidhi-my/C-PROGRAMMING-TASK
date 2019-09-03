#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("enter the string\n");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	printf("pallindrome\n");
	else
	printf("not pallindrome\n");
	getch();
}
