#include<iostream>
#include<locale.h>
#include<Windows.h>

using namespace std;

// HomeWork1548948070 rev20190203


////////////  1.	Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное.

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


////////////  2.	Написать функцию, которая в зависимости от выбора пользователя вызывает функции сложения, произведения, 
////////////  вычитания, деления двух чисел(эти функции тоже нужно написать самостоятельно).

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
	else cout << endl << "Ошибка: Деление на ноль!!!" << endl;
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

		cout << "\nВведите число a => ";
		cin >> a;

		cout << "\nВведите число b => ";
		cin >> b;

		cout << "\nАрифметическая опрация: ";
		cout << "\n\n (1) - Сложение \n (2) - Вычитание \n (3) - Умножение \n (4) - Деление ";

		cout << "\n\nВыберите операцию => ";
		cin >> operation;


		switch (operation)
		{

		case 1: {addition(a, b); }break;
		case 2: {subtraction(a, b); }break;
		case 3: {multiplaction(a, b); }break;
		case 4: {division(a, b); }break;

		default: cout << "\nВыбранной операции нет в списке. Повторите свой выбор...\n";

		}

		cout << "\nВы хотите продолжить y/n ? => ";
		cin >> answer;

		if (answer != 'y') flag = 1;


	} while (flag == 0);

}
*/


////////////  3.	Написать функцию, которая проверяет, является ли переданное ей число простым? Число называется простым, 
////////////  если оно делится без остатка только на себя и на единицу.

void check(int n)
{
	int count = 0;

	cout << "\n\n Делители числа: ";

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
			cout << n/i << " ";
		}
			
		
	}

		if (count<=2)
			cout << "\n\n Введенное число является ПРОСТЫМ \n\n\n";
		else
			cout << "\n\n Введенное число НЕ является ПРОСТЫМ \n\n\n";
}

int main()
{
	int n;

	setlocale(LC_ALL, "");

	cout << "Ввведите проверяемое число => ";
	cin >> n;

	check(n);

	system("pause");
}