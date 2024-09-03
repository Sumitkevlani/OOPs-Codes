// TYPE CONVERSION
// Every decimal number is by default treated as a double in C++.
#include<bits/stdc++.h>
using namespace std;

class Num{
    public:
        void print(int i){
            cout<<"The number is: "<<i<<endl;
        }
        void print(float i){
            cout<<"The number is: "<<i<<endl;
        }
};

int main(){
    Num num;
    num.print(10.7);
    // num.print(10.7f);
    return 0;
}

