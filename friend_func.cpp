#include<iostream>
using namespace std;

class Car{
    private:
        int price;

    public:

        Car(){
            price=200;
        }

    void print_price(){
        cout<<"initial price"<<" "<<price<<endl;
    }

    // declare inside base class
    friend void change_price(Car&c);
    
};

void change_price(Car&c){
    c.price+=50;
}

int main(){
    Car d;
    d.print_price();

    change_price(d);
    d.print_price();
    return 0;
}

