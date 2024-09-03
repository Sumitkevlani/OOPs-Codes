#include <bits/stdc++.h>
using namespace std;
int main(){

    enum week {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
    // 0 1 2 3 4 5 6
    for(int i = MONDAY;i <= SUNDAY;i++){
        week w = static_cast<week>(i);
        cout<<w<<endl;
    }
    return 0;
}
