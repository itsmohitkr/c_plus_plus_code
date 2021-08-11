#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    cout<<s[0];
    for(int i=1;i<s.size();i++)
    {   
        if(s[i]<'a')
        {
            cout<<endl;
            cout<<s[i];
        }
        else 
        cout<<s[i];
    }
}

