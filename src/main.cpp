#include <iostream>
#include "car.h"    
using namespace std;

int main(){

    car car1("mavi","bugatti",34);
    car1.setcarcolor("mor");
    car car2("kirmizi","das auto",321); 
    car car3("sari","togg",100); 
      
    car *p;
    p= new car ("sari","BMW",3124);
    p->setcarcolor("beyaz");
    p->ruhsat();

    p=&car1;
    p-> ruhsat();
    delete p ; // if u create a class with pointer u should delet it after u use !!!
     cout<<car1.getcarcolor();
    
    
   // car2.ruhsat();
   // cout<<endl<<endl;
   // car1.ruhsat();
   // cout<<endl<<endl;
   // car3.ruhsat();
 //   cout<<redcar.color<<endl<<bluecar.color<<endl<<yellowcar.color<<endl;


    return 0;       
}