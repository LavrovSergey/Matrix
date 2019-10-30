#include <iostream>
#include <conio.h>
#include "Header.h"

using namespace std;

int menu_1();
int menu_2();
int menu_3();
int menu_4();
int menu();
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: {int answer_1 = menu_1();
		switch (answer_1) {
		case 0: m1(); break;
		case 1: m2(); break;
		case 2: m3(); break;
		case 3: return 0;
		}
	}; break;
	case 1: {int answer_2 = menu_2();
		switch (answer_2) {
		case 0: m17(); break;
		case 1: m18(); break;
		case 2: m19(); break;
		case 3: return 0;
		}
	}; break;
	case 2: {int answer_3 = menu_3();
		switch (answer_3) {
		case 0: m47(); break;
		case 1: m48(); break;
		case 2: m49(); break;
		case 3: return 0;
		}
		}; break;
	case 3: {int answer_2 = menu_2();
		switch (answer_2) {
		case 0: m80(); break;
		case 1: m81(); break;
		case 2: m83(); break;
		case 3: return 0;
		}; break;
	}; return 0;
		system("pause");
		return 0;
	}
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 4) % 4;
		if (key == 0) cout << "-> Section1" << endl;
		else  cout << "   Section1" << endl;
		if (key == 1) cout << "-> Section2" << endl;
		else  cout << "   Section2" << endl;
		if (key == 2) cout << "-> Section3" << endl;
		else  cout << "   Section3" << endl;
		if (key == 3) cout << "-> Section4" << endl;
		else  cout << "   Section4" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_1() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> m1" << endl;
		else  cout << "   m1" << endl;
		if (key == 1) cout << "-> m2" << endl;
		else  cout << "   m2" << endl;
		if (key == 2) cout << "-> m3" << endl;
		else  cout << "   m3" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_2() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "->m17" << endl;
		else  cout << "   m17" << endl;
		if (key == 1) cout << "-> m18" << endl;
		else  cout << "   m18" << endl;
		if (key == 2) cout << "-> m19" << endl;
		else  cout << "   m19" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}

int menu_3() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> m47" << endl;
		else  cout << "   m47" << endl;
		if (key == 1) cout << "-> m48" << endl;
		else  cout << "   m48" << endl;
		if (key == 2) cout << "-> m49" << endl;
		else  cout << "   m49" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}
int menu_4() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 3) % 3;
		if (key == 0) cout << "-> m80" << endl;
		else  cout << "   m80" << endl;
		if (key == 1) cout << "-> m81" << endl;
		else  cout << "   m81" << endl;
		if (key == 2) cout << "-> m83" << endl;
		else  cout << "   m83" << endl;
		code = _getch();
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");
	return key;
}