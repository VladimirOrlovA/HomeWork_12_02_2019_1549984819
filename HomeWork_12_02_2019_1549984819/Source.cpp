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


void figure1(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1 - i; j < n; j++)
		{
			cout<< ch;
		}
		cout << endl;
	}
}

void figure11(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ( i==n-1 || j==0 || i == j) cout << ch; // рисуем границы: i==n-1 для горизонтали j==0 для вертикали, i==j для диагонали	
			else cout << " ";
		}
		cout << endl;
	}
}

void figure2(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i; j > 0; j--)
		{
			cout << ch;
		}
		cout << endl;
	}
}

void figure12(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = n-i; j > 0; j--)
		{
			if (i == 0 || j == 1 || i == n - j) cout << ch;
			else cout << " ";
		}
		cout << endl;
	}
}

void figure3(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1 || i >= n - 1 - j || i == n - 1) cout << ch;
			else cout << " ";
		}
		cout << endl;
	}
}

void figure13(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1 || i == n - 1 - j || i == n - 1) cout << ch;
			else cout << " ";
		}
		cout << endl;
	}
}

void figure4(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || j == n - 1 || j >= i) cout << ch;
			else cout << " ";
		}
		cout << endl;
	}
}

void figure14(int type, char ch, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(i==0 || j==n-1 || i==j) cout << ch;
			else cout << " ";
		}
		cout << endl;
	}
}

void figure5(char ch, int n)
{
	if (n == 0) return;
	static int w = 1;
	for (int i = 1; i < n; i++)
		cout << " ";
	for (int i = 0; i < w; i++)
		cout << ch;
	cout << endl;

	w += 2;
	figure5(n - 1);
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

	int type=1, n=8;
	char ch='*';

	/*cout << "Введите тип фигуры полная (1) пустая (2) -> ";
	cin >> type;

	cout << "Ввведите символ которым печатается фигура - > ";
	cin >> ch;

	cout << "Введите высоту фигуры -> ";
	cin >> n;*/

	//figure1(type, ch, n);
	cout << endl;
	//figure11(type, ch, n);
	cout << endl;
	//figure2(type, ch, n);
	cout << endl;
	//figure12(type, ch, n);
	cout << endl;
	//figure3(type, ch, n);
	cout << endl;
	//figure13(type, ch, n);
	cout << endl;
	//figure4(type, ch, n);
	cout << endl;
	//figure14(type, ch, n);
	cout << endl;
	figure5(ch, n);
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
