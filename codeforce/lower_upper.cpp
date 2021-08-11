#include <iostream> 
using namespace std; 
int main() 
{ 
    char x; 
    cin >> x; 
   
    if (x>='a' && x<='z')  
        cout << "lowercase"; 
    else if(x>='A' && x<='Z')
        cout << "UPPERCASE";     
    else 
        cout<<"Invalid";
    return 0; 
} 