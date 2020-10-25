#include <string>
#include <iostream>
#include "Employee.hpp"

using namespace std;
using namespace EmployeeLibrary;

Employee::Employee(){

}

Employee::Employee(string fullname, int age, string address, string email){
    _fullname = fullname;
    _age = age;
    _address = address;
    _emailaddress = email;
}

void Employee::SetFullname(string fullname)
{
    _fullname = fullname;
}

string Employee::GetFullname()
{
    return _fullname;
}

void Employee::SetAge(int age)
{
     _age = age;
}

int Employee::GetAge()
{
    return _age;
}

void Employee::SetAddress(string address)
{
    _address = address;
}

string Employee::GetAddress()
{
    return _address;
}

void Employee::SetEmailaddress(string email)
{
    _emailaddress = email;
}

string Employee::GetEmailaddress()
{
    return _emailaddress;
}