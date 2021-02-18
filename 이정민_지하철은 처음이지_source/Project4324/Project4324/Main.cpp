#include"Station.h"
#include"Speed.h"
#include <fstream>
#include <string.h>
using namespace std;

int main() {
	Speed *a = new Speed("�д缱", 3);
	a->inform();
	Station data;
	data.StartEnd();
}