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
	cout << "Выбереите уровень сложности :" << endl << "1 - легко" << endl << "2 - средне" << endl << "3 - сложно" << endl;
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
		cout << "неверный уровень сложности";
		return 0;

		
	}
	for (int i = 0; i < kolvo_vopros; i++) {
		num1 = rand() % 10 + 1;
		num2 = rand() % 10 + 1;

		cout << "Пример " << i + 1 << endl << num1 << "*" << num2 << " = ";
		cin >> otvet;
		 if (otvet == num1 * num2) {
			score++;
			cout << "Верно" << endl << endl;
		}
		 else {
			 cout << "Не верно. Верный ответ: " << num1 * num2 << endl << endl;
		 }
	}	
	cout << "Правильных ответов: " << score << " из " << kolvo_vopros << endl;
	a = score / kolvo_vopros * 100;
	if (a >= 100) {
		cout << "Отлично у вас: 5" << endl;
	}
	else if (a >= 80) {
		cout << "Хорошо у вас: 4" << endl;
	}
	else if (a >= 50) {
		cout << "удовлетворительно у вас: 3" << endl;
	}
	else if (a < 50) {
		cout << " Плохо : 2" << endl;
	}
	return 0;
}