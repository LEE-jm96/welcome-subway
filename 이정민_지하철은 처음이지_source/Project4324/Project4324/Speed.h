#pragma once
#include "Station.h"
#include <iostream>
#include <fstream>
using namespace std;

class Speed : public Station {
private:
	int gate;

public:
	Speed(const char *number, int gate);
	void inform();
};