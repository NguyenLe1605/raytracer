#include "tuple.hpp"
#include <cmath>

constexpr double EPSILON = 0.0001;

bool Tuple::isPoint() { return fabs(w - 1.0) <= EPSILON; }

bool Tuple::isVector() { return fabs(w - 0.0) <= EPSILON; }
