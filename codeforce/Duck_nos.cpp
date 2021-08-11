#include <iostream>
using namespace std;

bool isDucknos(string s,int n){

    
    int i=0;
    while(i<n && s[i]=='0')
    i++;
    while(i<n){

        if(s[i]=='0'){
            return true;        
        }
        i++;
    }
    return false;
}
int main() {

    string s;
    getline(cin,s);
    int n=s.length();

    if(isDucknos(s,n)){
        cout<<"IS DUCK NOS!!";
    }
    else{
        cout<<"NOT A DUCK NOS!!";
    }

    return 0;
}
