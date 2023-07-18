#pragma once

#include "Animal.h"
using namespace std;

class Dog : public Animal{
    public:
        Dog(string ad);
        ~Dog();
        void bark();
        static int dogcount;
        

};
