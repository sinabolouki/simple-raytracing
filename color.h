//
// Created by Sina on 6/25/2023.
//

#ifndef UNTITLED_COLOR_H
#define UNTITLED_COLOR_H

#include "vec3.h"

#include <iostream>

void write_color(std::ostream &out, color pixel_color){
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << '\n';

}

#endif //UNTITLED_COLOR_H
