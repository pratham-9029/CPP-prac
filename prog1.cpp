// Create a class Employee with members: id, name, and salary. Include functions to input and display employee details.

#include<iostream>
using namespace std;

class employee{
private:
    int emp_id,emp_salary;
    string emp_name;

public:
    void setemployee()
    {
        cout<<"enter emp name: ";
        cin >> this->emp_name;
        cout<<"enter emp id: ";
        cin>>this->emp_id;
        cout<<"enter emp salary: ";
        cin>>this->emp_salary;
    }

    void getemployee()
    {
        cout<<"emp id: "<<this->emp_id<<endl;
        cout<<"emp name: "<<this->emp_name<<endl;
        cout<<"emp salary: "<<this->emp_salary<<endl;
    }

};

int main()
{
    employee emp;

    emp.setemployee();
    emp.getemployee();

    return 0;
}