#include<bits/stdc++.h>
using namespace std;

class Base{
    private:
        int a = 4;
        int b = 5;
    public:
        int mul(){
            int c = a*b;
            return c;
        }
};

class Derived: public Base{
    public:
        int display_result(){
            int result = mul();
            return result;
        }
};

int main(){
    Derived d;
    cout<<d.display_result()<<endl;
    return 0;
}