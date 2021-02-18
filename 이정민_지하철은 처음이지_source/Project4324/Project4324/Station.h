#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Station {
protected:
	int count;
	char st[1000][20];
	char *number;

public:	
	Station();
	Station(const char *number);
	void show();
	void StartEnd();
	~Station();
};