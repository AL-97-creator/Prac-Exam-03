#ifndef AIRP_H
#define AIRP_H
#include <iostream>
#include <ctime>
#include "AirCraft.h"
using namespace std;

class Airplane: public AirCraft{
public:
int weight;
int numPassengers;
Airplane();
Airplane(int weight, int numPassengers);
void reducePassengers(int x);
int get_numPassengers();
void fly(int headwind, int minutes);
void print();
};

#endif