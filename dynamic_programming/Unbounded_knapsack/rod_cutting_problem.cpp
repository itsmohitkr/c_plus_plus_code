#include<iostream>
#include<climits>
using namespace std;

int t[101][101];
int profit(int n, int price[],int length[])
{   
    // base case
    for (int i = 0; i < n + 1;i++){
        for (int j = 0; j < n + 1;j++){
            if(i==0 || j==0){
                t[i][j] = 0;
            }
        }
    }

    // rec case
    for (int i = 1; i < n + 1;i++){
        for (int j = 1; j < n + 1;j++){ // rod length
            if(length[i-1]<=j){
                t[i][j] = max(price[i - 1] + t[i][j - length[i - 1]], t[i - 1][j]);
            }
            else{
                t[i][j] = t[i - 1][j];
            }
        }
    }

    return t[n][n];
}

int main()
{
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
    int n = sizeof(price) / sizeof(int); // size of price array
    int length[n]; // length array given

    for (int i = 0; i < n;i++){
        length[i]=i+1;
    }

    cout << profit(n, price, length);

}
