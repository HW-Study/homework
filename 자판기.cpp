#include <iostream>

using namespace std;

struct Drink {
	char drinkName[10];
	int cost;
};

void printQuitBanding();
void BandingError();
int drinkSelect(Drink tmp[], int choice, int* money);

int RunBandingMachine()
{
	int money = 0, userChoice = 0, isRun = 1;

	Drink drink[3] = { "coffee",400,"cola",300,"water",200 };

	cout << "투입할 금액(원) : ";
	cin >> money;

	system("cls");



	while (isRun > 0)
	{
		cout << "현재 잔액 : " << money << " 원" << endl;
		cout << "================================ 자판기 ================================" << endl;
		for (int i = 0; i < 3; i++)
			cout << i + 1 << ". " << drink[i].drinkName << " " << drink[i].cost << " (원) ";
		cout << "4. 자판기 종료" << endl;
		cout << "========================================================================" << endl;
		cout << "선택 품목 : ";
		cin >> userChoice;

		switch (userChoice)
		{
		case 1:
		case 2:
		case 3:
			isRun = drinkSelect(drink, userChoice, &money);
			system("pause");
			system("cls");
			break;
		case 4:
			printQuitBanding();

			isRun = 0;
			break;
		default:
			BandingError();
			printQuitBanding();

			isRun = 0;
			break;
		}
	}

	return 0;
}

void printQuitBanding()
{
	cout << "자판기를 종료합니다." << endl;
}

void BandingError()
{
	cout << "Error : 잘못된 값을 입력하셨습니다." << endl;
}

int drinkSelect(Drink tmp[], int choice, int* money)
{
	if ((*money) < tmp[choice - 1].cost)
	{
		cout << "잔액이 부족합니다." << endl;
		printQuitBanding();

		return -1;
	}

	cout << choice << "번 " << tmp[choice - 1].drinkName << endl;
	*money -= tmp[choice - 1].cost;

	return 1;
}
