#include <iostream>
#include "AirCraft.h"
#include "Helicopter.h"

int main(){
    Helicopter a(6000,"Bob");
    a.fly(20,20);
    a.print();
}