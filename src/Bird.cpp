#include "Bird.h"       
// constructor
Bird::Bird(string ad ) : Animal(ad) {
    //if u want to do smth more u can write there
} ;
 void Bird::fly(){
    //cout << Animal::getname()<<" barking "<<endl ;
    cout<< Animal::name<<"flying..."<<endl;
 };