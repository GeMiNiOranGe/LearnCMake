#include "MathFunctions.hpp"

double math_functions::sqrt(double x) {
#if USE_MYMATH
    return detail::my_sqrt(x);
#else
    return std::sqrt(x);
#endif
}