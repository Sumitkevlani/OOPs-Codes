#include<bits/stdc++.h>
using namespace std;

class Vehicle{
    public:
        virtual void get_number_of_seats() const = 0;
        virtual void get_mileage() const = 0;
        virtual void get_speed_limit() const = 0;
};

class Car: public Vehicle{
    int no_seats;

    public:
        Car(int seats): no_seats(seats){}

        void get_number_of_seats() const override {
            cout<<"The number of seats in the car are: "<<no_seats<<endl;
        }

        void get_mileage() const override {
            cout<<"The mileage of the car is 50kms."<<endl;
        }

        void get_speed_limit() const override {
            cout<<"The speed limit of the car is 50kmph."<<endl;
        }
};

class Bus: public Vehicle{
    int no_seats;

    public:
        Bus(int seats): no_seats(seats){}

        void get_number_of_seats() const override{ 
            cout<<"The number of seats in the bus are: "<<no_seats<<endl;
        }    

        void get_mileage() const override{
            cout<<"The mileage of the bus is 30kms."<<endl;
        }

        void get_speed_limit() const override{
            cout<<"The speed limit of the bus is 60kmph."<<endl;
        }
};

int main(){
    Car c(6);
    Bus b(70);
    c.get_number_of_seats();
    b.get_mileage();
    b.get_speed_limit();
}