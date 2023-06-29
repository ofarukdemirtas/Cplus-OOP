
#include <iostream>   
using namespace std;            

class car {
    public:
        //constructor
        car(string _color, string _model, int _hp );

        //deconstructor
        ~car();
        string model;
        void ruhsat();   
        void setcarcolor(string _color);              
        string getcarcolor();

    private:
        string color;   
        int hp; 

};      