#pragma once
#include <iostream>   
using namespace std;

class Animal{

    public:
        Animal(string ad);
        
        void feed();
        void sleep();
        void setname(string ad);
        string getname();

    private:
        string name;


};