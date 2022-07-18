#include "mainHeader.h"



int mapit = 2;

int playstop = 0;
int selectMenu = 1;
int asdfghjkl = 0;

int map[17][17] = {

	-100

};

int map1[17][17] = {

	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,1,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,0,-1,1,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}

};

int map2[17][17] = {

	{-1,-1,-1,-1,-1,-1,-100,-100,-100,-100,-100,-1,-1,-1,-1,-1,-1},
	{-1,1,1,0,0,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,-1},
	{-1,1,-1,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1},
	{-1,0,-1,0,-1,-1,-1,0,0,-1,-1,-1,-1,0,-1,0,-1},
	{-1,0,0,0,-1,-100,-1,0,0,0,-1,-100,-1,0,0,0,-1},
	{-1,-1,0,0,-1,-100,-1,-1,0,0,-1,-100,-1,0,0,-1,-1},
	{-100,-1,0,0,-1,-100,-1,0,0,0,-1,-100,-1,0,0,-1,-100},
	{-100,-1,0,0,-1,-1,-1,0,0,-1,-1,-1,-1,0,0,-1,-100},
	{-100,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-100},
	{-100,-1,0,0,-1,-1,-1,-1,0,0,-1,-1,-1,0,0,-1,-100},
	{-100,-1,0,0,-1,-100,-1,0,0,0,-1,-100,-1,0,0,-1,-100},
	{-1,-1,0,0,-1,-100,-1,0,0,-1,-1,-100,-1,0,0,-1,-1},
	{-1,0,0,0,-1,-100,-1,0,0,0,-1,-100,-1,0,0,0,-1},
	{-1,0,-1,0,-1,-1,-1,-1,0,0,-1,-1,-1,0,-1,0,-1},
	{-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,-1,1,-1},
	{-1,0,0,0,0,-1,-1,-1,-1,-1,-1,-1,0,0,1,1,-1},
	{-1,-1,-1,-1,-1,-1,-100,-100,-100,-100,-100,-1,-1,-1,-1,-1,-1},


};

int map3[17][17] = {
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
	{-1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-1},
	{-1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,-1},
	{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},

};

int map4[17][17] = {

	{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-100,-1},
	{ -1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,},

};

void colset(int color) {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
void corsor(int x, int y) {
	Gotoxy(x, y);
	printf("��");
	int key;
	while (1) {
		Gotoxy(x, y);
		if (_kbhit()) {
			key = _getch();
			switch (key) {
			case LEFT:
				/*if (x != 0)
					x -= 2;*/
				break;
			case RIGHT:
				/*x += 2;
				break;*/
			case UP:
				if (selectMenu > 1) {
					Gotoxy(x, y);
					printf("  ");
					y = y - 3;
					selectMenu--;
					Gotoxy(x, y);
					printf("��");
				}
				break;
			case DOWN:
				if (selectMenu < 5) {
					Gotoxy(x, y);
					printf("  ");
					y = y + 3;
					selectMenu++;
					Gotoxy(x, y);
					printf("��");
				}
				break;
			case ENTER:
				return;
				break;
			case 27:
				Gotoxy(40, 22);
				exit(0);
			}
		}
	}
}

void Corsor(int x, int y) {
	COORD Cur;
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
}

void Start()
{

	HideCursor(1);

	mapbackup();

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //������ ������ ���� 1~15 
	printf("\n");
	Gotoxy(23, 3); printf("��"); Sleep(120);
	Gotoxy(25, 3); printf("ũ"); Sleep(120);
	Gotoxy(27, 3); printf("��"); Sleep(120);
	Gotoxy(29, 3); printf("��"); Sleep(120);
	Gotoxy(31, 3); printf("��"); Sleep(120);
	Gotoxy(33, 3); printf("��"); Sleep(120);
	Gotoxy(35, 3); printf("��"); Sleep(120);
	Gotoxy(37, 3); printf("��"); Sleep(120);
	Gotoxy(39, 3); printf("��"); Sleep(120);
	Gotoxy(41, 3); printf("��"); Sleep(120);

	Gotoxy(25, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   ���ӽ���");
	Gotoxy(25, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   ���ӹ��");
	Gotoxy(25, 14);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   �����ۼ���");
	Gotoxy(25, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   ĳ���ͼ���");
	Gotoxy(25, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   ȭ�鼳��");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);

	Gotoxy(58, 5);
	printf("�̵� : ��, ��");
	Gotoxy(58, 7);
	printf("���� : ENTER");

	Gotoxy(57, 10);
	printf("�������� : ESC");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	PlaySound(TEXT("Login.wav.wav"), NULL, SND_ASYNC);



}

//void HideCursor() //Ŀ���� ����
//{
//	CONSOLE_CURSOR_INFO cursor;
//	cursor.bVisible = FALSE;
//	cursor.dwSize = sizeof(cursor);
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorInfo(handle, &cursor);
//}

void game() {




	Gotoxy(35, 2); printf(" �ڰ��� �����");

	Gotoxy(10, 5); printf("���δ� ��ǳ���� ������ ������ ��ǳ���� ��Ʈ�� �� �ֽ��ϴ�. ");

	Gotoxy(10, 6); printf("������ ���� �� �����ð��� ������ ��ǳ���� ������ ������ ����˴ϴ�.");

	Gotoxy(10, 7); printf("�������� �����ϰ� ����� �¸��� �̲��� ������!");

	Gotoxy(10, 10); printf("player 1 : w a s d�� ĳ���͸� ������ �� �ֽ��ϴ�.");

	Gotoxy(10, 11); printf("\'Q\'�� ���� ��ǳ���� ��ġ�� �� �ֽ��ϴ�.");

	Gotoxy(10, 12); printf("\'E\'�� ���� �ٴ��� ����� �� �ֽ��ϴ�.");

	Gotoxy(10, 15); printf("palyer 2 : ȭ��ǥ�� ĳ���͸� ������ �� �ֽ��ϴ�.");

	Gotoxy(10, 16); printf("���� ����Ű \'0\'�� ���� ��ǳ���� ��ġ�� �� �ֽ��ϴ�.");

	Gotoxy(10, 17); printf("���� \'/\'�� ���� �ٴ��� ����� �� �ֽ��ϴ�,");




	Gotoxy(50, 22); printf("ESC�� ���� �������� ���ư��ϴ�.");

	printf("\n");

	while (1)
	{
		if (_getch() == 27)
			break;
	}

	system("cls");


}

void item()
{

	Gotoxy(35, 3); printf("�ھ����� �����");

	Gotoxy(9, 10); printf("�ٴ� : ��ǳ���� ���� ��Ȳ���� �ϳ��� �Ҹ��� �������� �� �ֽ��ϴ�. (��)");

	Gotoxy(9, 13); printf("��ǳ�� : ��ġ ������ ��ǳ���� ������ �����մϴ�. (��)");

	Gotoxy(9, 16); printf("���� : ��ǳ���� ���̰� �����մϴ�. (��)");

	printf("\n\n\n\n\n");

	Gotoxy(50, 22); printf("ESC�� ���� �������� ���ư��ϴ�.");

	while (1)
	{
		if (_getch() == 27)
			break;
	}

	system("cls");
}

void scrset() {

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
	Gotoxy(0, 0);
	printf("��");
	Gotoxy(85, 0);
	printf("��");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
	Gotoxy(4, 11);
	printf("          ��Ȱ�� ���� ȯ���� ���� ȭ��ǥ�� �𼭸��� �´�� �������ּ���.");
	Gotoxy(0, 23);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
	printf("��");
	Gotoxy(85, 23);
	printf("��");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	Gotoxy(50, 22); printf("ESC�� ���� �������� ���ư��ϴ�.");

	while (1)
	{
		if (_getch() == 27)
			break;
	}

	system("cls");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

}

int choice(int num) {

	/*int num;
	printf("�Է��ϼ��� >> ");
	scanf("%d", &num)*/;
	if (num == 1) {
		system("cls");
		Ready();


	}
	else if (num == 2) {
		system("cls");
		game();
	}
	else if (num == 3) {
		system("cls");
		item();
	}
	else if (num == 4) {
		system("cls");
		charasdfghjkl();
	}
	else if (num == 5) {
		system("cls");
		scrset();
	}

}



void mapchoice() {

	srand(time(NULL));

	system("cls");

	int choice = 1;
	int color;
	char input;

	int x = 58, y =5;
	colset(LIGHTYELLOW);
	Gotoxy(x, y);
	printf("���� : SpaceBar");

	Gotoxy(x, y+2);
	printf(" ���� : Enter");
	colset(LIGHTWHITE);

	x -= 8;
	y += 2;


	Gotoxy(x, y + 4);
	printf("����������������������������������������������������������");
	Gotoxy(x, y + 5);
	printf("��                           ��");
	Gotoxy(x, y + 6);
	printf("��                           ��");
	Gotoxy(x, y + 7);
	printf("��                           ��");
	Gotoxy(x, y + 8);
	printf("��                           ��");
	Gotoxy(x, y + 9);
	printf("��                           ��");
	Gotoxy(x, y + 10);
	printf("��                           ��");
	Gotoxy(x, y + 11);
	printf("����������������������������������������������������������");
	

	while (1) {

		if (choice == 1) {
			maprint(map1, 17, 17, 10, 3);
			Gotoxy(x+5, y + 6);
			printf("�ڡ١١١�");
			Gotoxy(x + 5, y + 8);
			printf("�����̵�    ");
				
		}else if (choice == 2) {
			maprint(map2, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("�ڡڡڡ١�");
			Gotoxy(x + 5, y + 8);
			printf("���ۺ���    ");
		}
		else if (choice == 3) {
			maprint(map3, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("�ڡڡڡڡ�");
			Gotoxy(x + 5, y + 8);
			printf("ũ������!   ");
		}
		else if (choice == 4) {
			maprint(map4, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("�١١١١�");
			Gotoxy(x + 5, y + 8);
			printf("����           ");
		}

		if (_kbhit()) {
			input = _getch();
			if (input == ' ') {
				if (choice == 4)
					choice = 1;
				else
					choice++;
			}
			else if (input == 13)
				break;

			Sleep(100);
		}
		
	}
	mapit = choice;

	if (choice == 4) {
		for (int i = 0; i < 12; i++) {
			maprint(map4, 17, 17, 10, 3);
			Sleep(70);
			int randy = rand() % 3 + 1;

			if (randy == 1) {
				maprint(map1, 17, 17, 10, 3);
			}
			else if (randy == 2) {
				maprint(map2, 17, 17, 10, 3);
			}
			else if (randy == 3) {
				maprint(map3, 17, 17, 10, 3);
			}

			Sleep(70 * i);
			mapit = randy;
		}

	}



	system("cls");
}

void charasdfghjkl/*ĳ�������Լ� ����*/() {


	Gotoxy(50, 22); printf("ESC�� ���� �������� ���ư��ϴ�.");

	HideCursor(1);

	int x = 20, y = 6;
	int chactclor;

	Gotoxy(x, 5); printf("������������������������������������������������������������������������������������������");
	Gotoxy(x, 14); printf("������������������������������������������������������������������������������������������");
	Gotoxy(x, 20); printf("������������������������������������������������������������������������������������������");

	for (int i = 6; i <= 19; i++)
	{
		Gotoxy(x, i);
		printf("��");
	}
	for (int i = 6; i <= 19; i++) {
		Gotoxy(x + 44, i);
		printf("��");
	}

	x = 37, y = 8;

	for (int i = 1;;) {

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

		if (i == 7)
			i = 1;
		else if (i == 0)
			i = 6;

		switch (i)
		{
		case 1:

			chactclor = 12;

			Gotoxy(x, y++);
			printf("    o__o ");
			Gotoxy(x, y++);
			printf("  ((e��e)) ");
			Gotoxy(x, y++);
			printf("   o(��)o ");
			Gotoxy(x, y++);
			printf("    ���� ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf(" ���� BAZZI    ");

			Gotoxy(42, y - 8);
			printf("#�ʺ����� #���׶��    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("����   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("���ٱ� ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}
			break;
		case 2:

			chactclor = 9;

			Gotoxy(x, y++);
			printf("    ____ ");
			Gotoxy(x, y++);
			printf("  ((o`vo)O ");
			Gotoxy(x, y++);
			printf("   o(--)o ");
			Gotoxy(x, y++);
			printf("    ���� ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  �ٿ� DAO    ");

			Gotoxy(42, y - 8);
			printf("#�ָӴ�_ŭ #����ĳ    ");

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);


			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("����   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 10)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("���ٱ� ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}
			break;
		case 3:

			chactclor = 14;

			Gotoxy(x, y++);
			printf("   ��__�� ");
			Gotoxy(x, y++);
			printf("  ((Q��Q)) ");
			Gotoxy(x, y++);
			printf("   o(��)o ");
			Gotoxy(x, y++);
			printf("    ���� ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("������ DIZNI   ");

			Gotoxy(42, y - 8);
			printf("#���� #�Ϳ��� #����    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("����   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("���ٱ� ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 9)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			break;
		case 4:

			chactclor = 8;

			Gotoxy(x, y++);
			printf("   _o��o_ ");
			Gotoxy(x, y++);
			printf("  ((d,`o)) ");
			Gotoxy(x, y++);
			printf("   o('')o ");
			Gotoxy(x, y++);
			printf("    ����");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  �� MOS   ");

			Gotoxy(42, y - 8);
			printf("#��ǳ��_���� #��    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("����   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 8)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("���ٱ� ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 5)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			break;
		case 5:

			chactclor = 10;

			Gotoxy(x, y++);
			printf("   o_��_o ");
			Gotoxy(x, y++);
			printf("  ((o��o)) ");
			Gotoxy(x, y++);
			printf("   o(\"\")o ");
			Gotoxy(x, y++);
			printf("    ���� ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  ��� UNI    ");

			Gotoxy(42, y - 8);
			printf("#������_�־� #����    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("����   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("���ٱ� ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			break;
		case 6:

			chactclor = 13;

			Gotoxy(x, y++);
			printf("    _��_  ");
			Gotoxy(x, y++);
			printf("  ((G, G)) ");
			Gotoxy(x, y++);
			printf("   o(��)o ");
			Gotoxy(x, y++);
			printf("    ���� ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("������  MARID");

			Gotoxy(42, y - 8);
			printf("#������ #��ī_�ߵ�     ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("����   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 9)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("���ٱ� ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("�� ");
			}


			break;
		}

		x = 37, y = 8;

		Sleep(150);

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);


		Gotoxy(x - 8, 10); printf("<<");
		Gotoxy(x + 18, 10); printf(">>");


		int inp = _getch();
		if (inp == ',' || inp == '<') {
			i--;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
			Gotoxy(x - 8, 10); printf("<<");
		}
		else if (inp == '.' || inp == '>') {
			i++;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
			Gotoxy(x + 18, 10); printf(">>");
		}
		else if (inp == 27)
			break;

	}

	system("cls");
}

struct XYLBSGIn {
	int x;
	int y;
	int len;
	int br;
	int lenmax;
	int brmax;
	int stop;
	int gameout;
	int item;
	char name[9];
	int color;
	char character;
};
//�÷��̾� ����

struct XYLBSGIn pl1 = { 1,1,1,1,10,10,0,0,0,"Player 1",12,1 };
struct XYLBSGIn pl2 = { 15,15,1,1,10,10,0,0,0,"Player 2",12,1 };

struct XYLBSGIn backupl1 = { 1,1,1,1,10,10,0,0,0,"Player 1",12,1 };
struct XYLBSGIn backupl2 = { 15,15,1,1,10,10,0,0,0,"Player 2",12,1 };

void main() {

	HideCursor(1);
	//������ ��ü���� �帧

	//Ready();

	if (asdfghjkl == 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11�� ���� ��üȭ������ ���� �� �ּ���.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11�� ���� ��üȭ������ ���� �� �ּ���.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11�� ���� ��üȭ������ ���� �� �ּ���.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11�� ���� ��üȭ������ ���� �� �ּ���.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11�� ���� ��üȭ������ ���� �� �ּ���.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11�� ���� ��üȭ������ ���� �� �ּ���.");
		Sleep(500);

		asdfghjkl++;
	}

	HideCursor(1);

	system("cls");

	while (1) {
		Start();

		selectMenu = 1;
		corsor(22, 8);

		choice(selectMenu);
		if (selectMenu == 1) {
			break;
		}
	}

	HANDLE thread1 = CreateThread(NULL, 0, player, NULL, 0, NULL);

	int isize, jsize, xarrange, yarrange;


	if (mapit == 1) {
		for (int i = 0; i < 17; i++) {
			for(int j=0;j<17;j++)
				map[i][j] = map1[i][j];
		}
	}
	else if (mapit == 2) {
		for (int i = 0; i < 17; i++) {
			for (int j = 0; j < 17; j++)
				map[i][j] = map2[i][j];
		}

	}
	else if (mapit == 3) {
		for (int i = 0; i < 17; i++) {
			for (int j = 0; j < 17; j++)
				map[i][j] = map3[i][j];
		}

	}

	pl1.x = 1,pl1.y = 1;
	pl2.x = 15, pl2.y = 15;
	map[pl1.x][pl1.y] = 12;
	map[pl2.x][pl2.y] = 15;

	system("cls");
	maprint(map, 17, 17, 10, 3);
	readygo();
	system("cls");

	profile(50, 4, pl1.character, pl1.color);
	profile(50, 12, pl2.character, pl2.color);
	Gotoxy(68, 6);
	printf("%s", pl1.name);
	Gotoxy(68, 14);
	printf("%s", pl2.name);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);


	while (pl1.gameout == 0 && pl2.gameout == 0)
	{
		Sleep(20);
		maprint(map, 17, 17, 10, 3);
		Gotoxy(69, 8);
		printf("�� x %d", pl1.item);
		Gotoxy(69, 16);
		printf("�� x %d", pl2.item);
	}

	Sleep(500);

	if (pl1.gameout == 1)
		result(2);
	else if (pl2.gameout == 1)
		result(1);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	Gotoxy(52, 22);
	printf("�ƹ� Ű�� ���� ����մϴ�.");

	system("pause>null");
	system("cls");

	for (int i = 0; i <= 1; i++) {
		main();
	}




	///����ȭ������ �̵��ϴ� Ű


	//%s�Ἥ �г��� ����ص�...�ɵ�? �̰� ���� ����!
}

void result(int winner) {

	char name[10];

	if (winner == 1) {
		strcpy(name, pl1.name);
	}else if (winner == 2) {
		strcpy(name, pl2.name);
	}

	Gotoxy(16, 8);
	printf("������������������������������������������������������������������������������������������������������������"); Sleep(200);
	Gotoxy(16, 9);  printf("��                                                    ��"); Sleep(100);
	Gotoxy(16, 10);  printf("��                                                    ��"); Sleep(100);
	Gotoxy(16, 11);  printf("��                                                    ��"); Sleep(100);
	Gotoxy(16, 12);  printf("��                                                    ��"); Sleep(100);
	Gotoxy(16, 13);  printf("��                                                    ��"); Sleep(100);
	Gotoxy(16, 14);
	printf("������������������������������������������������������������������������������������������������������������"); Sleep(500);
	PlaySound(TEXT("lose.wav"), NULL, SND_ASYNC);
	
	for (int i = 0; i < 7;) {

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
		Gotoxy(35, 11);
		printf("%8s   WIN!", name);
		Sleep(500); i++;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), YELLOW);
		Gotoxy(35, 11);
		printf("%8s   WIN!", name);
		Sleep(500); i++;
	}
}

void mapbackup() {

	pl1 = backupl1;
	pl2 = backupl2;
}

void Ready()
{
	mapchoice();
	readypick();


}
void readypick() {

	PlaySound(TEXT("bibib.wav"), NULL, SND_ASYNC);


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	char input;
	int player1 = 0, player2 = 0;
	int pl1char = 1, pl2char = 1;
	
	int x=8, y;
	
	

	Gotoxy(x, 3); printf("������������������������������������������������������������������������������������������");
	Gotoxy(x, 4); printf("        %8s              %8s", pl1.name, pl2.name);
	Gotoxy(x, 5); printf("������������������������������������������������������������������������������������������");
	Gotoxy(x, 15); printf("������������������������������������������������������������������������������������������");
	Gotoxy(x, 19); printf("������������������������������������������������������������������������������������������");

	for (int i = 4; i <= 18; i++)
	{
		Gotoxy(x + 22, i);
		printf("��");
	}
	for (int i = 4; i <= 18; i++)
	{
		Gotoxy(x, i);
		printf("��");
	}
	for (int i = 4; i <= 18; i++) {
		Gotoxy(x + 44, i);
		printf("��");
	}

	while (1) {

		x = 60, y = 8;
		colset(LIGHTYELLOW);
		Gotoxy(x, y);
		printf("���� : A,D / ��,��");

		Gotoxy(x, y + 2);
		printf("�غ� : W,S / ��,��");

		Gotoxy(x - 2, y + 5);
		printf("���� Ű �۵��� ���� ������");
		colset(pl1.color);
		Gotoxy(x - 2, y + 6);
		printf("Caps Lock");
		colset(LIGHTYELLOW);
		printf("�̳� ");
		colset(pl2.color);
		printf("Num Lock");
		colset(LIGHTYELLOW);
		printf("��");
		Gotoxy(x - 2, y + 7);
		printf("Ȯ���� �ּ���.");
		colset(LIGHTWHITE);


		x = 8;


		if (player1 == 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
			Gotoxy(x + 10, 17); printf("Ready");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		}
		else if (player1 == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), REDC);
			Gotoxy(x + 10, 17); printf("Ready");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		}

		if (player2 == 0) {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
			Gotoxy(x + 31, 17); printf("Ready");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		}
		else if (player2 == 1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), REDC);
			Gotoxy(x + 31, 17); printf("Ready");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		}

		charprint(pl1char, pl1.color, 14, 7);
		charprint(pl2char, pl2.color, 36, 7);

		input = _getch();



		if (input == 'w') {
			player1 = 1;
		}
		else if (input == 's') {
			player1 = 0;
		}
		else if (input == 72) {
			player2 = 1;
		}
		else if (input == 80) {
			player2 = 0;
		}

		switch (input)
		{
		case 'd':
			if (pl1char == 6 && player1 != 1)
				pl1char = 1;
			else if (pl1char > 0 && pl1char < 6 && player1 != 1)
				pl1char++;
			break;
		case 'a':
			if (pl1char == 1 && player1 != 1)
				pl1char = 6;
			else if (pl1char > 1 && pl1char < 7 && player1 != 1)
				pl1char--;
			break;
		case 77:
			if (pl2char == 6 && player2 != 1)
				pl2char = 1;
			else if (pl2char > 0 && pl2char < 6 && player2 != 1)
				pl2char++;
			break;
		case 75:
			if (pl2char == 1 && player2 != 1)
				pl2char = 6;
			else if (pl2char > 1 && pl2char < 7 && player2 != 1)
				pl2char--;
			break;
		default:
			break;
		}


		switch (pl1char)
		{
		case 1:
			pl1.character = 'B';
			pl1.color = 12;
			pl1.br = 1;
			pl1.len = 1;
			pl1.brmax = 6;
			pl1.lenmax = 7;
			break;
		case 2:
			pl1.character = 'D';
			pl1.color = 9;
			pl1.br = 1;
			pl1.len = 1;
			pl1.brmax = 10;
			pl1.lenmax = 7;
			break;
		case 3:
			pl1.character = 'Z';
			pl1.color = 14;
			pl1.br = 2;
			pl1.len = 1;
			pl1.brmax = 7;
			pl1.lenmax = 9;
			break;
		case 4:
			pl1.character = 'M';
			pl1.color = 8;
			pl1.br = 1;
			pl1.len = 1;
			pl1.brmax = 8;
			pl1.lenmax = 5;
			break;
		case 5:
			pl1.character = 'U';
			pl1.color = 10;
			pl1.br = 1;
			pl1.len = 2;
			pl1.brmax = 6;
			pl1.lenmax = 7;
			break;
		case 6:
			pl1.character = 'R';
			pl1.color = 13;
			pl1.br = 2;
			pl1.len = 1;
			pl1.brmax = 9;
			pl1.lenmax = 6;
			break;
		default:
			break;
		}

		switch (pl2char)
		{
		case 1:
			pl2.character = 'B';
			pl2.color = 12;
			pl2.br = 1;
			pl2.len = 1;
			pl2.brmax = 6;
			pl2.lenmax = 7;
			break;
		case 2:
			pl2.character = 'D';
			pl2.color = 9;
			pl2.br = 1;
			pl2.len = 1;
			pl2.brmax = 10;
			pl2.lenmax = 7;
			break;
		case 3:
			pl2.character = 'Z';
			pl2.color = 14;
			pl2.br = 2;
			pl2.len = 1;
			pl2.brmax = 7;
			pl2.lenmax = 9;
			break;
		case 4:
			pl2.character = 'M';
			pl2.color = 8;
			pl2.br = 1;
			pl2.len = 1;
			pl2.brmax = 8;
			pl2.lenmax = 5;
			break;
		case 5:
			pl2.character = 'U';
			pl2.color = 10;
			pl2.br = 1;
			pl2.len = 2;
			pl2.brmax = 6;
			pl2.lenmax = 7;
			break;
		case 6:
			pl2.character = 'R';
			pl2.color = 13;
			pl2.br = 2;
			pl2.len = 1;
			pl2.brmax = 9;
			pl2.lenmax = 6;
			break;
		default:
			break;
		}

		if (player1 == 1 && player2 == 1) {

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), REDC);
			Gotoxy(x + 10, 17); printf("Ready");
			Gotoxy(x + 31, 17); printf("Ready");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

			break;
		}
	}

}

void charprint(int charpl, char color, int x, int y) {

	switch (charpl)
	{
	case 1:
		Gotoxy(x, y++);
		printf("    o__o ");
		Gotoxy(x, y++);
		printf("  ((e��e)) ");
		Gotoxy(x, y++);
		printf("   o(��)o ");
		Gotoxy(x, y++);
		printf("    ���� ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf(" ���� BAZZI    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 2:
		Gotoxy(x, y++);
		printf("    ____ ");
		Gotoxy(x, y++);
		printf("  ((o`vo)O ");
		Gotoxy(x, y++);
		printf("   o(--)o ");
		Gotoxy(x, y++);
		printf("    ���� ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  �ٿ� DAO    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 3:
		Gotoxy(x, y++);
		printf("   ��__�� ");
		Gotoxy(x, y++);
		printf("  ((Q��Q)) ");
		Gotoxy(x, y++);
		printf("   o(��)o ");
		Gotoxy(x, y++);
		printf("    ���� ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("������ DIZNI   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 4:
		Gotoxy(x, y++);
		printf("   _o��o_ ");
		Gotoxy(x, y++);
		printf("  ((d,`o)) ");
		Gotoxy(x, y++);
		printf("   o('')o ");
		Gotoxy(x, y++);
		printf("    ����");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  �� MOS   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 5:
		Gotoxy(x, y++);
		printf("   o_��_o ");
		Gotoxy(x, y++);
		printf("  ((o��o)) ");
		Gotoxy(x, y++);
		printf("   o(\"\")o ");
		Gotoxy(x, y++);
		printf("    ���� ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  ��� UNI    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 6:
		Gotoxy(x, y++);
		printf("    _��_  ");
		Gotoxy(x, y++);
		printf("  ((G, G)) ");
		Gotoxy(x, y++);
		printf("   o(��)o ");
		Gotoxy(x, y++);
		printf("    ���� ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("������  MARID");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	default:
		break;
	}
}

void maprint(int* ptr, int isize, int jsize, int arrangex, int arrangey)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);



	Gotoxy(arrangex - 2, arrangey - 1);
	printf("��");
	for (int i = -1; i < jsize * 2; i++)
	{
		printf("��");

	}
	printf("��");

	for (int i = 0; i < isize; i++)
	{
		Gotoxy(arrangex - 2, arrangey + i);
		printf("��");

	}
	for (int i = 0; i < isize; i++)
	{
		Gotoxy(arrangex + jsize * 2, arrangey + i);
		printf("��");

	}

	Gotoxy(arrangex - 2, arrangey + isize);
	printf("��");
	for (int i = 0; i <= jsize * 2; i++)
	{
		printf("��");

	}
	printf("��");

	for (int i = 0; i < isize; i++) {
		Gotoxy(arrangex, arrangey + i);
		for (int j = 0; j < jsize; j++) {
			if (*((ptr + i * jsize) + j) == -1)
				printf("��");
			else if (*((ptr + i * jsize) + j) == 0)
				printf("��");
			else if (*((ptr + i * jsize) + j) == 1)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
				printf(" .");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 10) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTBLUE);
				printf(" @");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == -10)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTBLUE);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == -30)
				printf("��");
			else if (*((ptr + i * jsize) + j) == -100)
				printf("  ");
			else if (*((ptr + i * jsize) + j) == 11)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 13)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 14)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 15)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 16)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 17)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 18)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 20) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTBLUE);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 101)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 102)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 103)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("��");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 104)
				printf("");

		}
		printf("\n");


	}


}

void profile(int x, int y, char ch, int col) {

	Gotoxy(x, y);

	printf("���������������������������������������������������������� ");
	Gotoxy(x, y + 1);
	printf("��                           �� ");
	Gotoxy(x, y + 2);
	printf("��                           �� ");
	Gotoxy(x, y + 3);
	printf("��                           �� ");
	Gotoxy(x, y + 4);
	printf("��                           �� ");
	Gotoxy(x, y + 5);
	printf("��                           �� ");
	Gotoxy(x, y + 6);
	printf("���������������������������������������������������������� ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
	Gotoxy(x + 17, y + 3);
	printf("��������������������");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	x += 2;
	y++;

	Gotoxy(x, y);
	printf("�������������������������� ");
	Gotoxy(x, y + 1);
	printf("��           �� ");
	Gotoxy(x, y + 2);
	printf("��           �� ");
	Gotoxy(x, y + 3);
	printf("��           �� ");
	Gotoxy(x, y + 4);
	printf("�������������������������� ");

	x += 2;
	y++;

	switch (ch)
	{
	case 'B':
		Gotoxy(x, y);
		printf("   o__o ");
		Gotoxy(x, y + 1);
		printf(" ((e��e)) ");
		Gotoxy(x, y + 2);
		printf("  o(��)o ");
		break;
	case 'D':
		Gotoxy(x, y);
		printf("   ____ ");
		Gotoxy(x, y + 1);
		printf(" ((o`vo)O ");
		Gotoxy(x, y + 2);
		printf("  o(--)o ");
		break;
	case 'Z':
		Gotoxy(x, y);
		printf("  ��__�� ");
		Gotoxy(x, y + 1);
		printf(" ((Q��Q)) ");
		Gotoxy(x, y + 2);
		printf("  o(��)o ");
		break;
	case 'M':
		Gotoxy(x, y);
		printf("  _o��o_ ");
		Gotoxy(x, y + 1);
		printf(" ((d,`o)) ");
		Gotoxy(x, y + 2);
		printf("  o('')o ");
		break;
	case 'U':
		Gotoxy(x, y);
		printf("  o_��_o ");
		Gotoxy(x, y + 1);
		printf(" ((o��o)) ");
		Gotoxy(x, y + 2);
		printf("  o(\"\")o ");
		break;
	case 'R':
		Gotoxy(x, y);
		printf("   _��_  ");
		Gotoxy(x, y + 1);
		printf(" ((G, G)) ");
		Gotoxy(x, y + 2);
		printf("  o(��)o ");
		break;
	default:
		break;
	}

}

void randitem1(int x, int y) {
	srand(time(NULL));

	int item;

	for (int i = 0; i < 1; i++)
		item = rand() % 25;

	map[x][y] = -30;
	Sleep(20);

	//�ٴ� 1
	//��ǳ�� �� 2
	//��ǳ�� ���� 2
	if (map[x][y] != 20 && (map[x][y] < 11 || map[x][y]>18))
		switch (item)
		{
		case 0:
			map[x][y] = 101;
			break;
		case 1:
		case 2:
		case 3:
			map[x][y] = 103;
			break;
		case 4:
		case 5:
		case 6:
			map[x][y] = 102;
			break;
		default:
			map[x][y] = 1;
			break;
		}
	else
		map[x][y] = 1;
}
void randitem2(int x, int y) {
	srand(time(NULL));

	int item;

	for (int i = 0; i < 2; i++)
		item = rand() % 25;
	//�ٴ� 1
	//��ǳ�� �� 2
	//��ǳ�� ���� 2


	map[x][y] = -30;
	Sleep(20);

	if (map[x][y] != -20 && (map[x][y] < 11 || map[x][y]>18))
		switch (item)
		{
		case 0:
			map[x][y] = 101;
			break;
		case 1:
		case 2:
		case 3:
			map[x][y] = 103;
			break;
		case 4:
		case 5:
		case 6:
			map[x][y] = 102;
			break;
		default:
			map[x][y] = 1;
			break;
		}
	else
		map[x][y] = 1;

}
void randitem3(int x, int y) {
	srand(time(NULL));


	int item;

	for (int i = 0; i < 3; i++)
		item = rand() % 25;
	//�ٴ� 1
	//��ǳ�� �� 2
	//��ǳ�� ���� 2


	map[x][y] = -30;
	Sleep(20);

	if (map[x][y] != -20 && (map[x][y] < 11 || map[x][y]>18))
		switch (item)
		{
		case 0:
			map[x][y] = 101;
			break;
		case 1:
		case 2:
		case 3:
			map[x][y] = 103;
			break;
		case 4:
		case 5:
		case 6:
			map[x][y] = 102;
			break;
		default:
			map[x][y] = 1;
			break;
		}
	else
		map[x][y] = 1;
}
void randitem4(int x, int y) {
	srand(time(NULL));

	int item;

	for (int i = 0; i < 1; i++)
		item = rand() % 25;

	//�ٴ� 1
	//��ǳ�� �� 2
	//��ǳ�� ���� 2

	map[x][y] = -30;
	Sleep(20);

	if (map[x][y] != -20 && (map[x][y] < 11 || map[x][y]>18))
		switch (item)
		{
		case 0:
			map[x][y] = 101;
			break;
		case 1:
		case 2:
		case 3:
			map[x][y] = 103;
			break;
		case 4:
		case 5:
		case 6:
			map[x][y] = 102;
			break;
		default:
			map[x][y] = 1;
			break;
		}
	else
		map[x][y] = 1;
}
//���� ������ ���

void readygo() {
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Gotoxy(22, 9);
	printf("������������������ ");
	Gotoxy(22, 10);
	printf("��       �� ");
	Gotoxy(22, 11);
	printf("��  Ready�� ");
	Gotoxy(22, 12);
	printf("��       �� ");
	Gotoxy(22, 13);
	printf("������������������ ");
	Sleep(500);
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Sleep(500);
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Sleep(500);
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Sleep(500);
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Sleep(500);
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Gotoxy(22, 11);
	printf("��   Go! �� ");
	Sleep(500);
	Gotoxy(12, 2);
	printf("�� 1P");
	Gotoxy(36, 20);
	printf(" 2P ��");
	Sleep(500);

}

DWORD WINAPI player(void* h) {



	if (mapit == 1) {

		PlaySound(TEXT("bibi.wav"), NULL, SND_ASYNC);
	}
	else if (mapit == 2) {
		PlaySound(TEXT("Cake.wav"), NULL, SND_ASYNC);
	}
	else if (mapit == 3) {
		PlaySound(TEXT("Aqua.wav"), NULL, SND_ASYNC);
	}

	int up = 11, down = 12, left = 13, right = 14; //1p �Է�
	int up2 = 15, down2 = 16, left2 = 17, right2 = 18; //2p �Է�
	int direction; //�÷��̾��� ������ ���� �÷��̾� ��� ��ȭ�� �ֱ����� ���� ����
	int Xchange = 0, Ychange = 0; //�迭�Ǥ� x��ǥ y��ǥ ��ȭ�� �ַ���

	int change, color;

	int x, y, stop, len, br, item; //�Է°��� ���� ����ü ������ 1p 2p �ַ��� �������
	int lenmax, brmax;

	char input; //�Է¹ޱ�

	while (pl1.gameout == 0 && pl2.gameout == 0) {

		input = _getch(); //�Է��� �޾�

		if (input == 'w' || input == 's' || input == 'a' || input == 'd')
		{
			x = pl1.x;
			y = pl1.y;
			stop = pl1.stop;
			len = pl1.len;
			br = pl1.br;
			item = pl1.item;
			color = pl1.color;
			Xchange = 0, Ychange = 0;
			lenmax = pl1.lenmax, brmax = pl1.brmax;


		}
		else if (input == 72 || input == 80 || input == 75 || input == 77)
		{
			x = pl2.x;
			y = pl2.y;
			stop = pl2.stop;
			len = pl2.len;
			br = pl2.br;
			item = pl2.item;
			color = pl2.color;
			Xchange = 0, Ychange = 0;
			lenmax = pl2.lenmax, brmax = pl2.brmax;
		}

		// ������ ������ 1p�� ������ 2p�� ������ �־�


		if ((input == 'w' || input == 's' || input == 'a' || input == 'd' || input == 72 || input == 80 || input == 75 || input == 77) && map[x][y] != 20)
		{
			//���� ������ �÷��̾ �����̴� Ű�̰�, �÷��̾ ��ǳ���� ���� ������ ��찡 �ƴ϶��~


			if (input == 'w' || input == 72)
				Xchange = -1;
			else if (input == 's' || input == 80)
				Xchange = 1;
			else if (input == 'a' || input == 75)
				Ychange = -1;
			else if (input == 'd' || input == 77)
				Ychange = 1;

			//�迭 ���� ��ȭ��Ű�� ���� �����۾�

			if (input == 'w')
				direction = up;
			else if (input == 's')
				direction = down;
			else if (input == 'a')
				direction = left;
			else if (input == 'd')
				direction = right;
			else if (input == 72)
				direction = up2;
			else if (input == 80)
				direction = down2;
			else if (input == 75)
				direction = left2;
			else if (input == 77)
				direction = right2;

			//��� ����� �ؾ��ϴϱ� ������ ���ڰ��� �ְ��־�


			if (map[x + Xchange][y + Ychange] == -10) {

				//���� �÷��̾ �������� �ϴ� ������ ���� ��ǳ���̶��?

				map[x + Xchange][y + Ychange] = 20;
				map[x][y] = 1;

				//�÷��̾ �̵���Ű�� �÷��̾��� ���¸� ��ǳ���� ���� ���·� �����

				stop++; //�����¿� ����ְ�,


				if (input == 'w' || input == 's' || input == 'a' || input == 'd')
					CreateThread(NULL, 0, wait1, NULL, 0, NULL);
				else if (input == 72 || input == 80 || input == 75 || input == 77)
					CreateThread(NULL, 0, wait2, NULL, 0, NULL);

				//���� p1�� �Է��̶�� p1�� �����¿� ����ְ� p2�� �Է��̸� p2�� �����¿� ����־�.

				x += Xchange;
				y += Ychange;

				//�� �������� xy���� ��ȭ���� ������!
			}
			else if (map[x + Xchange][y + Ychange] == 1 || map[x + Xchange][y + Ychange] > 100 || map[x + Xchange][y + Ychange] == 20) {

				//�����̷��� �ϴ� ���� ���̰ų�, �������� �ִ� ���̶��

				if (map[x + Xchange][y + Ychange] > 100)
				{
					//���� �������̸�

					// >>>>>������ �̻ڴ� �Ϳ��� ��������� ����? <<�����ϰ� ����<<<<<

					if (map[x + Xchange][y + Ychange] == 103 && len <= lenmax) //���� �߰�
						len++;
					else if (map[x + Xchange][y + Ychange] == 102 && br <= brmax) //���� �߰�
						br++;
					else if (map[x + Xchange][y + Ychange] == 101 && item != 2) //�ٴ� �߰�
						item++;
				}

				map[x + Xchange][y + Ychange] = direction; //�Էµ� �÷��̾��� ������ �ٲ�.

				if (map[x][y] != 10 || map[x + Xchange][y + Ychange] == 20) //�������� ��ǳ���� �ƴ϶��
					map[x][y] = 1; //�������� ��� �ٲ���



				x += Xchange;
				y += Ychange;

				//�� �������� xy���� ��ȭ���� ������!
			}
		}
		else if (input == 'q' && pl1.stop == 0)
		{

			//��ǳ�� ��ư�� ���Ȱ�, �����°� �ƴ϶��

			if (pl1.br != 0) {

				//��ǳ���� ���� 0�� �ƴ϶��

				HANDLE thread2 = CreateThread(NULL, 0, wtbr1, NULL, 0, NULL); //��ǳ�� �����带 �ҷ�����!

			}
		}
		else if (input == 'e' && pl1.stop != 0)
		{

			//�ٴ� ��ư�� ���Ȱ�, �����°� �ƴ϶��

			if (pl1.item != 0) {

				//�ٴ��� ���� 0�� �ƴ϶��

				pl1.item--; //�����ϰ�
				pl1.stop = 0; //�����¿��� Ǯ������ �����!

			}
		}
		//�Ʒ��� �Ȱ���
		else if (input == '0' && pl2.stop == 0)
		{
			if (pl2.br != 0) {

				HANDLE thread5 = CreateThread(NULL, 0, wtbr2, NULL, 0, NULL);

			}
		}
		else if (input == '/' && pl2.stop != 0)
		{
			if (pl2.item != 0) {

				pl2.item--;
				pl2.stop = 0;

			}
		}




		if (input == 72 || input == 80 || input == 75 || input == 77)
		{
			pl2.x = x;
			pl2.y = y;
			pl2.stop = stop;
			pl2.br = br;
			pl2.item = item;
			pl2.len = len;
			Xchange = 0, Ychange = 0;
		}

		if (input == 'w' || input == 's' || input == 'a' || input == 'd')
		{
			pl1.x = x;
			pl1.y = y;
			pl1.stop = stop;
			pl1.br = br;
			pl1.item = item;
			pl1.len = len;
			Xchange = 0, Ychange = 0;

		}

		//���������� ��ȭ���� ����ü�� �����ϸ� �ѹ��� �Է¹ޱⰡ ����!

	}
}

//�� �÷��̾��� Ȱ���� �Է¹޴� ������ �Լ�

DWORD WINAPI wait1(void* a) {

	int count = 0; //�ð��� ���ž�

	int stop = pl1.stop;
	int x = pl1.x;
	int y = pl1.y;

	//�� ������ 1p�� ������ �Ҵ�����

	for (int i = 0; i < 100; i++)
	{

		stop = pl1.stop; //��ӿ��� ������ �ҷ����°ž�.

		if (stop == 0) { //���� �������� �Ἥ �����¿��� Ǯ�����ٸ�??
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 11; //��ǳ���� ����!!
			break;

		}
		else if (x == pl2.x && y == pl2.y) //���� �������ε� ��밡 ���� �Ծ�(..)�ٸ�
		{
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 15;
			count = 99; //ī��Ʈ�� ��� max�� �����
			break;
		}

		count = i; //ī��Ʈ 1�� �߰�
		Sleep(35);

	}

	if (count == 99) //���� ī��Ʈ�� max���
		pl1.gameout = 1; //���Ӿƿ����¸� ��!
}
DWORD WINAPI wtbr1(void* a) {

	//��ǳ�� ������

	int brake1 = 1, brake2 = 1, brake3 = 1, brake4 = 1; //��ǳ���� �����̳� ���� �ε帮�� �ű⼭ ���ٱⰡ �����ϱ� ������ ������ ���

	pl1.br--; //��ǳ�� �� �ϳ� �����ϱ�

	int x = pl1.x;
	int y = pl1.y;
	int len = pl1.len;

	map[x][y] = 10;

	for (int i = 0; i < 100; i++) //�ºٰų� ������� ������ ��ǳ�� �����ؼ� ��Ʈ����
	{
		if (map[x][y] == -10)
			break;
		else
			Sleep(10);
	}

	for (int i = 0; i <= len; i++) //��ǳ�� ���ڷ� ��Ʈ����&&���� ���ٱ� ���θ�����&&�� �μ���
	{

		//��

		if (brake1 == 1 && map[x - i][y] != 20 && (map[x - i][y] == 1 || map[x - i][y] == 10 || (map[x - i][y] >= 11 && map[x - i][y] <= 18) || map[x - i][y] > 100))
			map[x - i][y] = -10; //��� ������

		//� ���³�. �׳� �� �Ϲ�. ���� ������ �ʾҰ�, 

		if (map[x - i][y] == -1)
			brake1 = 0;
		else if (map[x - i][y] == 0 && brake1 == 1)
		{
			randitem1(x - i, y);
			brake1 = 0;
		}


		//��
		if (brake2 != 0 && map[x + i][y] != 20 && (map[x + i][y] == 1 || map[x + i][y] == 10 || (map[x + i][y] >= 11 && map[x + i][y] <= 18) || map[x + i][y] > 100))
			map[x + i][y] = -10;

		if (map[x + i][y] == -1)
			brake2 = 0;
		else if (map[x + i][y] == 0 && brake2 == 1)
		{
			randitem2(x + i, y);
			brake2 = 0;
		}


		//��
		if (brake3 != 0 && map[x][y - i] != 20 && (map[x][y - i] == 1 || map[x][y - i] == 10 || (map[x][y - i] >= 11 && map[x][y - i] <= 18) || map[x][y - i] > 100))
			map[x][y - i] = -10;

		if (map[x][y - i] == -1)
			brake3 = 0;
		else if (map[x][y - i] == 0 && brake3 == 1)
		{
			randitem3(x, y - i);
			brake3 = 0;
		}


		//��
		if (brake4 != 0 && map[x][y + i] != 20 && (map[x][y + i] == 1 || map[x][y + i] == 10 || (map[x][y + i] >= 11 && map[x][y + i] <= 18) || map[x][y + i] > 100))
			map[x][y + i] = -10;

		if (map[x][y + i] == -1)
			brake4 = 0;
		else if (map[x][y + i] == 0 && brake4 == 1)
		{
			randitem4(x, y + i);
			brake4 = 0;
		}



		if (map[pl1.x][pl1.y] == -10) //�÷��̾ �ִ� �ڸ��� ��ǳ���� ������..
		{
			pl1.stop++; //1p������ �߰�
			map[pl1.x][pl1.y] = 20; //��ǳ���յ�..
			HANDLE thread3 = CreateThread(NULL, 0, wait1, NULL, 0, NULL); //1p�� ������ ������ 
		}

		if (map[pl2.x][pl2.y] == -10) //�÷��̾ �ִ� �ڸ��� ��ǳ���� ������..
		{
			pl2.stop++; //2p������ �߰�
			map[pl2.x][pl2.y] = 20; //��ǳ���յ�..
			HANDLE thread5 = CreateThread(NULL, 0, wait2, NULL, 0, NULL); //2p�� ������ ������
		}

	}

	Sleep(400); //��ǳ�� ���� ���ð�

	pl1.br++; //��ǳ���� �� ����

	for (int i = 0; i < 17; i++) //��Ʈ�� ���� ���ֱ�
		for (int j = 0; j < 17; j++)
			if (map[i][j] == -10)
				map[i][j] = 1;

}

//�÷��̾� 1�� ��ǳ���� ���ð��� ���ִ� ������ �Լ�

DWORD WINAPI wait2(void* a) {

	int count = 0;

	int stop = pl2.stop;
	int x = pl2.x;
	int y = pl2.y;


	for (int i = 0; i < 100; i++)
	{
		stop = pl2.stop;

		if (stop == 0) {
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 15;
			break;
		}
		else if (x == pl1.x && y == pl1.y)
		{
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 11;
			count = 99;
			break;
		}

		count = i;
		Sleep(35);

	}

	if (count == 99)
		pl2.gameout = 1;
}
DWORD WINAPI wtbr2(void* a) {

	//��ǳ�� ������

	int brake1 = 1, brake2 = 1, brake3 = 1, brake4 = 1;

	pl2.br--; //��ǳ�� �� �ϳ� �����ϱ�

	int x = pl2.x;
	int y = pl2.y;
	int len = pl2.len;

	map[x][y] = 10;

	for (int i = 0; i < 100; i++) //�ºٰų� ������� ������ ��ǳ�� �����ؼ� ��Ʈ����
	{
		if (map[x][y] == -10)
			break;
		else
			Sleep(10);
	}

	for (int i = 0; i <= len; i++) //��ǳ�� ���ڷ� ��Ʈ����&&���� ���ٱ� ���θ�����&&�� �μ���
	{

		//��

		if (brake2 != 0 && map[x - i][y] != 20 && (map[x - i][y] == 1 || map[x - i][y] == 10 || (map[x - i][y] >= 11 && map[x - i][y] <= 18) || map[x - i][y] > 100))
			map[x - i][y] = -10;

		if (map[x - i][y] == -1)
			brake2 = 0;
		else if (map[x - i][y] == 0 && brake2 == 1)
		{
			randitem2(x - 1, y);
			brake2 = 0;
		}


		//��
		if (brake1 != 0 && map[x + i][y] != 20 && (map[x + i][y] == 1 || map[x + i][y] == 10 || (map[x + i][y] >= 11 && map[x + i][y] <= 18) || map[x + i][y] > 100))
			map[x + i][y] = -10;

		if (map[x + i][y] == -1)
			brake1 = 0;
		else if (map[x + i][y] == 0 && brake1 == 1)
		{
			randitem3(x + 1, y);
			brake1 = 0;
		}


		//��
		if (brake4 != 0 && map[x][y - i] != 20 && (map[x][y - i] == 1 || map[x][y - i] == 10 || (map[x][y - i] >= 11 && map[x][y - i] <= 18) || map[x][y - i] > 100))
			map[x][y - i] = -10;

		if (map[x][y - i] == -1)
			brake4 = 0;
		else if (map[x][y - i] == 0 && brake4 == 1)
		{
			randitem1(x, y - 1);
			brake4 = 0;
		}


		//��
		if (brake3 != 0 && map[x][y + i] != 20 && (map[x][y + i] == 1 || map[x][y + i] == 10 || (map[x][y + i] >= 11 && map[x][y + i] <= 18) || map[x][y + i] > 100))
			map[x][y + i] = -10;

		if (map[x][y + i] == -1)
			brake3 = 0;
		else if (map[x][y + i] == 0 && brake3 == 1) {
			randitem4(x, y + 1);
			brake3 = 0;
		}



		if (map[pl2.x][pl2.y] == -10) //�÷��̾ �ִ� �ڸ��� ��ǳ���� ������..
		{
			pl2.stop++;
			map[pl2.x][pl2.y] = 20;
			HANDLE thread5 = CreateThread(NULL, 0, wait2, NULL, 0, NULL);
		}

		if (map[pl1.x][pl1.y] == -10) //�÷��̾ �ִ� �ڸ��� ��ǳ���� ������..
		{
			pl1.stop++;
			map[pl1.x][pl1.y] = 20;
			HANDLE thread5 = CreateThread(NULL, 0, wait1, NULL, 0, NULL);
		}

		Sleep(10);
	}

	Sleep(400); //��ǳ�� ���� ���ð�

	pl2.br++; //��ǳ���� �� ����

	for (int i = 0; i < 17; i++) //��Ʈ�� ���� ���ֱ�
		for (int j = 0; j < 17; j++)
			if (map[i][j] == -10)
				map[i][j] = 1;

}

//�÷��̾� 1�� ��ǳ���� ���ð��� ���ִ� ������ �Լ�