#include<iostream>
#include<locale.h>
#include<Windows.h>

using namespace std;

// HomeWork1548948070 rev20190203


////////////  1.	�������� �������, ������� ���������� ������, ���� ������������ �������� ������������� � ����, ���� �������������.

/*

bool check(int n)
{
	cout << endl << "Enter number => ";
	cin >> n;
	if (n > 0) return true;
	else return false;
}


int main()
{
	int n=0, flag=0;
	char answer;

	do
	{
		cout << endl << check(n) << endl;

		cout << endl << "Do You want to continue y/n ? => ";
		cin >> answer;
		
		if (answer != 'y')
		{
			flag = 1;
			cout << endl << endl;
		}

	} while (flag == 0);

	system("pause");
}
*/


////////////  2.	�������� �������, ������� � ����������� �� ������ ������������ �������� ������� ��������, ������������, 
////////////  ���������, ������� ���� �����(��� ������� ���� ����� �������� ��������������).

/*
void addition(int a, int b)
{
	cout << endl << a + b << endl;
}

void subtraction(int a, int b)
{
	cout << endl << a - b << endl;
}

void multiplaction(int a, int b)
{
	cout << endl << a * b << endl;
}

void division(int a, int b)
{
	if (b != 0) cout << endl << a / b << endl;
	else cout << endl << "������: ������� �� ����!!!" << endl;
}



int main()
{
	int a, b, operation, flag = 0;
	char answer;

	//SetConsoleCP(1251);		
	//SetConsoleOutputCP(1251);	

	setlocale(LC_ALL, "");

	do
	{

		cout << "\n������� ����� a => ";
		cin >> a;

		cout << "\n������� ����� b => ";
		cin >> b;

		cout << "\n�������������� �������: ";
		cout << "\n\n (1) - �������� \n (2) - ��������� \n (3) - ��������� \n (4) - ������� ";

		cout << "\n\n�������� �������� => ";
		cin >> operation;


		switch (operation)
		{

		case 1: {addition(a, b); }break;
		case 2: {subtraction(a, b); }break;
		case 3: {multiplaction(a, b); }break;
		case 4: {division(a, b); }break;

		default: cout << "\n��������� �������� ��� � ������. ��������� ���� �����...\n";

		}

		cout << "\n�� ������ ���������� y/n ? => ";
		cin >> answer;

		if (answer != 'y') flag = 1;


	} while (flag == 0);

}
*/


////////////  3.	�������� �������, ������� ���������, �������� �� ���������� �� ����� �������? ����� ���������� �������, 
////////////  ���� ��� ������� ��� ������� ������ �� ���� � �� �������.

void check(int n)
{
	int count = 0;

	cout << "\n\n �������� �����: ";

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
			cout << n/i << " ";
		}
			
		
	}

		if (count<=2)
			cout << "\n\n ��������� ����� �������� ������� \n\n\n";
		else
			cout << "\n\n ��������� ����� �� �������� ������� \n\n\n";
}

int main()
{
	int n;

	setlocale(LC_ALL, "");

	cout << "�������� ����������� ����� => ";
	cin >> n;

	check(n);

	system("pause");
}