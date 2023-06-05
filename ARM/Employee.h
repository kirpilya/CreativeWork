#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#endif // EMPLOYEE_H

#pragma once
#include <QDate>
#include "Position.h"

struct Employee
{
    std::string f_name;
    std::string s_name;
    std::string p_name;
    std::string FIO;
    QDate birth;
    int age;
    std::string passport;
    Position pos;
    QDate start_work;
    std::string tel_num;
    std::string email;
    std::string edu_category;
    std::string edu_place;
    int exp;
    std::string resume;
    std::string dop_info;
    int salary;

    int vac_idx;
};
