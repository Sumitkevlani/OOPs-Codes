#include <bits/stdc++.h>
using namespace std;

struct Rectangle{
    int height;
    int width;
    Rectangle(int height, int width){
        this->height = height;
        this->width = width;
    }
    void calc_area(){
        int area = height*width;
        cout<<"The area of the rectangle is: "<<area<<endl;
    }
};

int main(){
    Rectangle r(10,17);
    r.calc_area();
    return 0;
}