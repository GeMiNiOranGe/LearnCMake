#pragma once
#ifndef MATHFUNCTIONS_HPP
#define MATHFUNCTIONS_HPP

#include <cmath>

#if USE_MYMATH
#include "mysqrt.hpp"
#endif

namespace math_functions {
    double sqrt(double x);
} // namespace math_functions

#endif // end MATHFUNCTIONS_HPP