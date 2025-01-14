/***********************************************************************
// Intro. to Object Oriented Programming
// Workshop 2 Part 2
// Version 1.0
// Description
// professor's tester program
//
// Revision History
*************************************************************************
*                                                                       *
*     Yoojin Lee, ylee237@myseneca.ca, 188162218, May 30 2023           *
*                                                                       *
*************************************************************************/

#include "Population.h"

using namespace sdds;

int main() {
    if (load("PCpopulationsComplete.csv")) {
        display();
    }
    deallocateMemory();
    return 0;
}