//
// Created by Sina on 6/25/2023.
//

#ifndef UNTITLED_RTCONSTS_H
#define UNTITLED_RTCONSTS_H

#include <cmath>
#include <memory>
#include <limits>

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

inline double degrees_to_radians(double degrees){
    return degrees * pi / 180.0;
}

#include "ray.h"
#include "vec3.h"

#endif //UNTITLED_RTCONSTS_H
