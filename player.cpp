#include "player.h"
#include "index.h"

void player::status() {
	cout << "이름 : " << name << endl << endl;

	cout << "언변     : " << speech << endl;
	cout << "카리스마 : " << charisma << endl;
	cout << "어그로   : " << aggro << endl;
	cout << "친화력   : " << affinity << endl << endl;

	cout << "출신     : " << regions[region] << endl;
	cout << "세력     : " << partys[party] << endl << endl;

	cout << "칭호" << endl;
	for (auto m : medal) {
		cout << m << endl;
	}
}