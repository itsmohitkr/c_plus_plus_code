#include<iostream>
#include<cstring>
using namespace std;

bool t[101][101];
int subset_sum(int n, int arr[], int sum)
{   
    // base case
    for (int i = 0; i < n + 1;i++){
        for (int j = 0; j < sum + 1;j++){
            if(j==0){
                t[i][j] = true;
            }
            else if(i==0 and j>0){
                t[i][j] = false;
            }
        }
    }

    // rec case

    for (int i = 1; i < n + 1;i++){
        for (int j = 1; j < sum + 1;j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i - 1][j - arr[i - 1]]||t[i - 1][j];
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][sum];
}

int main()
{
    int arr[] = {1,16,11,6};
    int n = 4;
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += arr[i];
    }
    // if sum is odd no partition would be made

    if(sum%2!=0){
        cout << "false";
    }
    else{
        subset_sum(n, arr, sum/2) ? cout << "true":cout<<"false";
    }
    return 0;
}
