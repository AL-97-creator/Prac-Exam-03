#ifndef HELI_H
#define HELI_H
#include <iostream>
#include <ctime>
#include "Aircraft.h"
using namespace std;

class Helicopter: public AirCraft{
public:
int weight;
string n;
Helicopter();
Helicopter(int weight, string n);
int get_weight();
void set_weight(int weight);
void fly(int headwind, int minutes);
void print();
};

#endif