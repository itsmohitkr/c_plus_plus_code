#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v1;
    /*vector<char>v2(4);
    vector<int>v3(5,10);
    vector<string>v4(3,"mohit");

    cout<<v4[0]<<endl;
    cout<<v4[1]<<endl;
    cout<<v3[1]<<endl;

    for(int i=0;i<=4;i++)
       cout<<v3[i]<<endl;
    */
    cout << "current capacity is " << v1.capacity() << endl;

    for (int i = 0; i <= 9; i++)
    {   v1.push_back(10 * (i + 1));
        cout << v1[i] << " ";
        cout << "current capacity is " << v1.capacity() << endl;
    }

    cout << "size is :" << v1.size() - 1 << endl;
    cout << "value of index 3 is :" << v1.at(3);
    cout << "\n fist value is " << v1.front();
    cout << "\n last value is " << v1.back();

    cout << endl << endl;

    for (int k = 9; k >= 0; k--)
    {
        v1.pop_back();
        cout << v1[k] << " ";
        cout << "current capacity is " << v1.capacity() << endl;
    }

}
