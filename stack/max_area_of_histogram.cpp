#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void nearest_smaller_to_left(int arr[],int n,vector<int>&v1){
    stack<pair<int,int>> s;
    for (int i =0; i <n;i++){
        if(s.empty()){
            v1.push_back(-1);
        }
        else if(!s.empty() and arr[i]>s.top().first){
            v1.push_back(s.top().second);
        }
        else if(!s.empty() and arr[i]<=s.top().first){
            while(!s.empty() and arr[i]<=s.top().first){
                s.pop();
            }
            if(s.empty()){
                v1.push_back(-1);
            }
            else{
                v1.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    for(auto x:v1){
        cout << x << " ";
    }
    cout << endl;
}


void nearest_smaller_to_right(int arr[],int n,vector<int>&v2){
    stack<pair<int,int>> s;
    for (int i = n - 1; i >= 0;i--){
        if(s.empty()){
            v2.push_back(7);
        }
        else if(!s.empty() and arr[i]>s.top().first){
            v2.push_back(s.top().second);
        }
        else if(!s.empty() and arr[i]<=s.top().first){
            while(!s.empty() and arr[i]<=s.top().first){
                s.pop();
            }
            if(s.empty()){
                v2.push_back(7);
            }
            else{
                v2.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }

    reverse(v2.begin(), v2.end());
    for(auto x:v2){
        cout << x << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {6,2,5,4,5,1,6};
    int n = sizeof(arr) / sizeof(int);

    vector<int> v1;
    vector<int> v2;

    nearest_smaller_to_left(arr, n,v1);
    nearest_smaller_to_right(arr, n,v2);
    
    int ans = INT_MIN;
    for (int i = 0; i < n;i++){
        int width = v2[i] - v1[i] - 1;
        int height=arr[i];
        int area = width*height;
        ans = max(ans, area);
    }
    cout << "max area of histogram " << ans;
    return 0;
}
