#include "car.h"       


// car constructor  
car::car(string _color, string _model, int _hp, int kp ){
    cout <<" constructor called "<<endl;
    color=_color;
    model=_model;
    hp=_hp;
    pkapisayisi=new int(kp);
    // *pkapisayisi=kp; 10 ve 11 satır aymı
}
// car deconstructor
car::~car(){ 
    cout << car::model << "deconstructor called"<<endl;
}
void car::ruhsat (){

    cout<< "model="<< car::model <<endl;
    cout<< "color="<< car::color <<endl;
    cout<< "hp="<< car::hp <<endl;
    cout<< "kapisayisi="<< *(car::pkapisayisi) <<endl;
}
void car::setcarcolor(string _color){
    color=_color;

}
 string car :: getcarcolor(){
    return color;
    
}