// topic enumerator

enum boolean
{
    true,false   //boolean se banne wala variable can only store these two value

};
enum boolean isEven(int x)
{
    if(x%2==0)
        return(true);
        else
        return(false);

}



main()
{
    int n;
    enum boolean result;
    printf("enter any nos");
    scanf("%d",&n);
    result=isEven(n);
    if(result==true)
        printf("even nos ");
    else
    printf("odd nos");
}
