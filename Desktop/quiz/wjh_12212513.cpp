//�й�: 12212513
//�̸�: ������
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
	cout << "[������ü] ��ǥ = (" << x << ", " << y << ") ���� = ";
	cout <<Dice::Vol(length) << endl;
}
void Dice:: Vol(int length) {
	int v;
	v = length * length * length;
	cout << v;
}


class 


// ���� ���ʿ� �ڵ� �ۼ�
int main() {
	// main�Լ� �ڵ�� �Ʒ� �־��� �״�� ����մϴ� (ä���� �Ʒ� �ڵ� ���)
	int menu = 0;

	while (1) {
		cout << "1) �ֻ��� �⺻���  2) �ֻ��� ũ������  3) �ֻ��� ��ġ����  4) �����  5) �⺻�� ���Ǻ�  6) ���� : ";
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
			cout << "x, y ��ǥ �Է� : ";
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
				cout << "�ֻ����� ���ǰ� �� Ů�ϴ�\n";
			}
			else {
				cout << "������� ���ǰ� �� Ů�ϴ�\n";
			}
			cout << "�ֻ��� ���� : " << d4.GetVolume() << endl;
			cout << "����� ���� : " << c2.GetVolume() << endl;
		}
		else if (menu == 6) {
			cout << "* ���α׷��� �����մϴ� *\n";
			break;
		}
		else
			cout << "�޴����� ����ּ���.\n";
	}
	return 0;
}

