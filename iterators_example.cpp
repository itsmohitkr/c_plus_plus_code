#include<iostream>
#include<vector>
#include<conio.h>
using namespace std;

//template +iterator->>freedom from all types of data types and continer

template<class container,class t>
container search(container start,container ends,t key){
    while(start!=ends){
        if(*start==key){
                return start;
        }
        start++;
    }
    return ends;
}
int main()
{
    vector<int>l={9,2,3,4,5};
    auto it=search(l.begin(),l.end(),40);
    if(it==l.end()){
        cout<<"not found";
    }
    else
    cout<<*it<<endl;
    return 0;
}

