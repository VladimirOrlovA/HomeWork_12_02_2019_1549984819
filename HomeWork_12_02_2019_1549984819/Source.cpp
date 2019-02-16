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
	if (type)
	{
		cout << "\n ������ � 1 - ����������� \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = n - 1 - i; j < n; j++)
			{
				cout << ch;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "\n ������ � 11 - ������ \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == n - 1 || j == 0 || i == j) cout << ch; // ������ �������: i==n-1 ��� ����������� j==0 ��� ���������, i==j ��� ���������	
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void figure2(int type, char ch, int n)
{
	if (type)
	{
		cout << "\n ������ � 2 - ����������� \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = n - i; j > 0; j--)
			{
				cout << ch;
			}
			cout << endl;
		}
	}
	else
	{
		cout << "\n ������ � 12 - ������ \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = n - i; j > 0; j--)
			{
				if (i == 0 || j == 1 || i == n - j) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void figure3(int type, char ch, int n)
{
	if (type)
	{
		cout << "\n ������ � 3 - ����������� \n\n";

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
	else
	{
		cout << "\n ������ � 13 - ������ \n\n";

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
}

void figure4(int type, char ch, int n)
{
	if (type)
	{
		cout << "\n ������ � 4 - ����������� \n\n";

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
	else
	{
		cout << "\n ������ � 14 - ������ \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (i == 0 || j == n - 1 || i == j) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void figure5_7(int type, char ch, int n)
{
	if (type)
	{
		cout << "\n ������ � 5 - �������� ����������� \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (j <= i + (n / 2 + 1) + 2 && j >= (n / 2 + 1) + 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "\n ������ � 7 - �������� ������ \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (i == n - 1 || j == i + (n / 2 + 1) + 2 || j == (n / 2 + 1) + 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void figure6_8(int type, char ch, int n)
{
	if (type)
	{
		cout << "\n ������ � 6 - ������������ �������� ����������� \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (j >= i && j <= n * 2 - 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "\n ������ � 8 - ������������ �������� ������ \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (i == 0 || j == i || j == n * 2 - 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void figure9_10(int type, char ch, int n)
{
	if (type)
	{
		cout << "\n ������ � 9 - ���� ����������� \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (j <= i + (n / 2 + 1) + 2 && j >= (n / 2 + 1) + 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}

		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (j >= i && j <= n * 2 - 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "\n ������ � 9 - ���� ������ \n\n";

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (j == i + (n / 2 + 1) + 2 || j == (n / 2 + 1) + 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}

		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n * 2 - 1; j++)
			{
				if (j == i || j == n * 2 - 2 - i) cout << ch;
				else cout << " ";
			}
			cout << endl;
		}
	}
}


void Task1()
{
	//1.	�������� �������, ������� �������� ������� � ����� ������� � ������ ���� ��������� ����� ������� �� ���������������.
	//	������������ ������� ��� �������������� ��������� �������������� ������� �������� 4�5.

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask1\n\n";
	SetConsoleTextAttribute(hConsole, 7);

	int n = 4, m = 5, column, flag=1;
	int arr[30][30] = { 0 };

	fillArray2(arr, n, m); 
	printArray2(arr, n, m);

	do
	{
		cout << "������� ����� ������� -> ";
		cin >> column;
		cout << endl;
		if (column < 0 || column >= m) cout << "�� ����� �� ������� �������. ��������� ����...\n";
		else flag=0;
	} while (flag);

	
	changeArray2(arr, n, m, column);
	printArray2(arr, n, m);

}

void Task2()
{
	//�������� ������� � �������������� �� � �������� ���������. ������� �������� ������ � ���������� ��������� �� ���������.
	//��������� �� ��������� ����������, ����� �������� ���������� ������ � �������� �� ��� ����������� ��� ���������� ������ 
	//����� ������.

	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n--------------------------------------------------------------------------\n\nTask2\n\n";
	SetConsoleTextAttribute(hConsole, 7);

		int type=1, n = 7;
		char ch = '*', choi�e = 'y';
	do
	{
		cout << "������� ��� ������ ������ (0) ������ (1) -> ";
		cin >> type;

		cout << "�������� ������ ������� ���������� ������ - > ";
		cin >> ch;


		figure1(type, ch, n);
		cout << endl;
		figure2(type, ch, n);
		cout << endl;
		figure3(type, ch, n);
		cout << endl;
		figure4(type, ch, n);
		cout << endl;
		figure5_7(type, ch, n);
		cout << endl;
		figure6_8(type, ch, n);
		cout << endl;
		figure9_10(type, ch, n);
		cout << endl;

		cout << "�� ������ ���������� (y/n) ? -> ";
		cin >> choi�e;

	} while (choi�e =='y');
	
}


int main()
{
	SetConsoleTextAttribute(hConsole, 10);
	cout << "\n Orlov Vladimir  12_02_2019_1549984819 \n\n";
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
