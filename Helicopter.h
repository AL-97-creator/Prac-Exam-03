#ifndef HELI_H
#define HELI_H
#include <iostream>
#include <ctime>
#include "AirCraft.h"
using namespace std;

class Helicopter: public AirCraft{
public:
int weight;
string name;
Helicopter();
Helicopter(int weight, string name);
string get_name();
void fly(int headwind, int minutes);
void print();
};

#endif