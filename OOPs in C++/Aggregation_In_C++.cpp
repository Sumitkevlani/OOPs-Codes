#include<bits/stdc++.h>
using namespace std;

class Address{
    public:
        string address_line;
        string city;
        string state;
        Address(string l, string c,string s): address_line(l),city(c),state(s) {}
};

class Employee{
    public:
        int id;
        string name;
        Address *address;
        Employee(int i, string n, Address* a): id(i),name(n),address(a){}
        void display(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Address: "<<address->address_line<<endl;
            cout<<"City: "<<address->city<<endl;
            cout<<"State: "<<address->state<<endl;
        }
};

int main(){
    Address a("Sindhi Colony","Sojat City","Rajasthan");
    Employee emp(21124108,"Sumit",&a);
    emp.display();
    return 0;
}