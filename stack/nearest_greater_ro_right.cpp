#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

void nearest_to_right(int arr[],int n){
    stack<int> s;
    vector<int> v;
    for (int i = n - 1; i >= 0;i--){
        if(s.empty()){
            v.push_back(-1);
        }

        else if(!s.empty() and arr[i]<s.top()){
            v.push_back(s.top());
        }
        else if(!s.empty() and arr[i]>=s.top()){
            while(!s.empty() and arr[i]>=s.top()){
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

    reverse(v.begin(), v.end());

    for(auto x:v){
        cout << x << " ";
    }
}

int main(){
    int arr[] = {1, 3, 0, 0, 1, 2, 4};
    int n = sizeof(arr) / sizeof(int);

    nearest_to_right(arr, n);
    return 0;
}
