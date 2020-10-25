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
        EmployeeDataAdapter(Employee employee);
        ~EmployeeDataAdapter();
        bool AddEmployee();
        bool DeleteEmployee();
        Employee GetEmployee();
        
    };
      
}

#endif 