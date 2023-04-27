#include <iostream>
#include <ctime>
#include "Helicopter.h"
#include "AirCraft.h"
using namespace std;

Helicopter::Helicopter(){
    weight=0;
    name="none";
    fuel=0;
    numberOfFlights=0;
}
Helicopter::Helicopter(int weight, string name) {
    this->weight=weight;
    AirCraft::set_weight(weight);
    this->name=name;
    fuel=100;
    numberOfFlights=0;
}


    string Helicopter::get_name(){
        return name;
    }
    void Helicopter::fly(int headwind, int minutes){
        if (AirCraft::get_fuel()>=20){
            if(AirCraft::get_weight()>5760){
                if(headwind>=40){
                    float x=AirCraft::get_fuel() - (0.4*minutes) - (0.01*(AirCraft::get_weight()-5760));
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);
                }else{
                    float x=AirCraft::get_fuel() - (0.2*minutes) - (0.01*(AirCraft::get_weight()-5760));
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);
                }
            } else {
                if(headwind>=40){
                    float x=AirCraft::get_fuel() - (0.4*minutes);
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);
                }else{
                    float x=AirCraft::get_fuel() - (0.2*minutes);
                    AirCraft::set_fuel(x);
                    int z=AirCraft::get_numberOfFlights()+1;
                    AirCraft::set_numberOfFlights(z);
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