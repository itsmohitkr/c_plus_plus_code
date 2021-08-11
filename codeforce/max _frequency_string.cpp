#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int i=0;
    char ch;
    int max_cnt=0;
    while(i<s.length()){
        int j=i+1;
        int cnt=1;
        while(s[j]==s[i]){
            cnt=cnt+1;
            j++;
        }
        if(cnt>max_cnt){
            max_cnt=cnt;
             ch=s[i];
        }
        i=i+cnt;       
    }
    cout<<ch;
    return 0;
}
