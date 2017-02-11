//
//  Circle.cpp
//  HW1cont2
//
//  Created by Josiah on 2/10/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "Circle.hpp"

Circle::Circle(){
    radius = 0;
}
Circle::Circle(double r){
    radius = r;
}
double Circle::getArea(){
    return 3.14*radius*radius;
}
double Circle::getRadius(){
    return radius;
}
void Circle::setRadius(double r){
    radius = r;
}
Circle* Circle::addCircle(Circle* c){
    return new Circle(this->getRadius()+c->getRadius());
}

