#include "Header.h"
#include<iostream>
using namespace std;
int m1()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}
    int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = i * 10;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}

int m2()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = j * 5;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}

	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}

int m3()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}
	int* mas1 = new int[m];
	cout << "������� m �����" << endl;
	for (int i = 0; i < m; i++)
	{
		cout << "[" << i + 1 << "]= ";
		cin >> mas1[i];
	}
	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mas[i][j] = mas1[j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "� ������ ������� ��������� ���������, ���� ��� �������� ��� � �������";

	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}

int m17()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m, k;
	int sum = 0;
	int mul = 1;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "������� ����� ������, ����� � ������������ ��������� ������� ������ ������." << endl;
	cin >> k;
	while (k < 1 || k>m)
	{
		cout << "������ 1 � ������ m. ������� ����� ������";
		cin >> m;
	}
	for (int j = 0; j < n; j++)
	{
		sum = mas[k - 1][j] + sum;
		mul = mul * mas[k - 1][j];

	}
	cout << "�����= " << sum << endl;
	cout << "������������= " << mul << endl;
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m18()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m, k;
	int sum = 0;
	int mul = 1;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "������� ����� �������, ����� � ������������ ��������� ������� ������ ������." << endl;
	cin >> k;
	k = k - 1;
	while (k < 1 || k>m)
	{
		cout << "������ 1 � ������ m. ������� ����� ������";
		cin >> m;
	}
	for (int i = 0; i < m; i++)
	{
		sum = sum + mas[i][k];
		mul = mul * mas[i][k];

	}
	cout << "�����= " << sum << endl;
	cout << "������������= " << mul << endl;
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m19()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m;
	int sum = 0;

	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + mas[i][j];
		}
		cout << "����� ������  " << i + 1 << "= " << sum << endl;
		sum = 0;
	}


	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m47()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m, k1, k2;
	int sum = 0;

	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "������� ����� ������" << endl;
	cin >> k1;
	while (k1 < 1 || k1>m)
	{
		cout << "������ 1 � ������ k2. ������� k1 ������";
		cin >> k1;
	}
	cout << "������� ����� ������ � ������� ������" << endl;
	cin >> k2;
	while (k2 < k1 || k2>m)
	{
		cout << "������ 1 � ������ m. ������� k2 ������";
		cin >> k2;
	}

	for (int j = 0; j < n; j++)
	{
		swap(mas[k1 - 1][j], mas[k2 - 1][j]);
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m48()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m, k1, k2;
	int sum = 0;

	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "������� ����� �������" << endl;
	cin >> k1;
	while (k1 < 1 || k1>n)
	{
		cout << "������ 1 � ������ k2. ������� k1 ������";
		cin >> k1;
	}
	cout << "������� ����� ������� � ������� ������" << endl;
	cin >> k2;
	while (k2 < k1 || k2>n)
	{
		cout << "������ 1 � ������ n. ������� k2 ������";
		cin >> k2;
	}

	for (int j = 0; j < n; j++)
	{
		swap(mas[j][k1 - 1], mas[j][k2 - 1]);
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m49()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int n, m;
	int sum = 0;
	int min, max;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}
	cin >> n;
	while (n < 1 || n>10)
	{
		cout << "������ 1 � ������ 10. ������� n ������";
		cin >> n;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[n];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < m; i++)
	{

		min = 0,
			max = 0;
		for (int j = 0; j < n; j++)
		{
			if (mas[i][min] > mas[i][j])
			{
				min = j;
			}
			if (mas[i][max] < mas[i][j])
			{
				max = j;
			}
		}
		int temp = mas[i][min];
		mas[i][min] = mas[i][max];
		mas[i][max] = temp;
	}
	cout << "`````````````````````````````````````````````" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m80()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int m;
	int sum = 0;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[m];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < m; i++)
	{
		sum = mas[i][i] + sum;

	}
	cout << "����� ��������� ������� ���������= " << sum;
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m81()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int m;
	double sum = 0;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[m];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mas[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	int n = m - 1;
	for (int i = 0; i < m; i++)
	{
		sum = mas[i][n] + sum;
		n--;

	}
	sum = sum / m;
	cout << "������� �������������� �������� ���������= " << sum;
	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}
int m83()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ������� �������" << endl;
	int m;
	double sum = 0;
	cin >> m;
	while (m < 1 || m>10)
	{
		cout << "������ 1 � ������ 10. ������� m ������";
		cin >> m;
	}

	int** mas = new int* [m];
	for (int i = 0; i < m; ++i)
		mas[i] = new int[m];

	cout << "���������\n";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> mas[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "���� ��������" << endl;
	for (int i = 0; i < m - 1; i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum += mas[i - j][j];

		}
		cout << sum << endl;
	}
	cout << "���� ��������" << endl;
	for (int i = 1; i < m - 1; i++)
	{
		int sum = 0;
		for (int j = 0; j < m - i; j++) { sum += mas[i + j][m - i - j]; }
		cout << sum << endl;
	}
	sum = mas[m - 1][m - 1];
	cout << sum;

	for (int i = 0; i < m; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;


	return 0;
}