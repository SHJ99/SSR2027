#include "pch.h"

int main() {
	int mode;
	player p;

	cout << "������ ���ϵ帳�ϴ� ����!" << endl << "�Ӹ��Ǿ� �����ϱ�>>";
	cin >> p.name;

	cout << endl;

	cout << "�� �ñ��� ���� ��� �����Ͻʴϱ�?" << endl<<endl;

	cout << "1. ������ ��ȭ�Ӱ�, ���� ���ֿ���" << endl;
	cout << "2. �� �׷��� ������ ������â�̱���. ������ ���ô�." << endl;
	cout << "3. ������ �� ����Ѵ�. ���� �� ���� ���� ���������?" << endl;
	cin >> mode;

	cout << endl;

	cout << "ȯ���մϴ� ���� ����� " << p.name << " ����." << endl;

	string lv1 = "������ �ô�, ���� �ȿ��� ���� ������ �غ��⸦ ������ �������� ���̿��� �������� �ӱ⸦ ���� ���ô�.";
	string lv2 = "�� �׷��� ��ó�� ȥ���ϰ� �������̷� �������� �� ������ ���Ǽӿ��� ��Ƴ��� ���ô�.";
	string lv3 = "��� ������ ����� �̿��ϰ� ��Һ��ٵ� ������ �ô������, �����̶� ���� �ӿ��� �¾�� ���Դϴ�.";

	switch (mode) {
	case 1:
		cout << lv1 << endl;
		break;
	case 2:
		cout << lv2 << endl;
		break;
	case 3:
		cout << lv3 << endl;
		break;
	default:
		cout << "�Ծ� �׽�Ʈ������ �̷��°� �ʹ��Ѱ� �ƴϿ�......?" << endl;
		mode = 0;
		break;
	}

	cout << endl;

	if(mode)
		p.status();
}