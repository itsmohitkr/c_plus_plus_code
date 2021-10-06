#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

void nearest_smaller_to_left(int arr[],int n){
    stack<int> s;
    vector<int> v;
    for (int i =0; i <n;i++){
        if(s.empty()){
            v.push_back(-1);
        }
        else if(!s.empty() and arr[i]>s.top()){
            v.push_back(s.top());
        }
        else if(!s.empty() and arr[i]<=s.top()){
            while(!s.empty() and arr[i]<=s.top()){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }

    for(auto x:v){
        cout << x << " ";
    }
}

int main(){
    int arr[] = {1, 3,2,4,2,0,5};
    int n = sizeof(arr) / sizeof(int);
    nearest_smaller_to_left(arr, n);
    return 0;
}
