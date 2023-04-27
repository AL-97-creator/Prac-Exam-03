#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

int main(){
    Helicopter a(4000,"Bob");
    a.set_fuel(41.5);
    a.fly(0,45);
    a.print();
}