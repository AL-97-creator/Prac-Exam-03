#include <iostream>
#include "AirCraft.h"
#include "Airplane.h"

int main(){
    Airplane a(5,100);
    a.reduce_passengers(50);
    a.fly(20,20);
    a.print();
}