// Intro. to Object Oriented Programming
// Workshop 10
// Version 1.0
// Description
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
// Yoojin Lee      August 2 2023
/////////////////////////////////////////////////////////////////
#include <iostream>
#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_
#include "ReadWrite.h"
namespace sdds {
    class Employee : public ReadWrite {
        int m_empno;
        int m_office;
        char m_name[41];
        double m_salary;
    public:
        Employee();
        Employee(int stno, const char* name, double salary, int office);
        void set(int stno, const char* name, double salary, int office);
        std::ostream& display(std::ostream& os)const;
        std::istream& read(std::istream& is);
        bool operator==(int office)const;
    };


}
#endif // !SDDS_EMPLOYEE_H_
