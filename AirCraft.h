#ifndef AIR_H
#define AIR_H
#include "iostream"
#include <ctime>

using namespace std;

class AirCraft{
public:
int weight;
float fuel;
int numberOfFlights;
int headwind;
int minutes;
AirCraft();
AirCraft(int weight);
void refuel();
virtual void fly(int headwind, int minutes);
void set_weight(int weight);
int get_weight();
void set_fuel(float fuel);
float get_fuel();
void set_numberOfFlights(int numberOfFlights);
int get_numberOfFlights();
virtual void print();};


#endif