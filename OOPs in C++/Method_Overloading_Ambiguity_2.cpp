// Compiler doesn't know which function to call

#include<bits/stdc++.h>
using namespace std;

class Addition{
    public:
        void add(int a,int b){
            cout<<"The sum is: "<<(a+b)<<endl;
        }
        void add(int a,int b,int c=10){
            cout<<"The sum is: "<<(a+b+c)<<endl;
        }

};

int main(){
    Addition a;
    a.add(10,15);
    return 0;
}