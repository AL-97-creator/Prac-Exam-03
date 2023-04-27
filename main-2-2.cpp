#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"

int main(){
    Airplane a(5,100);
    a.reducePassengers(50);
    a.fly(20,20);
    a.print();
}