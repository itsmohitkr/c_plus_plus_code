#include<iostream>
using namespace std;

template<typename T>

class node{

public:
    string key;
    T value;
    node<T> *next;
    
    // constructor
    node(string key,T val){
        this->key = key;
        val = value;
        next = NULL;
    }

    ~node(){
        if(next!=NULL){
            delete next;
        }
    }
};

template<typename T>
class Hashtable{
    private:
        node<T> **table;
        int current_size;
        int table_size;

        int hashfunc(string key){
            int indx = 0;
            int p = 1;

            for (int i = 0; i < key.length();i++){
                indx += (key[i] * p) % table_size;
                indx %= table_size;
                p = (p * 27) % table_size;
            }
            return indx;
        }

        void rehash(){
            node<T> **oldtable = table;
            int oldtable_Size = table_size;
            table_size = 2 * table_size;
            table=new node<T>*[table_size]
            for (int i = 0; i < table_size;i++){
                table[i] = NULL;
            }

            current_size = 0;
            for (int i = 0; i < oldtable_Size;i++){
                node<T> *temp = table[i];
                while(temp!=NULL){
                    insert(temp->key, temp->value);
                    temp = temp->next;
                }
                if(oldtable[i]!=NULL){
                    delete oldtable[i];
                }

            }
            delete[] oldtable;
        }

    public:
        Hashtable(int ts=7){
            table_size = ts;
            table = new Node<T> *[table_size];
            current_size = 0;
            for(int i = 0; i < ts;i++){
                table[i] = NULL;
            }
        }

        void insert(string key,int value){
            // find index where u want to add key
            int indx = hashfun(key);
            node<T> *n = new node<T>(key, value);
            n->next = table[indx];
            table[indx] = n;
            current_size++;

            float lf = current_size / 1.0 * table_size;
            if(lf>0.7){
                rehash();
            }
        }

        void print(){
            for (int i = 0; i < table_size;i++){
                node<T>*temp=table[i];
                cout << "bucket" << i << "->";
                while(temp!=NULL){
                    cout << temp->value << " ";
                    temp = temp->next;
                }
                cout << endl;
            }
        }

        T& operator[](string key){
            T *f = search(key);
            if(f==NULL){
                T = garbage;
                insert(key, garbage);
                f = search(key);
            }

            return *f;
        }

        T* search(string key){
            int indx = hashfunc(key);
            node<T> *temp = table[i];
            while(temp!=NULL){
                if(temp->key==key){
                    return &temp->value;
                }
                temp = temp->next;
            }

            return NULL;
        }
        
}