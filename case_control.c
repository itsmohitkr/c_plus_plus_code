#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
 int main()
{
    int choice,a,b,c,i,x,y;
    while(1)
   {
    printf("\n1 add");
    printf("\n2 even or odd");
    printf("\n3 natural nos");
    printf("\n4 exit");
    printf("\n  select any of the above option");

    scanf("%d",&choice);
    switch(choice)
    {


    case 1:
            printf("enter any two nos" );
            scanf("%d%d",&x,&y);
            a=x+y;
            printf("sum is %d",a);
            break;
    case 2:
            printf("enter any nos ");
            scanf("%d",&b);
            if(b%2==0)
                printf("nos is even");
            else
                printf("odd");
            break;
    case 3:
            printf("enter any nos ");
            scanf("%d",&c);
            for(i=1;i<=c;i++)
                printf("%d",i);
            break;
    case 4:
            exit(0);

    default:
            printf("invalid option");

    }
    }

}
