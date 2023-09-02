#include "pch.h"

int main() {
	int mode;
	player p;

	cout << "취임을 축하드립니다 각하!" << endl << "임명동의안 서명하기>>";
	cin >> p.name;

	cout << endl;

	cout << "현 시국에 대해 어떻게 생각하십니까?" << endl<<endl;

	cout << "1. 세상은 평화롭고, 저는 응애에오" << endl;
	cout << "2. 늘 그렇듯 적당히 엉망진창이군요. 현실을 봅시다." << endl;
	cout << "3. 세상이 날 억까한다. 내가 왜 하필 지금 대통령이지?" << endl;
	cin >> mode;

	cout << endl;

	cout << "환영합니다 신임 대통령 " << p.name << " 각하." << endl;

	string lv1 = "따뜻한 시대, 비교적 안온한 국내 사정과 해빙기를 맞이한 국제정세 사이에서 성공적인 임기를 보내 봅시다.";
	string lv2 = "늘 그랬던 것처럼 혼란하고 마구잡이로 굴러가는 이 나라의 현실속에서 살아남아 봅시다.";
	string lv3 = "비록 세상이 당신을 미워하고 평소보다도 엉망인 시대겠으나, 위인이란 난세 속에서 태어나는 법입니다.";

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
		cout << "님아 테스트때부터 이러는건 너무한거 아니오......?" << endl;
		mode = 0;
		break;
	}

	cout << endl;

	if(mode)
		p.status();
}