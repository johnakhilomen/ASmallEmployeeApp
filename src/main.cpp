#include <iostream>
#include <string>
#include <list>
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
    EmployeeDataAdapter empAdapter = EmployeeDataAdapter();
    bool addedUser = empAdapter.AddEmployee(emp);
    cout<<"User added: "<<addedUser<<endl;
    vector<Employee> emps = empAdapter.Employees;
    for (Employee e : emps)
    {
        cout<<"Fullname: "<<e.GetFullname()<<endl;
        cout<<"Email address: "<<e.GetEmailaddress()<<endl;
        cout<<"Address: "<<e.GetAddress()<<endl;
        cout<<"Age: "<<e.GetAge()<<endl;
    }

    list<string> names;
    names.push_back("Jane");
    names.push_back("Mary");
    names.push_back("Bob");

    for (string n : names)
    {
        cout<<n<<endl;
    }
    cout<<"First name is list"<<names.front()<<endl;
    cout<<"Last name is list"<<names.back()<<endl;
    return 0;

//multimap
    /*

template<typename T>
void display(T arr[], int size){
    for(int i = 0; i < size; ++i)
    {
        cout<<arr[i]<<endl;
    }
    }
}

template<typename T>
T max(T &a, T &b){
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template<typename T, typename U>

class DivideByZero : public runtime_error
{
    public:
        DivideByZero(): 
        runtime_error("Divide by zero excepion");
}
throw DivideByZero();

catch(DivideByZero &except)
{
    cout<<except.what()<<endl;
}

For general exceptiom
catch(...)
{
    cout<<exception thrown and caught << endl;
}
    */
}