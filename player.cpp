#include "player.h"
#include "index.h"

void player::status() {
	cout << "�̸� : " << name << endl << endl;

	cout << "��     : " << speech << endl;
	cout << "ī������ : " << charisma << endl;
	cout << "��׷�   : " << aggro << endl;
	cout << "ģȭ��   : " << affinity << endl << endl;

	cout << "���     : " << regions[region] << endl;
	cout << "����     : " << partys[party] << endl << endl;

	cout << "Īȣ" << endl;
	for (auto m : medal) {
		cout << m << endl;
	}
}