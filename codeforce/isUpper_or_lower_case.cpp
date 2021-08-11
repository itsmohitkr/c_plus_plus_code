#include <iostream> 
#include <cctype> 
using namespace std; 
int main() 
{ 
    char x; 
    cin >> x; 
   
    if (isupper(x))  
        cout << "U"; 
    else if(islower(x))
        cout << "L";     
    else 
        cout<<"I";
    return 0; 
} 