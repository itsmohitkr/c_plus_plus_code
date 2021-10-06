#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void nearest_greater_to_left(int arr[],int n){
    stack<pair<int,int>> s;
    vector<int> v;
    for (int i =0; i < n;i++){
        if(s.empty()){
            v.push_back(-1);
        }

        else if(!s.empty() and arr[i]<s.top().first){
            v.push_back(s.top().second);
        }
        else if(!s.empty() and arr[i]>=s.top().first){
            while(!s.empty() and arr[i]>=s.top().first){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }

    for (int i = 0; i < n;i++)
    {
        cout << i-v[i] << " ";
    }
}

int main(){
    int arr[] = {100,80,60,70,60,75,85};
    int n = sizeof(arr) / sizeof(int);

    nearest_greater_to_left(arr, n);
    return 0;
}
