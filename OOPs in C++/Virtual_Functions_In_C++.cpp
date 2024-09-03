#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void print(){
            cout<<"Print base class"<<endl;
        }
        void show(){
            cout<<"Show base class"<<endl;
        }
};

class Derived: public Base{
    public:
        void print(){
            cout<<"Printing derived class"<<endl;
        }
        void show(){
            cout<<"Showing derived class."<<endl;
        }
};

int main(){
    Base* bptr;
    Derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}