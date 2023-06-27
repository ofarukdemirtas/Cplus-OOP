#include <iostream>
#include "car.h"    
using namespace std;

int main(){

    car car1("mavi","bugatti",34);
    car1.setcarcolor("mor");
    car car2("kirmizi","das auto",321); 
    car car3("sari","togg",100); 

    cout<<car1.getcarcolor();
    
    
    car2.ruhsat();
    cout<<endl<<endl;
    car1.ruhsat();
    cout<<endl<<endl;
    car3.ruhsat();
 //   cout<<redcar.color<<endl<<bluecar.color<<endl<<yellowcar.color<<endl;


    return 0;       
}