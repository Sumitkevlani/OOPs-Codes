#include<bits/stdc++.h>
using namespace std;

class Sum{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int add(int a,int b,int c){
            return (a+b+c);
        }
};

int main(){
    Sum s;
    cout<<s.add(10,11,13)<<endl;
    cout<<s.add(10,11)<<endl;
    return 0;
}