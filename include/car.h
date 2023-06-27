
#include <iostream>   
using namespace std;            

class car {
    public:
        string model;
        void ruhsat();   
        car(string _color, string _model, int _hp );
        void setcarcolor(string _color);              
        string getcarcolor();
        
    private:
        string color;   
        int hp; 

};      