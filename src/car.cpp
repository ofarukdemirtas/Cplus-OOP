#include "car.h"       


// car constructor  
car::car(string _color, string _model, int _hp ){
    color=_color;
    model=_model;
    hp=_hp;


};
void car::ruhsat (){

    cout<< "model="<< car::model <<endl;
    cout<< "color="<< car::color <<endl;
    cout<< "hp="<< car::hp <<endl;

};
void car::setcarcolor(string _color){
    color=_color;

};
 string car :: getcarcolor(){
    return color;
    
    };