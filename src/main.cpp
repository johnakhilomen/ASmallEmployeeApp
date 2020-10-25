#include <iostream>
#include <string>
//#include "include/Employee.hpp"
#include "include/EmployeeDataAdapter.hpp"
#include <vector>

using namespace std;
using namespace EmployeeLibrary;

int main()
{
    string fname;
    string email;
    string address;
    int age;
    cout << "A Simple Employee Application" <<endl;
    cout << "Enter Employees fullname :"<<endl;
    getline(cin, fname);
    cout << "Enter Employees email :"<<endl;
    getline(cin, email);
    cout << "Enter Employees address :"<<endl;
    getline(cin, address);
    cout << "Enter Employees Age :"<<endl;
    cin >> age;
    /*Employee emp;
    emp.SetFullname(fname);*/
    Employee emp = Employee(fname, age, address, email);
    cout<<"Fullname:"<<emp.GetFullname()<<endl;

    EmployeeDataAdapter empAdapter = EmployeeDataAdapter(emp);
    bool addedUser = empAdapter.AddEmployee();
    cout<<"User added: "<<addedUser<<endl;
    vector<Employee> emps = empAdapter.Employees;
    for (Employee e : emps)
    {
        cout<<"Fullname: "<<e.GetFullname()<<endl;
        cout<<"Email address: "<<e.GetEmailaddress()<<endl;
        cout<<"Address: "<<e.GetAddress()<<endl;
        cout<<"Age: "<<e.GetAge()<<endl;
    }
    return 0;
}