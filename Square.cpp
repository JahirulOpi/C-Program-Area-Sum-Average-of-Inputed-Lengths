#include <iostream>
#include "Square.h"
using namespace std;


void Square:: setLength (float l){
    length = l;
}
float Square:: getLength ()const{
    return length;
}
float Square:: getArea()const{
    return getLength()*getLength();
}
Square:: Square(){
    
}
Square:: Square(float l){
    setLength(l);
}
Square Square:: operator+(Square s2){
    Square temporary;
    temporary.length = length + s2.length;
    return temporary;
}
Square Square:: operator*(Square s2){
    Square temporary;
    temporary.length = (length + s2.length)/2;
    return temporary;
}
void Square:: Print(){
    cout << getLength();
}