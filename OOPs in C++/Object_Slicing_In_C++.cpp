#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        string color = "Black";
};

class Dog: public Animal{
    public:
        string color = "Grey";
};

int main(){
    Animal a = Dog();
    cout<<a.color<<endl;

    Animal* new_animal;
    Dog dog;
    new_animal = &dog;
    cout<<new_animal->color<<endl;
    return 0;
}