#include"Speed.h"
#include <fstream>
#include <string>
using namespace std;

Speed::Speed(const char *name, int gate) : Station(name) {
	this->gate = gate;
}

void Speed::inform() {
	show();
	cout << gate << "�� ����Ʈ�� �Ա����� ���� ���� ����Ʈ�Դϴ�. " << endl;
}

