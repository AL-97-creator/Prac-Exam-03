#include <iostream>
#include <ctime>
#include "Airplane.h"
#include "AirCraft.h"
using namespace std;

Airplane::Airplane(){
    weight=0;
    name="none";
    fuel=0;
    numberOfFlights=0;
}
Airplane::Airplane(int weight, int numPassengers) {
    this->weight=weight;
    AirCraft::set_weight(weight);
    this->numPassengers=numPassengers;
    fuel=100;
    numberOfFlights=0;
}


    void Airplane::reduce_passengers(int x){
        int z=Airplane::get_numPassengers-this->x;
        if (z>=0){
            numPassengers=z;
        } else {
            numPassengers=0;
        }

    }
    void Airplane::fly(int headwind, int minutes){
        if (AirCraft::get_fuel()>=20){
                if(headwind>=60){
                    float x=AirCraft::get_fuel() - (0.5*minutes) - (0.01*minutes*(AirCraft::get_numPassengers()));
                    if (x<20){
                        0;
                    } else {
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);}
                }else{
                    float x=AirCraft::get_fuel() - (0.3*minutes) - (0.001*minutes*(AirCraft::get_numPassengers()));
                    if (x<20){
                        0;
                    } else {
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);}
                }
            }
        } else {
            0;
        }
    }
    void Helicopter::print(){
        std::cout<< "fuel = " << AirCraft::get_fuel() << std::endl;
        std::cout<< "no. of flights = " << AirCraft::get_numberOfFlights() << std::endl;
        std::cout<< "weight = "<<AirCraft::get_weight()<<std::endl;
        std::cout<< "name = "<<Helicopter::get_name()<<std::endl;

    };