#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
        void drive(){
            cout<<"Driving vehicle"<<endl;
        }
};

class Car: public Vehicle{
    public:
        void drive(){
            cout<<"Driving car"<<endl;
        }
};

int main(){
    Car c;
    Vehicle v;
    v.drive();
    c.drive();
}