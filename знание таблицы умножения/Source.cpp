#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");


	srand(time(NULL));
	int a = 0;
	int lvl = 0;
	int score = 0;
	int otvet = 0;
	int num1 = 0;
	int num2 = 0;
	int kolvo_vopros = 0;
	cout << "��������� ������� ��������� :" << endl << "1 - �����" << endl << "2 - ������" << endl << "3 - ������" << endl;
	cin >> lvl;

	switch (lvl) 
	{
	case 1:
		kolvo_vopros = 5;
		break;
	case 2:
		kolvo_vopros = 10;
		break;
	case 3:
		kolvo_vopros = 15;
		break;
	default:
		cout << "�������� ������� ���������";
		return 0;

		
	}
	for (int i = 0; i < kolvo_vopros; i++) {
		num1 = rand() % 10 + 1;
		num2 = rand() % 10 + 1;

		cout << "������ " << i + 1 << endl << num1 << "*" << num2 << " = ";
		cin >> otvet;
		 if (otvet == num1 * num2) {
			score++;
			cout << "�����" << endl << endl;
		}
		 else {
			 cout << "�� �����. ������ �����: " << num1 * num2 << endl << endl;
		 }
	}	
	cout << "���������� �������: " << score << " �� " << kolvo_vopros << endl;
	a = score / kolvo_vopros * 100;
	if (a >= 100) {
		cout << "������� � ���: 5" << endl;
	}
	else if (a >= 80) {
		cout << "������ � ���: 4" << endl;
	}
	else if (a >= 50) {
		cout << "����������������� � ���: 3" << endl;
	}
	else if (a < 50) {
		cout << " ����� : 2" << endl;
	}
	return 0;
}