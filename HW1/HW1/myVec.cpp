//
//  myVec.cpp
//  HW1
//
//  Created by Josiah on 2/10/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

template<typename T>
class MyVec {
private:
    T *array; // dynamically allocated array
public:
    void Swap (T &A, T &B){
        T tmp = A;
        A = B;
        B = tmp;
    }
    MyVec(int size) { // constructor creates array of size “size”
        array = new T[size];
    }
    ~MyVec() { // destructor returns memory back to system
        delete [] array;
    }
};
