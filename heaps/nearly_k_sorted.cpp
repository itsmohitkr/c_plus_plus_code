#include <iostream>
#include <queue>
using namespace std;

void nearly_k_sort(int arr[],int n,int k){
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i < n;i++){
        if(p.size()>k){
            cout << p.top() << " ";
            p.pop();
        }
        p.push(arr[i]);
    }

    while(!p.empty()){
        cout << p.top()<<" ";
        p.pop();
    }
}

int main(){
    int n;
    cin >> n;z
    int k;
    cin >> k;
    int arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    nearly_k_sort(arr, n, k);
    return 0;
}