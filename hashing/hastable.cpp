#include<iostream>
#include "hashtable.h"
#include <cstring>
using namespace std;
int main()
{
	Hashtable<int> price_menu;// price_menu is the object of class hashtable

	price_menu.insert("Burger", 120);
	price_menu.insert("Pepsi", 20);
	price_menu.insert("Burgerpizza", 150);
	price_menu.insert("Noodles", 25);
	price_menu.insert("Coke", 40);

	price_menu.print();
	cout << endl;
	int *price = price_menu.search("Noodles");
	if (price == NULL) {
		cout << "not found";
	}
	else {
		cout << "price is " << *price << endl; // de-referencing
	}
	cout << endl;

	// operator overloading
	// insert
	price_menu["Dosa"] = 60;
	// update
	price_menu["Dosa"] += 10;
	// serach
	cout << "dosa price is ";
	cout << price_menu["Dosa"] << endl;
	return 0;
}