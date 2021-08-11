int fact(int)
void main()
{
    int x;
    x=fact(4);
    printf("%d",x);

}
int fact(int n)
{
     int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return(f);
}
