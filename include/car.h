#pragma once

#include <iostream>   
using namespace std;            

class car {
    public:
        //constructor
        car(string _color, string _model, int _hp , int kp);
        //deconstructor
        ~car();
        
        string model;
        void ruhsat();   
        void setcarcolor(string _color);              
        string getcarcolor();
        int * pkapisayisi;
    private:
        string color;   
        int hp; 

};      