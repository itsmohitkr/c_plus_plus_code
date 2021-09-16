#include<iostream>
#include<cstring>
using namespace std;

bool t[101][101];
int profit(int n, int arr[], int sum)
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
    int arr[] = {2, 3, 7, 8, 10};
    int n = 5;
    int sum = 11;
    profit(n, arr, sum) ? cout << "true":cout<<"false";
}
