#include <bits/stdc++.h>
using namespace std;

class A{
    private:
        int value;
        A(int v): value(v){}
    
    public:
        static A createInstance(int v){
            return A(v);
        }

        void display(){
            cout<<"The value is: "<<value<<endl;
        }
};

int main(){
    A a = A::createInstance(10);
    a.display();
    return 0;
}