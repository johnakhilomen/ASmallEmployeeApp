#include <iostream>
#include <string>
#include "Employee.hpp"
#include "EmployeeDataAdapter.hpp"
#include <vector>

using namespace EmployeeLibrary;

    EmployeeDataAdapter::EmployeeDataAdapter()
    {
    }
    
    EmployeeDataAdapter::~EmployeeDataAdapter()
    {
    }

    bool EmployeeDataAdapter::AddEmployee(Employee &employee)
    {
        Employees.push_back(_employee);
        for (Employee e : Employees )
        {
            if(e.GetFullname() == _employee.GetFullname())
            {
                return true;
                break;
            }
        }
        return false;
    }
    
    bool EmployeeDataAdapter::DeleteEmployee(string &fullname)
    {
        for (int i = 0; i < Employees.size(); i++)
        {
            if(Employees[i].GetFullname() == fullname)
            {
                //Will erase object in the vector Employees in the position i Vector.erase(Vector.begin() + index);
                Employees.erase(Employees.begin() + i);
                return true;
                break;
            }
        }
        
        return false;
    }
    
    Employee EmployeeDataAdapter::GetEmployee(string &fullname)
    {
        for (Employee e : Employees)
        {
            if(e.GetFullname() == fullname)
            {
                return e;
                break;
            }
        }
        return Employee();
    }
