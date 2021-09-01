#include<iostream>
using namespace std;
char keypad[][10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generate_names(char inp[],char out[],int i,int j){
    // base case
    if(inp[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    int digit = inp[i] - '0';
    // if digit has 0 or 1 skip that bec they are not mapped;

    if(digit==0 or digit==1){
        generate_names(inp, out, i + 1, j);
    }
    int k = 0;
    while(keypad[digit][k] != '\0'){
        // put current char in the output and make drecursive call for remaining part
        out[j] = keypad[digit][k];
        // fill the remaining part
        generate_names(inp, out, i + 1, j + 1);
        k++;
    }
}

int main(){
    char inp[100];
    cin >> inp;
    char out[100];
    generate_names(inp, out, 0, 0);
    return 0;
}