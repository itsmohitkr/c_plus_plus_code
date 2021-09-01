#include<iostream>
using namespace std;

void generate_valid_strings(char inp[],char out[],int i,int j){
    
    // base case
    if(inp[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }

    // one digit at a time
    int digit = inp[i] - '0';
    char ch = digit + 'A' - 1;
    out[j] = ch;
    generate_valid_strings(inp, out, i + 1, j + 1);

    // two digit at a time 

    if(inp[i+1]!='\0'){
        int seconddigit = inp[i + 1] - '0';
        int no = digit * 10 + seconddigit;

        if(no<=26){
            ch = no + 'A' - 1;
            out[j] = ch;
            generate_valid_strings(inp, out, i + 2, j + 1);
        }
    }
    return;
}

int main(){
    char inp[100];
    cin >> inp;
    char out[100];
    generate_valid_strings(inp, out, 0,0);
}