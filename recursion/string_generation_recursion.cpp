#include<iostream>
using namespace std;
void genarate_string(char in[],char out[],int i,int j)
{
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
    }
    //rec case
    //one digit at time
    int digit=in[i]-'0';
    char ch=digit+'a'-1;
    out[j]=ch;
    genarate_string(in,out,i+1,j+1);

    //two digit at a time
    if(in[i+1]!='\0'){
        int seconddigit=in[i+1]-'0';
        int no=digit*10+seconddigit;
        if(no<=26){
            ch=no+'a'-1;
            out[j]=ch;
            genarate_string(in,out,i+2,j+1);

        }
    }
    return;
}
int main()
{

    char a[10];
    cin>>a;
    char out[100];
    genarate_string(a,out,0,0);
    return 0;

}
