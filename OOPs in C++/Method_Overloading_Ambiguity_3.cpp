// Passing number by reference

#include<bits/stdc++.h>
using namespace std;
class Printer{
    public:
        void print(int a){
            cout<<"The number is: "<<a<<endl;
        }
        void print(int &a){
            cout<<"The number is: "<<a<<endl;
        }
}

int main(){
    int a = 10;
    Printer p;
    p.print(a);
    return 0;
}