#include "Animal.h"       

Animal::Animal(string ad ){
    cout <<" constructor called "<<endl;
    Animal::name=ad;         //name=ad;

} 
void Animal::feed(){
    cout<< Animal::name <<" feeding.."<< endl ;
}
void Animal::sleep(){
    cout<< Animal::name <<" sleeping.."<< endl ;
}
void Animal::setname(string ad){
    Animal::name=ad;         // name=ad;
    }
string Animal::getname(){
    return Animal::name ;// name
}