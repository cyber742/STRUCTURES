
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
// assign variable values
strcpy(omg.title,"introduction to programming");
strcpy(omg.author,"John Smith");
omg. year=2022;
strcpy(omg.isbn,"9655fffd4");
omg. price=49.99;




// print the variables
printf("title=%s\n",omg.title);
printf("author=%s\n",omg.author);
printf("year of publish=%d\n",omg.year);
printf("isbn=%d\n",omg.isbn);
printf ("book price=%f",omg.price);
}
