//
//  main.cpp
//  HW1
//
//  Created by Josiah on 2/10/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include <iostream>
#include "Circle.hpp"
#include <vector>

int main(){
    
    vector<char> charVector;
    
    //ex1_02
    Circle* myCircle1 = new Circle();
    Circle* myCircle2 = new Circle(10);
    Circle* pCircle1 = myCircle1;
    
    pCircle1 = new Circle(12);
    
    Circle* circles = new Circle[10];
    for (int i = 0; i<10; i++){
        circles[i] = *new Circle();
    }
    for (int i = 0; i<10; i++){
        circles[i].setRadius(15);
    }
}

void ex1_01(){
    //1
    double* pNum;
    //2
    double* ex = new double(1.45);
    pNum = ex;
    //3
    *pNum = 4.12;
    //4
    delete ex;
    //5
    //char *variable;
    //variable = 3;
    //
    //Should be: *variable = 3; This way the actual value saved at the pointer's location is altered rather than the pointer itself.
    //6
    int myVar;
    int* myVarAddress = &myVar; //the & symbol
    //7
    int* elements = new int[10];
    for (int i = 0; i<10; i++){
        elements[i] = i;
    }
    //8
    for (int i = 0; i<10; i++){
        *(elements + i) = 42;
    }
    //9
    delete[] elements;
}
//10
int *doubleCapacity(int *list, int size){
    int* newList = new int[size*2];
    for (int i = 0; i<size; i++){
        newList[i] = list[i];
    }
    return newList;
}
