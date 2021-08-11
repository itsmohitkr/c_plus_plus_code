#include <iostream>
#include <cstring>
using namespace std;

template<typename T>
class node
{
public:
	string key;
	T value;
	node<T>*next;

	//constructor
	node(string key, T val) {
		this->key = key;
		value = val; 
		next = NULL; // by defaULT

	}
	//destructor
	~node() {
		if (next != NULL) {
			delete next;

		}
	}

};

template<typename T>
class Hashtable {
private:

	node<T>**table; // pointer to an array of pointer
	int current_size; // how many element we have inserted in table till
	int table_size;

	// hashfun convert the key to an integer which is basically index to of the hashtable
	int hashfun(string key) {
		int indx = 0;
		int p = 1;
		for (int j = 0; j < key.length(); ++j)
		{
			indx = indx + (key[j] * p) % table_size;
			indx = indx % table_size;
			p = (p * 27) % table_size;
		}
		return indx;
	}
	void rehash() {
		node<T>**oldtable = table;
		int oldtablesize = table_size;
		table_size = 2 * table_size; // approximation find the next prime nos
		table = new node<T>*[table_size];
		for (int i = 0; i < table_size; ++i)
		{
			table[i] = NULL;
		}
		current_size = 0;
		// shift the table from old table to new table;
		for (int i = 0; i < oldtablesize; ++i)
		{
			node<T>*temp = oldtable[i];
			while (temp != NULL) {
				insert(temp->key, temp->value);
				temp = temp->next;
			}
			if (oldtable[i] != NULL)
			{
				delete oldtable[i];
			}
		}
		delete [] oldtable;
	}
public:
	// constructor
	Hashtable(int ts = 7) {

		table_size = ts;
		table = new node<T>*[table_size];
		current_size = 0;
		for (int i = 0; i < table_size; i++) {
			table[i] = NULL;// initially all the box of table is pointing to null
		}
	}

	void insert(string key, T value) {
		int indx = hashfun(key);
		node<T>*n = new node<T>(key, value);
		// insert at head of linked list with id-idx
		n->next = table[indx];
		table[indx] = n;
		current_size++;

		// rehash

		float load_factor = current_size / (1.0 * table_size);
		// if load factor > some thresold(0.7) then we will do some rehashing
		if (load_factor > 0.7) {
			rehash();
		}
	}

	void print() {
		for (int i = 0; i < table_size; ++i)
		{
			cout << "bucket" << i << "->";
			node<T>*temp = table[i];
			while (temp != NULL) {
				cout << temp->key << "->";
				temp = temp->next;
			}
			cout << endl;
		}
	}
	

	T& operator[](string key) {
		T*f = search(key);
		if (f == NULL) {
			// insert key,value(garbage) in hash table
			T garbage;
			insert(key, garbage);
			f = search(key);
		}
		return *f;
	}


	T* search(string key) {
		int indx = hashfun(key);
		node<T>*temp = table[indx];
		while (temp != NULL) {
			if (temp->key == key) {
				return &temp->value;   // since the return type of this func is T* it means
			}						   // you cant return temp->value so returning &temp->value
			temp = temp->next;
		}
		return NULL;  // if you are returning NULL then return type should be of T* not T
	}
	
};

