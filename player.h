#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

typedef struct Player{
	string name = "�˵�";

	//����
	int speech = 0; //��
	int charisma = 0; //ī������
	int aggro = 0; //��׷�
	int affinity = 0; //ģȭ��

	//�����
	int region = 0; //����
	int party = 0; //����

	vector<string> medal = {"��Ϲ�"}; //Īȣ

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