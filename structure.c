#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
struct book input()
{
    struct book b;
    printf("enter bookid,title,price");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return(b);
}

void main()
{
    struct book b1,b;
    b1=input();
   printf("\n %d %s %f",b.bookid,b.title,b.price);
}
