#include"Station.h"
#include <fstream>
#include <string>
using namespace std;

Station::Station() {
	count = 0;
	ifstream in("subway.txt");
	while (!in.eof())
	{
		in >> st[count];
		count++;
	}
	in.close();
}

Station::Station(const char* name) {
	this->number = new char(strlen(name) + 1);
	strcpy(this->number, name);
}

void Station::show() {
	cout << number << "에 오신 것을 환영합니다. " << endl;
}

void Station::StartEnd() {
	char start[20], end[20];
	int s, e = 0;

	cout << "출발역과 도착역을 입력하세요." << endl;
	cout << "*************************************" <<endl;
	cout << "출발역을 입력하세요: ";
	cin >> start;
	cout << "도착역을 입력하세요: ";
	cin >> end;
	cout << endl;

	for(int i = 0; i < count; i++){
		if (!strcmp(st[i], start))
			s = i;
		else if(!strcmp(st[i], end))
			e = i;
	}
	
	int dis = e-s;
	if(dis < 0)
	dis = -dis;
	cout << start << "역에서 " << end << "역으로 가는데 걸리는 시간 : " << dis * 2 << "분" << endl;
	cout << start << "역에서 " << end << "역으로 가는 요금 :";
	if ((dis) > 10)
	{
		cout << "1300원" << endl;
	}
	else
	{
		cout << "1100원" << endl;
	}
	cout << "역의 경로: ";
	if (s > e){
		for (int i = s; i >= e; i--) {
			cout << st[i];
			cout << " ";
		}
	}
	else{
		for (int i = s; i <= e; i++) {
			cout << st[i];
			cout << " ";
		}
    }
};

Station::~Station() {
	delete []number;
}