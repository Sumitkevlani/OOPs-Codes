#include <bits/stdc++.h>

using namespace std;
class A;
class B;

class A{
    public:
        int a;
        A(int num): a(num){}

        friend void calc_min(A,B);
};

class B{
    public:
        int b;
        B(int num): b(num){}

        friend void calc_min(A,B);
};

void calc_min(A x, B y){
    if(x.a>=y.b){
        cout<<"B"<<endl;
    }
    else{
        cout<<"A"<<endl;
    }
}

int main(){
    A a(15);
    B b(10);
    calc_min(a,b);
    return 0;
}