using namespace std;
#include <iostream>
#include <climits>

int max_subarray_sum(int arr[],int n){
    int dp[1000] = {0};
    if(arr[0]>0){
        dp[0] = arr[0];
    }
    else{
        dp[0] = 0; // bec there is no need to carry -ve sum
    }
    int max_sum = dp[0];
    for (int i = 1; i < n;i++){
        dp[i] = dp[i - 1] + arr[i];
        if(dp[i]<0){
            dp[i] = 0;
        }
        max_sum = max(max_sum, dp[i]);
    }

    return max_sum;
}
int main(){
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    cout << max_subarray_sum(arr, n);
}