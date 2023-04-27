#include <iostream>
#include <ctime>
#include "Airplane.h"
#include "AirCraft.h"
using namespace std;

Airplane::Airplane(){
    weight=0;
    numPassengers=0;
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


    int Airplane::get_numPassengers(){
        return numPassengers;
    }
    void Airplane::reducePassengers(int x){
        int z=Airplane::get_numPassengers()-x;
        if (z>=0){
            this->numPassengers=z;
        } else {
            this->numPassengers=0;
        }

    }
    void Airplane::fly(int headwind, int minutes){
        if (AirCraft::get_fuel()>=20){
                if(headwind>=60){
                    float x=AirCraft::get_fuel() - (0.5*minutes) - (0.001*minutes*(Airplane::get_numPassengers()));
                    if (x<20){
                        0;
                    }else{
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);}
                }else{
                    float x=AirCraft::get_fuel() - (0.3*minutes) - (0.001*minutes*(Airplane::get_numPassengers()));
                    if (x<20){
                        0;
                    }else{
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);}
                }
        }else{
            0;
        }}
    void Airplane::print(){
        std::cout<< "fuel = " << AirCraft::get_fuel() << std::endl;
        std::cout<< "no. of flights = " << AirCraft::get_numberOfFlights() << std::endl;
        std::cout<< "weight = "<<AirCraft::get_weight()<<std::endl;

    };