#include <iostream>
#include <cmath>
#include <cfloat>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    std::cout << std::boolalpha
        << "isnan(NaN) = " << std::isnan(NAN) << '\n'
        << "isnan(Inf) = " << std::isnan(INFINITY) << '\n'
        << "isnan(0.0) = " << std::isnan(0.0) << '\n'
        << "isnan(DBL_MIN/2.0) = " << std::isnan(DBL_MIN / 2.0) << '\n'
        << "isnan(0.0 / 3.0)   = " << std::isnan(0.0 / 3.0) << '\n'
        << "isnan(Inf - Inf)   = " << std::isnan(INFINITY - INFINITY) << '\n';

    _getch();
    return 0;
}