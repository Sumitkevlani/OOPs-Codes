#include <bits/stdc++.h>
using namespace std;
class Accounts{
    public:
        int budget;
        Accounts(int b){
            budget = b;
        }

        friend class HR;
};

class HR{
    public:
        int no_of_employees;
        HR(int n_employees): no_of_employees(n_employees){}

        void calc_salary(Accounts &a){
            int salary = a.budget / no_of_employees;
            cout<<"Salary for the employees: "<<salary<<endl;
        }
};

int main(){
    HR hr(7);
    Accounts acc(7000);
    hr.calc_salary(acc);
    return 0;
}
