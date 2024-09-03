#include<bits/stdc++.h>
using namespace std;

class A{
    protected:
        int a;
        void get_a(int n){
            a = n;
        }
};

class B{
    protected:
        int b;
        void get_b(int n){
            b = n;
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
};

int main(){
    C c;
    c.get_c();
    return 0;
}