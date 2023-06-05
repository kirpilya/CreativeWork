#ifndef COMPANY_H
#define COMPANY_H

#endif // COMPANY_H

#pragma once
#include "Employee.h"
#include <vector>

struct Company
{
    std::string name;
    std::vector<Position> Positions;
    std::vector<Position> Vacancies;
    std::vector<Employee> Employees;
};
