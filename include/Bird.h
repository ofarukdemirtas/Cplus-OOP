#pragma once

#include "Animal.h"
using namespace std;

class Bird : public Animal{
    public:
        Bird(string ad);
        void fly();

};
