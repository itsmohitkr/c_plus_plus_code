#include<iostream>
#include<cstring>
using namespace std;

int t[101][101];
int subset_sum_count(int n, int arr[], int sum)
{   
    // base case initialisation
    for (int i = 0; i < n + 1;i++){
        for (int j = 0; j < sum + 1;j++){
            if(j==0){
                t[i][j] = 1;
            }
            else if(i==0 and j>0){
                t[i][j] = 0;
            }
        }
    }

    // rec case

    for (int i = 1; i < n + 1;i++){
        for (int j = 1; j < sum + 1;j++){
            if(arr[i-1]<=j){
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
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
    int arr[] = {2, 3, 5, 6, 9, 10};
    int n = 6;
    int sum = 10;
    cout << subset_sum_count(n, arr, sum);
    
    return 0;
}
