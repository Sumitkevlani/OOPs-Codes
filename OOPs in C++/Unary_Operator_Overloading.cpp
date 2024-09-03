#include<bits/stdc++.h>
using namespace std;

class Num{
    public:
        int a;
        Num(int num): a(num){}
        void operator ++() {
            a = a + 2;
            cout<<"The value of the instance is: "<<a<<endl;
        }
};

int main(){
    Num num(2);
    ++num;
    return 0;
}