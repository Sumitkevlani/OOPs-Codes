#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        void play(){
            cout<<"Playing"<<endl;
        }
};

class Dog: public Animal{
    public:
        void bark(){
            cout<<"Barking"<<endl;
        }
};

int main(){
    Dog d;
    d.play();
    d.bark();
    return 0;
}