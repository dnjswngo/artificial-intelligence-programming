//학번: 12212513
//이름: 원주혜
#include <iostream>
#include <string>
using namespace std;

class Dice {
protected:
	int length;
	int x, y;
public:
	Dice();
	Dice(int x, int y);
	~Dice();

	void Draw();
	void Vol(int length);
};
Dice::Dice() {
	cout << "[정육면체] 좌표 = (" << x << ", " << y << ") 부피 = ";
	cout <<Dice::Vol(length) << endl;
}
void Dice:: Vol(int length) {
	int v;
	v = length * length * length;
	cout << v;
}


class 


// 여기 위쪽에 코드 작성
int main() {
	// main함수 코드는 아래 주어진 그대로 사용합니다 (채점시 아래 코드 사용)
	int menu = 0;

	while (1) {
		cout << "1) 주사위 기본모드  2) 주사위 크기조정  3) 주사위 위치변경  4) 원기둥  5) 기본형 부피비교  6) 종료 : ";
		cin >> menu;

		if (menu == 1) {
			Dice d1;
			d1.Cube::Draw();
			for (int i = 0; i < 5; i++)
				cout << d1.Random::Draw(1, 6) << " ";
			cout << "\n";
		}
		else if (menu == 2) {
			Dice d2;
			cin >> d2;

			d2.Cube::Draw();
			for (int i = 0; i < 5; i++)
				cout << d2.Random::Draw() << " ";
			cout << "\n";
		}
		else if (menu == 3) {
			double x, y;
			cout << "x, y 좌표 입력 : ";
			cin >> x >> y;

			Dice* d3 = new Dice(x, y);

			d3->Cube::Draw();
			for (int i = 0; i < 5; i++)
				cout << d3->Random::Draw() << " ";
			cout << "\n";

			delete d3;
			d3 = nullptr;
		}
		else if (menu == 4) {
			Cylinder c1;
			cin >> c1;
			c1.Draw();
			cout << "\n";
		}
		else if (menu == 5) {
			Dice d4;
			Cylinder c2;

			if (d4 > c2) {
				cout << "주사위의 부피가 더 큽니다\n";
			}
			else {
				cout << "원기둥의 부피가 더 큽니다\n";
			}
			cout << "주사위 부피 : " << d4.GetVolume() << endl;
			cout << "원기둥 부피 : " << c2.GetVolume() << endl;
		}
		else if (menu == 6) {
			cout << "* 프로그램을 종료합니다 *\n";
			break;
		}
		else
			cout << "메뉴에서 골라주세요.\n";
	}
	return 0;
}

