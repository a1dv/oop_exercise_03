#pragma once
#include "figure.h"

struct pentagon : figure{
    point a1,a2,a3,a4,a5;
    point center() const override;
    void print(std::ostream& out) override;
    double area() const override;
    pentagon() = default;
    pentagon(std::istream& is);
};
