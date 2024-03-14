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

	cout << "������ �ݾ�(��) : ";
	cin >> money;

	system("cls");



	while (isRun > 0)
	{
		cout << "���� �ܾ� : " << money << " ��" << endl;
		cout << "================================ ���Ǳ� ================================" << endl;
		for (int i = 0; i < 3; i++)
			cout << i + 1 << ". " << drink[i].drinkName << " " << drink[i].cost << " (��) ";
		cout << "4. ���Ǳ� ����" << endl;
		cout << "========================================================================" << endl;
		cout << "���� ǰ�� : ";
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
	cout << "���Ǳ⸦ �����մϴ�." << endl;
}

void BandingError()
{
	cout << "Error : �߸��� ���� �Է��ϼ̽��ϴ�." << endl;
}

int drinkSelect(Drink tmp[], int choice, int* money)
{
	if ((*money) < tmp[choice - 1].cost)
	{
		cout << "�ܾ��� �����մϴ�." << endl;
		printQuitBanding();

		return -1;
	}

	cout << choice << "�� " << tmp[choice - 1].drinkName << endl;
	*money -= tmp[choice - 1].cost;

	return 1;
}
