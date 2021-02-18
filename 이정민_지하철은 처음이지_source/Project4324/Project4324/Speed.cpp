#include"Speed.h"
#include <fstream>
#include <string>
using namespace std;

Speed::Speed(const char *name, int gate) : Station(name) {
	this->gate = gate;
}

void Speed::inform() {
	show();
	cout << gate << "번 게이트가 입구에서 가장 빠른 게이트입니다. " << endl;
}

