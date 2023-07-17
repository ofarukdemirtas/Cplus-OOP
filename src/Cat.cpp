#include "Cat.h"       
// constructor
Cat::Cat(string ad ) : Animal(ad) {
    //if u want to do smth more u can write there
} ;
 void Cat::fareyakala(){
    cout << Animal::getname()<<" catching mouse "<<endl ;
 };