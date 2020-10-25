#include <iostream>
#include <string>
#include "Employee.hpp"
#include "EmployeeDataAdapter.hpp"
#include <vector>

using namespace EmployeeLibrary;

    EmployeeDataAdapter::EmployeeDataAdapter(Employee employee)
    {
        _employee = employee;
    }
    
    EmployeeDataAdapter::~EmployeeDataAdapter()
    {

    }

    bool EmployeeDataAdapter::AddEmployee()
    {
        Employees.push_back(_employee);
        if(Employees.size() == Employees.size() + 1)
        {
            return true;
        }
        return false;
    }
    
    bool EmployeeDataAdapter::DeleteEmployee()
    {
        return true;
    }
    
    Employee EmployeeDataAdapter::GetEmployee()
    {
        return _employee;
    }
