#include<iostream>
#include<Windows.h>
#include<ctime>

using namespace std;

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	cout << "My array\n";
	int n = 0;
	cout << "Вкажіть кількість елементів масиву : \n";
	cin >> n;
	srand(time(0));
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		array[i] = rand() % 20;
	}
	cout << "Наш масив значень:\n";
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << "\n";
	
	return 0;
}