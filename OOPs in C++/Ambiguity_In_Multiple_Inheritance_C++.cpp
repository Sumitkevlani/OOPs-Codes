#include<bits/stdc++.h>
using namespace std;

class A{
    protected:
        int a;
        void get_a(int n){
            a = n;
        }
        void display(){
            cout<<a<<endl;
        }
};

class B{
    protected:
        int b;
        void get_b(int n){
            b = n;
        }
        void display(){
            cout<<b<<endl;
        }
};

class C: public A, public B{
    public:
        void get_c(){
            get_a(10);
            get_b(15);
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            int c = a+b;
            cout<<"The addition is: "<<c<<endl;
        }
        void print(){
            // display();
            get_a(15);
            get_b(10);
            A::display();
            B::display();
        }
};

int main(){
    C c;
    // c.get_c();
    c.print();
    return 0;
}