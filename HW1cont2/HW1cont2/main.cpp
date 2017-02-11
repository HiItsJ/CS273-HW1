//
//  main.cpp
//  HW1cont2
//
//  Created by Josiah on 2/10/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"

int main(){
    Circle* circle1 = new Circle(5);
    Circle* circle2 = new Circle(10);
    
    Circle* circle3 = circle1->addCircle(circle2);
}
