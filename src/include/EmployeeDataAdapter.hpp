#ifndef EMPLOYEEDATAADAPTER_HPP // include guard
#define EMPLOYEEDATAADAPTER_HPP

#include <iostream>
#include <string>
#include "Employee.hpp"
#include <vector>

namespace EmployeeLibrary
{
    class EmployeeDataAdapter
    {
    private:
        /* data */
        Employee _employee;
    public:
        vector<Employee> Employees;
        EmployeeDataAdapter();
        ~EmployeeDataAdapter();
        bool AddEmployee(Employee &employee);
        bool DeleteEmployee(string &fullname);
        Employee GetEmployee(string &fullname);
        
    };
      
}

#endif 