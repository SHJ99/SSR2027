#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

typedef struct Player{
	string name = "알데";

	//스텟
	int speech = 0; //언변
	int charisma = 0; //카리스마
	int aggro = 0; //어그로
	int affinity = 0; //친화력

	//출신지
	int region = 0; //지역
	int party = 0; //세력

	vector<string> medal = {"허니문"}; //칭호

	void status();

}player;

typedef struct Korea {
	int ecnm_lv = 3;
	int ecnm_exp = 0;

	int mil_lv = 4;
	int mil_exp = 0;

	int cult_lv = 3;
	int cult_exp = 0;

	int hum_lv = 2;
	int hum_exp = 0;

	int sci_lv = 3;
	int sci_exp = 0;

	int pop_lv = 3;
	int pop_exp = 0;
}korea;