#ifndef EMPLOYEE_HPP // include guard
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

using namespace std;

namespace EmployeeLibrary
{
    class Employee
    {
        private:
            string _fullname;
            int _age;
            string _address;
            string _emailaddress;
        public:
            Employee();
            Employee(string fullname, int age, string address, string email);
            void SetFullname(string fullname);
            string GetFullname();
            void SetAge(int age);
            int GetAge();
            void SetAddress(string address);
            string GetAddress();
            void SetEmailaddress(string email);
            string GetEmailaddress();
    };
}

#endif /* EMPLOYEE_HPP */