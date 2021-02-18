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
	cout << number << "�� ���� ���� ȯ���մϴ�. " << endl;
}

void Station::StartEnd() {
	char start[20], end[20];
	int s, e = 0;

	cout << "��߿��� �������� �Է��ϼ���." << endl;
	cout << "*************************************" <<endl;
	cout << "��߿��� �Է��ϼ���: ";
	cin >> start;
	cout << "�������� �Է��ϼ���: ";
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
	cout << start << "������ " << end << "������ ���µ� �ɸ��� �ð� : " << dis * 2 << "��" << endl;
	cout << start << "������ " << end << "������ ���� ��� :";
	if ((dis) > 10)
	{
		cout << "1300��" << endl;
	}
	else
	{
		cout << "1100��" << endl;
	}
	cout << "���� ���: ";
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