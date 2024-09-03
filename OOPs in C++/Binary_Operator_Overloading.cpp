#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
        int real;
        int img;

        Complex(int r,int i): real(r),img(i){}

        void operator +(Complex c){
            real = real+c.real;
            img = img+c.img;
            cout<<real<<" + i"<<img<<endl;
        }

        void operator -(Complex c){
            real = real-c.real;
            img = img-c.img;
            cout<<real<<" + i"<<img<<endl;
        }

        void operator *(Complex c){
            real = real*c.real - img*c.img;
            img = real*c.img + img*c.real;
            cout<<real<<" + i"<<img<<endl;
        }
};

int main(){
    Complex c1(2,3);
    Complex c2(1,1);
    c1 + c2;
    c1 - c2;
    c1 * c2;
}