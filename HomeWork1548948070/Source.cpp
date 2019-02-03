#include<iostream>
#include<locale.h>
#include<Windows.h>

using namespace std;

// HomeWork1548948070 rev20190203


// 1.	Написать функцию, которая возвращает истину, если передаваемое значение положительное и ложь, если отрицательное.

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


// 2.	Написать функцию, которая в зависимости от выбора пользователя вызывает функции сложения, произведения, 
// вычитания, деления двух чисел(эти функции тоже нужно написать самостоятельно).


int addition(int a, int b)
{
	return  a + b;
}

int subtraction(int a, int b)
{
	return  a - b;
}

int multiplaction(int a, int b)
{
	return  a * b;
}

int division(int a, int b)
{
	return  a / b;
}



int main()
{
	int a, b, operation, flag = 0;
	char answer;

	//SetConsoleCP(1251);		
	//SetConsoleOutputCP(1251);	

	setlocale(LC_ALL, " ");

	cout<< "\nВведите число a => ";
	cin >> a;

	cout << "\nВведите число b => ";
	cin >> b;

	do
	{
	
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