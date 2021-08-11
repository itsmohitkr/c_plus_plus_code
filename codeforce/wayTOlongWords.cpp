#include <iostream>
#include<string>
using namespace std;
int main() {
    int n;
	cin >> n;

	cin.get();

	string s[100];

	for (int i = 0; i < n; ++i)
	{
		getline(cin, s[i]); 
	}
   for (int i = 0; i < n; ++i)
	{   
        
		if(s[i].length()<10){
            cout<<s[i]<<endl;
        }
        else{
            cout<<s[i][0]<<s[i].length()-2<<s[i][s[i].length()-1]<<endl;
        }
	}
    return 0;
}
