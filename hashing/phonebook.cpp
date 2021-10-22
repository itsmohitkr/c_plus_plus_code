#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main() {
    unordered_map<string, vector<string>>phonebook;

    phonebook["rahul"].push_back("98190");
    phonebook["rahul"].push_back("98191");
    phonebook["rahul"].push_back("98192");
    phonebook["rahul"].push_back("98193");
    phonebook["kajal"].push_back("9845");
    phonebook["rahul"].push_back("98240");
    phonebook["rahul"].push_back("987590");

    for (auto p : phonebook) {
        cout << "name  " << p.first << "->";
        for (string s : p.second) {
            cout << s << ",";
        }
        cout << endl;
    }

    string name;
    cin >> name;

    if (phonebook.count(name) == 0) {
        cout << "absent ";
    }
    else {
        for (string s : phonebook[name]) {
            cout << s << ",";
        }
    }
}
