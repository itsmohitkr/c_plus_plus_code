#include<iostream>
#include<cstring>
using namespace std;

class Car{
    private:
        float price;
    public:
        int model_no;
        char *name; // pointer to a dynamic array

    // default constructor
    Car(){
        name = NULL;
    }

    // parameterised constructor
    Car(float p,int m,char*n){ // n is pointer to some string
        price = p;
        model_no = m;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    // copy constructor
    Car(Car&x){
        price = x.price;
        model_no = x.model_no;
        // allocate new memory
        // deep copy
        name = new char[strlen(x.name) + 1];
        strcpy(name, x.name);
    }
    // set price
    void set_price(float p){
        price = p;
    }
    // print function
    void print(){
        cout << "Name = " << name << endl;
        cout << "Model no = " << model_no << endl;
        cout << "price = " << price << endl;
    }
    ~Car(){
        if(name!=NULL){
            delete name;
        }
        cout << "user defined destructor called" << endl;
    }
};

int main(){
    //1. statically created car

    Car c(100, 200, "BMW");  // parameterised constructor
    Car d(c); // calling copy constructor

    d.set_price(120); // changes reflects only in d
    d.name[0] = 'A'; // changes reflect in both

    c.print();
    d.print();

    // using delete keyword
    
    //2. Dynamically Created Car object e
    Car *e = new Car(400, 300, "Audi");
    // e.print(); // dot operator doesn't work with dynamically allocated object
    e->print();
    delete e;
}