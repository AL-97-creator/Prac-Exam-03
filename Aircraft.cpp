#include <iostream>
#include <ctime>
#include "Aircraft.h"
using namespace std;

AirCraft::AirCraft(){
    weight=0;
    fuel=100;
    numberOfFlights=0;
}
AirCraft::AirCraft(int weight) {
    this->weight=weight;
    fuel=100;
    numberOfFlights=0;
}

    void AirCraft::set_weight(int weight){
        this->weight=weight;
    }

    int AirCraft::get_weight(){
        return weight;
    }

    void AirCraft::set_fuel(float fuel){
        this->fuel=fuel;
    }

    float AirCraft::get_fuel(){
        return fuel;
    }
    void AirCraft::set_numberOfFlights(int numberOfFlights){
        this-> numberOfFlights=numberOfFlights;
    }
    int AirCraft::get_numberOfFlights(){
        return numberOfFlights;
    }
    void AirCraft::fly(int headwind, int minutes){
        int x=AirCraft::get_numberOfFlights()+1;
        AirCraft::set_numberOfFlights(x);
    }
    void AirCraft::refuel(){
        AirCraft::set_fuel(100);
    }
    void AirCraft::print(){
        std::cout<< "fuel = " << AirCraft::get_fuel() << std::endl;
        std::cout<< "no. of flights = " << AirCraft::get_numberOfFlights() << std::endl;
    };