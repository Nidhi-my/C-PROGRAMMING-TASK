#include<stdio.h>
#include<conio.h>
int main()
{
	struct book
	{
	  char title[100],author[100],genre[100];	
	};
    book a,b;
    printf("1st book\n");
    printf("enter the title of the book\n");
    gets(a.title);
    printf("enter the author of the book\n");
    gets(a.author);
    printf("enter the genre of the book\n");
    gets(a.genre);
    printf("2nd book\n");
    printf("enter the title of the book\n");
    gets(b.title);
    printf("enter the author of the book\n");
    gets(b.author);
    printf("enter the genre of the book\n");
    gets(b.genre);
    printf("1st book");
    printf("\ntitle of the book %s",a.title);
    printf("\nauthor of the book %s",a.author);
    printf("\ngenre of the book %s\n",a.genre);
    printf("2nd book");
    printf("\ntitle of the book %s",b.title);
    printf("\nauthor of the book %s",b.author);
    printf("\ngenre of the book %s",b.genre);
    getch();
}
