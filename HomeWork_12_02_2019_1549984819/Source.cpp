#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
#include<locale.h>
#include<Windows.h>

using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);



void fillArray2(int arr[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = -3 + rand() % 9;
		}
	}
}

void printArray2(int arr[][30], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl << endl;
}

void changeArray2(int arr[][30], int n, int m, int column)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(j==column) arr[i][j] = -1 * arr[i][j];
		}
	}

}


void Task1()
{
	//1.	Написать функцию, которая получает матрицу и номер столбца и меняет знак элементов этого столбца на противоположный.
	//	Использовать функцию для преобразования некоторой действительной матрицы размером 4х5.

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask1\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	int n = 4, m = 5, column, flag=1;
	int arr[30][30] = { 0 };

	fillArray2(arr, n, m); 
	printArray2(arr, n, m);

	do
	{
		cout << "Введите номер столбца -> ";
		cin >> column;
		cout << endl;
		if (column < 0 || column >= m) cout << "Вы вышли за пределы массива. Повторите ввод...\n";
		else flag=0;
	} while (flag);

	
	changeArray2(arr, n, m, column);
	printArray2(arr, n, m);

}

void Task2()
{
	//Написать функции и протестировать их в основной программе.Функции печатают фигуры и используют параметры по умолчанию.
	//Параметры по умолчанию определяют, каким символом печатается фигура и является ли она заполненной или печатается только 
	//рамка фигуры.

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask2\n\n";
	SetConsoleTextAttribute(hConsole, 7);



}


int main()
{
	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n  12_02_2019_1549984819 \n\n";
	SetConsoleTextAttribute(hConsole, 7);


	setlocale(LC_ALL, "");
	srand(time(NULL));

	int number;
	char flag;

	do
	{
		cout << endl << "Enter number of Task (1) to (2) => ";
		cin >> number;

		switch (number)
		{
		case 1: {Task1(); } break;
		case 2: {Task2(); } break;

		default: cout << "\nEntered number of Task does not exist...\n\n";

		}

		SetConsoleTextAttribute(hConsole, 10);
		cout << "\n--------------------------------------------------------------------------\n\n";
		SetConsoleTextAttribute(hConsole, 7);

		cout << "Do you want to continue? \n\nIf YES press (y) if NO any keys => ";
		cin >> flag;

	} while (flag == 'y');
}
