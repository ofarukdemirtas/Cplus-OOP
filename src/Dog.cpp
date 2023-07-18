#include "Dog.h"       
// constructor
Dog::Dog(string ad ) : Animal(ad) {
    //if u want to do smth more u can write there
    dogcount++;
} ;
//deconstructor
Dog::~Dog(){ 
dogcount--;
};

void Dog::bark(){
    //cout << Animal::getname()<<" barking "<<endl ;
    cout<< Animal::name<<"barking..."<<endl;
 };
 