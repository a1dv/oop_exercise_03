#include <iostream>
#pragma once
#include "point.h"

struct figure {
    virtual point center() const = 0;
    virtual void print(std::ostream&) = 0 ;
    virtual double area() const = 0;
    virtual ~figure() = default;
};
