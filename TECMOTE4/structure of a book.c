
#include<stdio.h>
#include<string.h>
struct book{
char title[30];
char author[20];
int year;
char isbn[40];
float price;
};
int main()
{
struct book omg;
// user to enter this variables

printf("enter book title:");
scanf("%s",&omg.title);

printf("enter author of the book:");
scanf("%s",&omg.author);

printf("enter the  year of publish:");
scanf("%s",&omg.year);

printf("enter the publisher:");
scanf("%d",&omg.isbn);

printf("enter book price:");
scanf("%f",&omg.price);



// print the variables
printf("title=%s\n",omg.title);
printf("author=%s\n",omg.author);
printf("year of publish=%d\n",omg.year);
printf("isbn=%d\n",omg.isbn);
printf ("book price=%f",omg.price);
}
