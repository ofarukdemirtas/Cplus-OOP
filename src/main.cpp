#include <iostream>
#include "car.h"    
using namespace std;

int main(){

    car car1("mavi","bugatti",34,9);
    car1.setcarcolor("mor");
    car car2("kirmizi","das auto",321,4); 
    car car3("sari","togg",100,2); 
      
    cout << "car1 door number:"<<*(car1.pkapisayisi)<<endl ;

    car *p;
    p= new car ("sari","BMW",3124,5);

    cout << "bmw door number:"<<*(p->pkapisayisi)<<endl;
    p->ruhsat();

    delete p ; // if u create a class with pointer u should delet it after u use !!!




    /*
    p->setcarcolor("beyaz");
    p->ruhsat();
    p=&car1;
    p-> ruhsat();*/
    

    
   // car2.ruhsat();
   // cout<<endl<<endl;
   // cout<<endl<<endl;
   // car3.ruhsat();
 //   cout<<redcar.color<<endl<<bluecar.color<<endl<<yellowcar.color<<endl;


    return 0;       
}