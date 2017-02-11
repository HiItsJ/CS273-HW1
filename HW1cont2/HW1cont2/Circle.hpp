//
//  Circle.hpp
//  HW1cont2
//
//  Created by Josiah on 2/10/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle{
    double radius;
public:
    Circle();
    Circle(double r);
    double getArea();
    double getRadius();
    void setRadius(double r);
    Circle* addCircle(Circle* c);
};

#endif /* Circle_hpp */
