
#define pi 3.14 //#define is a preprocessor command which is used to replace all pi with 3.14
main()
{
    int r;
    float a;
    printf("enter the radius of circle");
    scanf("%d",&r);
    a=pi*r*r;
    printf("area=%d",a);

}
