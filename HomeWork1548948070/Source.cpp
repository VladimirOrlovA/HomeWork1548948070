#include<iostream>
#include<Windows.h>

using namespace std;

// HomeWork1548948070 rev20190203


// 1.	�������� �������, ������� ���������� ������, ���� ������������ �������� ������������� � ����, ���� �������������.

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


// 2.	�������� �������, ������� � ����������� �� ������ ������������ �������� ������� ��������, ������������, 
// ���������, ������� ���� �����(��� ������� ���� ����� �������� ��������������).


int main()
{
	int a, b, operation, flag = 0;
	char answer;

	SetConsoleCP(866);		
	SetConsoleOutputCP(866);	


	cout<< "\n������� ����� a => ";
	cin >> a;

	cout << "\n������� ����� b => ";
	cin >> b;

	do
	{

	cout << "\n�������� �������� => ";
	cin >> operation;

	switch (operation)
	{
	case1: {}break;
	case1: {}break;
	case1: {}break;
	case1: {}break;
	case1: {}break;

	default: cout << "\n��������� �������� ��� � ������. ��������� ���� �����...\n";
	}
	
	cout << "\n�� ������ ���������� y/n ? => ";
	cin >> answer;

	if (answer == 'y') flag == 1


	} while (flag == 0);

}