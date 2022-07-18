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
	printf("→");
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
					printf("→");
				}
				break;
			case DOWN:
				if (selectMenu < 5) {
					Gotoxy(x, y);
					printf("  ");
					y = y + 3;
					selectMenu++;
					Gotoxy(x, y);
					printf("→");
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

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //색상을 변경을 해줌 1~15 
	printf("\n");
	Gotoxy(23, 3); printf("★"); Sleep(120);
	Gotoxy(25, 3); printf("크"); Sleep(120);
	Gotoxy(27, 3); printf("레"); Sleep(120);
	Gotoxy(29, 3); printf("이"); Sleep(120);
	Gotoxy(31, 3); printf("지"); Sleep(120);
	Gotoxy(33, 3); printf("아"); Sleep(120);
	Gotoxy(35, 3); printf("케"); Sleep(120);
	Gotoxy(37, 3); printf("이"); Sleep(120);
	Gotoxy(39, 3); printf("드"); Sleep(120);
	Gotoxy(41, 3); printf("★"); Sleep(120);

	Gotoxy(25, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   게임시작");
	Gotoxy(25, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   게임방법");
	Gotoxy(25, 14);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   아이템설명");
	Gotoxy(25, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   캐릭터설명");
	Gotoxy(25, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   화면설정");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);

	Gotoxy(58, 5);
	printf("이동 : ↑, ↓");
	Gotoxy(58, 7);
	printf("선택 : ENTER");

	Gotoxy(57, 10);
	printf("게임종료 : ESC");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	PlaySound(TEXT("Login.wav.wav"), NULL, SND_ASYNC);



}

//void HideCursor() //커서를 숨김
//{
//	CONSOLE_CURSOR_INFO cursor;
//	cursor.bVisible = FALSE;
//	cursor.dwSize = sizeof(cursor);
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorInfo(handle, &cursor);
//}

void game() {




	Gotoxy(35, 2); printf(" ★게임 방법★");

	Gotoxy(10, 5); printf("서로는 물풍선을 가지고 각각의 물풍선을 터트릴 수 있습니다. ");

	Gotoxy(10, 6); printf("물보라에 맞은 뒤 일정시간이 지나면 물풍선이 터지고 게임이 종료됩니다.");

	Gotoxy(10, 7); printf("아이템을 적절하게 사용해 승리를 이끌어 내세요!");

	Gotoxy(10, 10); printf("player 1 : w a s d로 캐릭터를 조종할 수 있습니다.");

	Gotoxy(10, 11); printf("\'Q\'를 눌러 물풍선을 설치할 수 있습니다.");

	Gotoxy(10, 12); printf("\'E\'를 눌러 바늘을 사용할 수 있습니다.");

	Gotoxy(10, 15); printf("palyer 2 : 화살표로 캐릭터를 조종할 수 있습니다.");

	Gotoxy(10, 16); printf("우측 숫자키 \'0\'을 눌러 물풍선을 설치할 수 있습니다.");

	Gotoxy(10, 17); printf("좌측 \'/\'을 눌러 바늘을 사용할 수 있습니다,");




	Gotoxy(50, 22); printf("ESC를 눌러 메인으로 돌아갑니다.");

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

	Gotoxy(35, 3); printf("★아이템 설명★");

	Gotoxy(9, 10); printf("바늘 : 물풍선에 갇힌 상황에서 하나를 소모해 빠져나올 수 있습니다. (§)");

	Gotoxy(9, 13); printf("물풍선 : 설치 가능한 물풍선의 개수가 증가합니다. (↑)");

	Gotoxy(9, 16); printf("영약 : 물풍선의 길이가 증가합니다. (↔)");

	printf("\n\n\n\n\n");

	Gotoxy(50, 22); printf("ESC를 눌러 메인으로 돌아갑니다.");

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
	printf("↖");
	Gotoxy(85, 0);
	printf("↗");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
	Gotoxy(4, 11);
	printf("          원활한 게임 환경을 위해 화살표가 모서리에 맞닿게 설정해주세요.");
	Gotoxy(0, 23);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
	printf("↙");
	Gotoxy(85, 23);
	printf("↘");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	Gotoxy(50, 22); printf("ESC를 눌러 메인으로 돌아갑니다.");

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
	printf("입력하세요 >> ");
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
	printf("다음 : SpaceBar");

	Gotoxy(x, y+2);
	printf(" 선택 : Enter");
	colset(LIGHTWHITE);

	x -= 8;
	y += 2;


	Gotoxy(x, y + 4);
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓");
	Gotoxy(x, y + 5);
	printf("┃                           ┃");
	Gotoxy(x, y + 6);
	printf("┃                           ┃");
	Gotoxy(x, y + 7);
	printf("┃                           ┃");
	Gotoxy(x, y + 8);
	printf("┃                           ┃");
	Gotoxy(x, y + 9);
	printf("┃                           ┃");
	Gotoxy(x, y + 10);
	printf("┃                           ┃");
	Gotoxy(x, y + 11);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛");
	

	while (1) {

		if (choice == 1) {
			maprint(map1, 17, 17, 10, 3);
			Gotoxy(x+5, y + 6);
			printf("★☆☆☆☆");
			Gotoxy(x + 5, y + 8);
			printf("아케이드    ");
				
		}else if (choice == 2) {
			maprint(map2, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("★★★☆☆");
			Gotoxy(x + 5, y + 8);
			printf("복작복작    ");
		}
		else if (choice == 3) {
			maprint(map3, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("★★★★☆");
			Gotoxy(x + 5, y + 8);
			printf("크레이지!   ");
		}
		else if (choice == 4) {
			maprint(map4, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("☆☆☆☆☆");
			Gotoxy(x + 5, y + 8);
			printf("랜덤           ");
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

void charasdfghjkl/*캐릭설명함수 ㅎㅎ*/() {


	Gotoxy(50, 22); printf("ESC를 눌러 메인으로 돌아갑니다.");

	HideCursor(1);

	int x = 20, y = 6;
	int chactclor;

	Gotoxy(x, 5); printf("┌━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┐");
	Gotoxy(x, 14); printf("┠━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫");
	Gotoxy(x, 20); printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┘");

	for (int i = 6; i <= 19; i++)
	{
		Gotoxy(x, i);
		printf("│");
	}
	for (int i = 6; i <= 19; i++) {
		Gotoxy(x + 44, i);
		printf("│");
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
			printf("  ((eっe)) ");
			Gotoxy(x, y++);
			printf("   o(∞)o ");
			Gotoxy(x, y++);
			printf("    ºº ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf(" 배찌 BAZZI    ");

			Gotoxy(42, y - 8);
			printf("#초보전용 #누네띠네    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("개수   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("물줄기 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
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
			printf("    ºº ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  다오 DAO    ");

			Gotoxy(42, y - 8);
			printf("#주머니_큼 #전략캐    ");

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);


			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("개수   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 10)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("물줄기 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}
			break;
		case 3:

			chactclor = 14;

			Gotoxy(x, y++);
			printf("   А__А ");
			Gotoxy(x, y++);
			printf("  ((Q˛Q)) ");
			Gotoxy(x, y++);
			printf("   o(☆)o ");
			Gotoxy(x, y++);
			printf("    ºº ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("디지니 DIZNI   ");

			Gotoxy(42, y - 8);
			printf("#별★ #귀여움 #예쁨    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("개수   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("물줄기 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 9)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			break;
		case 4:

			chactclor = 8;

			Gotoxy(x, y++);
			printf("   _oпo_ ");
			Gotoxy(x, y++);
			printf("  ((d,`o)) ");
			Gotoxy(x, y++);
			printf("   o('')o ");
			Gotoxy(x, y++);
			printf("    ºº");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  모스 MOS   ");

			Gotoxy(42, y - 8);
			printf("#물풍선_나약 #돌    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("개수   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 8)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("물줄기 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 5)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			break;
		case 5:

			chactclor = 10;

			Gotoxy(x, y++);
			printf("   o_ㅁ_o ");
			Gotoxy(x, y++);
			printf("  ((oФo)) ");
			Gotoxy(x, y++);
			printf("   o(\"\")o ");
			Gotoxy(x, y++);
			printf("    ºº ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  우니 UNI    ");

			Gotoxy(42, y - 8);
			printf("#주인장_최애 #응애    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("개수   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("물줄기 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			break;
		case 6:

			chactclor = 13;

			Gotoxy(x, y++);
			printf("    _ㅅ_  ");
			Gotoxy(x, y++);
			printf("  ((G, G)) ");
			Gotoxy(x, y++);
			printf("   o(∞)o ");
			Gotoxy(x, y++);
			printf("    ºº ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("마리드  MARID");

			Gotoxy(42, y - 8);
			printf("#복숭아 #셀카_중독     ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("개수   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 9)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("물줄기 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("● ");
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
//플레이어 정보

struct XYLBSGIn pl1 = { 1,1,1,1,10,10,0,0,0,"Player 1",12,1 };
struct XYLBSGIn pl2 = { 15,15,1,1,10,10,0,0,0,"Player 2",12,1 };

struct XYLBSGIn backupl1 = { 1,1,1,1,10,10,0,0,0,"Player 1",12,1 };
struct XYLBSGIn backupl2 = { 15,15,1,1,10,10,0,0,0,"Player 2",12,1 };

void main() {

	HideCursor(1);
	//게임의 전체적인 흐름

	//Ready();

	if (asdfghjkl == 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11을 눌러 전체화면으로 설정 해 주세요.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11을 눌러 전체화면으로 설정 해 주세요.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11을 눌러 전체화면으로 설정 해 주세요.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11을 눌러 전체화면으로 설정 해 주세요.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11을 눌러 전체화면으로 설정 해 주세요.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11을 눌러 전체화면으로 설정 해 주세요.");
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
		printf("§ x %d", pl1.item);
		Gotoxy(69, 16);
		printf("§ x %d", pl2.item);
	}

	Sleep(500);

	if (pl1.gameout == 1)
		result(2);
	else if (pl2.gameout == 1)
		result(1);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	Gotoxy(52, 22);
	printf("아무 키나 눌러 계속합니다.");

	system("pause>null");
	system("cls");

	for (int i = 0; i <= 1; i++) {
		main();
	}




	///메인화면으로 이동하는 키


	//%s써서 닉네임 출력해도...될듯? 이건 구현 예상!
}

void result(int winner) {

	char name[10];

	if (winner == 1) {
		strcpy(name, pl1.name);
	}else if (winner == 2) {
		strcpy(name, pl2.name);
	}

	Gotoxy(16, 8);
	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓"); Sleep(200);
	Gotoxy(16, 9);  printf("┃                                                    ┃"); Sleep(100);
	Gotoxy(16, 10);  printf("┃                                                    ┃"); Sleep(100);
	Gotoxy(16, 11);  printf("┃                                                    ┃"); Sleep(100);
	Gotoxy(16, 12);  printf("┃                                                    ┃"); Sleep(100);
	Gotoxy(16, 13);  printf("┃                                                    ┃"); Sleep(100);
	Gotoxy(16, 14);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"); Sleep(500);
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
	
	

	Gotoxy(x, 3); printf("┌━━━━━━━━━━━━━━━━━━━━━┯━━━━━━━━━━━━━━━━━━━━━┐");
	Gotoxy(x, 4); printf("        %8s              %8s", pl1.name, pl2.name);
	Gotoxy(x, 5); printf("┠━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━┫");
	Gotoxy(x, 15); printf("┠━━━━━━━━━━━━━━━━━━━━━╋━━━━━━━━━━━━━━━━━━━━━┫");
	Gotoxy(x, 19); printf("┗─────────────────────┷─────────────────────┘");

	for (int i = 4; i <= 18; i++)
	{
		Gotoxy(x + 22, i);
		printf("│");
	}
	for (int i = 4; i <= 18; i++)
	{
		Gotoxy(x, i);
		printf("│");
	}
	for (int i = 4; i <= 18; i++) {
		Gotoxy(x + 44, i);
		printf("│");
	}

	while (1) {

		x = 60, y = 8;
		colset(LIGHTYELLOW);
		Gotoxy(x, y);
		printf("선택 : A,D / ←,→");

		Gotoxy(x, y + 2);
		printf("준비 : W,S / ↑,↓");

		Gotoxy(x - 2, y + 5);
		printf("만약 키 작동이 되지 않으면");
		colset(pl1.color);
		Gotoxy(x - 2, y + 6);
		printf("Caps Lock");
		colset(LIGHTYELLOW);
		printf("이나 ");
		colset(pl2.color);
		printf("Num Lock");
		colset(LIGHTYELLOW);
		printf("을");
		Gotoxy(x - 2, y + 7);
		printf("확인해 주세요.");
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
		printf("  ((eっe)) ");
		Gotoxy(x, y++);
		printf("   o(∞)o ");
		Gotoxy(x, y++);
		printf("    ºº ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf(" 배찌 BAZZI    ");
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
		printf("    ºº ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  다오 DAO    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 3:
		Gotoxy(x, y++);
		printf("   А__А ");
		Gotoxy(x, y++);
		printf("  ((Q˛Q)) ");
		Gotoxy(x, y++);
		printf("   o(☆)o ");
		Gotoxy(x, y++);
		printf("    ºº ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("디지니 DIZNI   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 4:
		Gotoxy(x, y++);
		printf("   _oпo_ ");
		Gotoxy(x, y++);
		printf("  ((d,`o)) ");
		Gotoxy(x, y++);
		printf("   o('')o ");
		Gotoxy(x, y++);
		printf("    ºº");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  모스 MOS   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 5:
		Gotoxy(x, y++);
		printf("   o_ㅁ_o ");
		Gotoxy(x, y++);
		printf("  ((oФo)) ");
		Gotoxy(x, y++);
		printf("   o(\"\")o ");
		Gotoxy(x, y++);
		printf("    ºº ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  우니 UNI    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 6:
		Gotoxy(x, y++);
		printf("    _ㅅ_  ");
		Gotoxy(x, y++);
		printf("  ((G, G)) ");
		Gotoxy(x, y++);
		printf("   o(∞)o ");
		Gotoxy(x, y++);
		printf("    ºº ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("마리드  MARID");
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
	printf("┌");
	for (int i = -1; i < jsize * 2; i++)
	{
		printf("─");

	}
	printf("┓");

	for (int i = 0; i < isize; i++)
	{
		Gotoxy(arrangex - 2, arrangey + i);
		printf("┃");

	}
	for (int i = 0; i < isize; i++)
	{
		Gotoxy(arrangex + jsize * 2, arrangey + i);
		printf("┃");

	}

	Gotoxy(arrangex - 2, arrangey + isize);
	printf("└");
	for (int i = 0; i <= jsize * 2; i++)
	{
		printf("─");

	}
	printf("┘");

	for (int i = 0; i < isize; i++) {
		Gotoxy(arrangex, arrangey + i);
		for (int j = 0; j < jsize; j++) {
			if (*((ptr + i * jsize) + j) == -1)
				printf("■");
			else if (*((ptr + i * jsize) + j) == 0)
				printf("□");
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
				printf("※");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == -30)
				printf("◇");
			else if (*((ptr + i * jsize) + j) == -100)
				printf("  ");
			else if (*((ptr + i * jsize) + j) == 11)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("▲");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("▼");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 13)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("◀");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 14)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("▶");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 15)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("△");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 16)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("▽");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 17)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("◁");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 18)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("▷");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 20) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTBLUE);
				printf("◎");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 101)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("§");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 102)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("↑");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 103)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("↔");
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

	printf("┏━━━━━━━━━━━━━━━━━━━━━━━━━━━┓ ");
	Gotoxy(x, y + 1);
	printf("┃                           ┃ ");
	Gotoxy(x, y + 2);
	printf("┃                           ┃ ");
	Gotoxy(x, y + 3);
	printf("┃                           ┃ ");
	Gotoxy(x, y + 4);
	printf("┃                           ┃ ");
	Gotoxy(x, y + 5);
	printf("┃                           ┃ ");
	Gotoxy(x, y + 6);
	printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛ ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
	Gotoxy(x + 17, y + 3);
	printf("──────────");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	x += 2;
	y++;

	Gotoxy(x, y);
	printf("┏━━━━━━━━━━━┓ ");
	Gotoxy(x, y + 1);
	printf("┃           ┃ ");
	Gotoxy(x, y + 2);
	printf("┃           ┃ ");
	Gotoxy(x, y + 3);
	printf("┃           ┃ ");
	Gotoxy(x, y + 4);
	printf("┗━━━━━━━━━━━┛ ");

	x += 2;
	y++;

	switch (ch)
	{
	case 'B':
		Gotoxy(x, y);
		printf("   o__o ");
		Gotoxy(x, y + 1);
		printf(" ((eっe)) ");
		Gotoxy(x, y + 2);
		printf("  o(∞)o ");
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
		printf("  А__А ");
		Gotoxy(x, y + 1);
		printf(" ((Q˛Q)) ");
		Gotoxy(x, y + 2);
		printf("  o(☆)o ");
		break;
	case 'M':
		Gotoxy(x, y);
		printf("  _oпo_ ");
		Gotoxy(x, y + 1);
		printf(" ((d,`o)) ");
		Gotoxy(x, y + 2);
		printf("  o('')o ");
		break;
	case 'U':
		Gotoxy(x, y);
		printf("  o_ㅁ_o ");
		Gotoxy(x, y + 1);
		printf(" ((oФo)) ");
		Gotoxy(x, y + 2);
		printf("  o(\"\")o ");
		break;
	case 'R':
		Gotoxy(x, y);
		printf("   _ㅅ_  ");
		Gotoxy(x, y + 1);
		printf(" ((G, G)) ");
		Gotoxy(x, y + 2);
		printf("  o(∞)o ");
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

	//바늘 1
	//물풍선 수 2
	//물풍선 길이 2
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
	//바늘 1
	//물풍선 수 2
	//물풍선 길이 2


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
	//바늘 1
	//물풍선 수 2
	//물풍선 길이 2


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

	//바늘 1
	//물풍선 수 2
	//물풍선 길이 2

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
//랜덤 아이템 출력

void readygo() {
	Gotoxy(12, 2);
	printf("▼ 1P");
	Gotoxy(36, 20);
	printf(" 2P ▲");
	Gotoxy(22, 9);
	printf("┏━━━━━━━┓ ");
	Gotoxy(22, 10);
	printf("┃       ┃ ");
	Gotoxy(22, 11);
	printf("┃  Ready┃ ");
	Gotoxy(22, 12);
	printf("┃       ┃ ");
	Gotoxy(22, 13);
	printf("┗━━━━━━━┛ ");
	Sleep(500);
	Gotoxy(12, 2);
	printf("▽ 1P");
	Gotoxy(36, 20);
	printf(" 2P △");
	Sleep(500);
	Gotoxy(12, 2);
	printf("▼ 1P");
	Gotoxy(36, 20);
	printf(" 2P ▲");
	Sleep(500);
	Gotoxy(12, 2);
	printf("▽ 1P");
	Gotoxy(36, 20);
	printf(" 2P △");
	Sleep(500);
	Gotoxy(12, 2);
	printf("▼ 1P");
	Gotoxy(36, 20);
	printf(" 2P ▲");
	Sleep(500);
	Gotoxy(12, 2);
	printf("▽ 1P");
	Gotoxy(36, 20);
	printf(" 2P △");
	Gotoxy(22, 11);
	printf("┃   Go! ┃ ");
	Sleep(500);
	Gotoxy(12, 2);
	printf("▼ 1P");
	Gotoxy(36, 20);
	printf(" 2P ▲");
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

	int up = 11, down = 12, left = 13, right = 14; //1p 입력
	int up2 = 15, down2 = 16, left2 = 17, right2 = 18; //2p 입력
	int direction; //플레이어의 움직임 따라서 플레이어 모양 변화를 주기위해 만든 변수
	int Xchange = 0, Ychange = 0; //배열의ㅣ x좌표 y좌표 변화량 주려구

	int change, color;

	int x, y, stop, len, br, item; //입력값에 따라 구조체 변수를 1p 2p 주려고 만들었어
	int lenmax, brmax;

	char input; //입력받기

	while (pl1.gameout == 0 && pl2.gameout == 0) {

		input = _getch(); //입력을 받아

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

		// 각각의 변수에 1p의 정보나 2p의 정보를 넣어


		if ((input == 'w' || input == 's' || input == 'a' || input == 'd' || input == 72 || input == 80 || input == 75 || input == 77) && map[x][y] != 20)
		{
			//만약 변수가 플레이어를 움직이는 키이고, 플레이어가 물풍선에 맞은 상태인 경우가 아니라면~


			if (input == 'w' || input == 72)
				Xchange = -1;
			else if (input == 's' || input == 80)
				Xchange = 1;
			else if (input == 'a' || input == 75)
				Ychange = -1;
			else if (input == 'd' || input == 77)
				Ychange = 1;

			//배열 값을 변화시키기 위한 사전작업

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

			//모양 출력을 해야하니까 각각의 숫자값을 넣고있어


			if (map[x + Xchange][y + Ychange] == -10) {

				//만약 플레이어가 움직여야 하는 방향이 터진 물풍선이라면?

				map[x + Xchange][y + Ychange] = 20;
				map[x][y] = 1;

				//플레이어를 이동시키고 플레이어의 상태를 물풍선에 맞은 상태로 만들어

				stop++; //대기상태에 집어넣고,


				if (input == 'w' || input == 's' || input == 'a' || input == 'd')
					CreateThread(NULL, 0, wait1, NULL, 0, NULL);
				else if (input == 72 || input == 80 || input == 75 || input == 77)
					CreateThread(NULL, 0, wait2, NULL, 0, NULL);

				//만약 p1의 입력이라면 p1를 대기상태에 집어넣고 p2의 입력이면 p2를 대기상태에 집어넣어.

				x += Xchange;
				y += Ychange;

				//다 끝났으니 xy값에 변화량을 더하자!
			}
			else if (map[x + Xchange][y + Ychange] == 1 || map[x + Xchange][y + Ychange] > 100 || map[x + Xchange][y + Ychange] == 20) {

				//움직이려고 하는 곳이 길이거나, 아이템이 있는 곳이라면

				if (map[x + Xchange][y + Ychange] > 100)
				{
					//만약 아이템이면

					// >>>>>손혜린 이쁘다 귀엽다 사랑스럽다 ㅇㅈ? <<혜리니가 남김<<<<<

					if (map[x + Xchange][y + Ychange] == 103 && len <= lenmax) //길이 추가
						len++;
					else if (map[x + Xchange][y + Ychange] == 102 && br <= brmax) //갯수 추가
						br++;
					else if (map[x + Xchange][y + Ychange] == 101 && item != 2) //바늘 추가
						item++;
				}

				map[x + Xchange][y + Ychange] = direction; //입력된 플레이어의 값으로 바꿔.

				if (map[x][y] != 10 || map[x + Xchange][y + Ychange] == 20) //대기상태의 물풍선이 아니라면
					map[x][y] = 1; //지나가는 길로 바꾸자



				x += Xchange;
				y += Ychange;

				//다 끝났으니 xy값에 변화량을 더하자!
			}
		}
		else if (input == 'q' && pl1.stop == 0)
		{

			//물풍선 버튼이 눌렸고, 대기상태가 아니라면

			if (pl1.br != 0) {

				//물풍선의 수가 0이 아니라면

				HANDLE thread2 = CreateThread(NULL, 0, wtbr1, NULL, 0, NULL); //물풍선 쓰레드를 불러오자!

			}
		}
		else if (input == 'e' && pl1.stop != 0)
		{

			//바늘 버튼이 눌렸고, 대기상태가 아니라면

			if (pl1.item != 0) {

				//바늘의 수가 0이 아니라면

				pl1.item--; //차감하고
				pl1.stop = 0; //대기상태에서 풀려나게 만들어!

			}
		}
		//아래도 똑같아
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

		//마지막으로 변화량을 구조체에 적용하면 한번의 입력받기가 끝나!

	}
}

//두 플레이어의 활동을 입력받는 쓰레드 함수

DWORD WINAPI wait1(void* a) {

	int count = 0; //시간을 셀거야

	int stop = pl1.stop;
	int x = pl1.x;
	int y = pl1.y;

	//각 변수에 1p의 정보를 할당하자

	for (int i = 0; i < 100; i++)
	{

		stop = pl1.stop; //계속에서 정보를 불러오는거야.

		if (stop == 0) { //만약 아이템을 써서 대기상태에서 풀려났다면??
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 11; //물풍선을 해제!!
			break;

		}
		else if (x == pl2.x && y == pl2.y) //만약 대기상태인데 상대가 나를 먹었(..)다면
		{
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 15;
			count = 99; //카운트를 즉시 max로 만들어
			break;
		}

		count = i; //카운트 1씩 추가
		Sleep(35);

	}

	if (count == 99) //만약 카운트가 max라면
		pl1.gameout = 1; //게임아웃상태를 켜!
}
DWORD WINAPI wtbr1(void* a) {

	//물풍선 스레드

	int brake1 = 1, brake2 = 1, brake3 = 1, brake4 = 1; //물풍선은 가벽이나 벽을 두드리면 거기서 물줄기가 끝나니까 변수를 설정해 줬어

	pl1.br--; //물풍선 수 하나 차감하기

	int x = pl1.x;
	int y = pl1.y;
	int len = pl1.len;

	map[x][y] = 10;

	for (int i = 0; i < 100; i++) //맞붙거나 영향력이 가해진 물풍선 연속해서 터트리기
	{
		if (map[x][y] == -10)
			break;
		else
			Sleep(10);
	}

	for (int i = 0; i <= len; i++) //물풍선 십자로 터트리기&&벽에 물줄기 가로막히기&&벽 부수기
	{

		//상

		if (brake1 == 1 && map[x - i][y] != 20 && (map[x - i][y] == 1 || map[x - i][y] == 10 || (map[x - i][y] >= 11 && map[x - i][y] <= 18) || map[x - i][y] > 100))
			map[x - i][y] = -10; //어우 복잡해

		//어떤 상태냐. 그냥 딱 일반. 벽을 만나지 않았고, 

		if (map[x - i][y] == -1)
			brake1 = 0;
		else if (map[x - i][y] == 0 && brake1 == 1)
		{
			randitem1(x - i, y);
			brake1 = 0;
		}


		//하
		if (brake2 != 0 && map[x + i][y] != 20 && (map[x + i][y] == 1 || map[x + i][y] == 10 || (map[x + i][y] >= 11 && map[x + i][y] <= 18) || map[x + i][y] > 100))
			map[x + i][y] = -10;

		if (map[x + i][y] == -1)
			brake2 = 0;
		else if (map[x + i][y] == 0 && brake2 == 1)
		{
			randitem2(x + i, y);
			brake2 = 0;
		}


		//좌
		if (brake3 != 0 && map[x][y - i] != 20 && (map[x][y - i] == 1 || map[x][y - i] == 10 || (map[x][y - i] >= 11 && map[x][y - i] <= 18) || map[x][y - i] > 100))
			map[x][y - i] = -10;

		if (map[x][y - i] == -1)
			brake3 = 0;
		else if (map[x][y - i] == 0 && brake3 == 1)
		{
			randitem3(x, y - i);
			brake3 = 0;
		}


		//우
		if (brake4 != 0 && map[x][y + i] != 20 && (map[x][y + i] == 1 || map[x][y + i] == 10 || (map[x][y + i] >= 11 && map[x][y + i] <= 18) || map[x][y + i] > 100))
			map[x][y + i] = -10;

		if (map[x][y + i] == -1)
			brake4 = 0;
		else if (map[x][y + i] == 0 && brake4 == 1)
		{
			randitem4(x, y + i);
			brake4 = 0;
		}



		if (map[pl1.x][pl1.y] == -10) //플레이어가 있는 자리에 물풍선이 터졌나..
		{
			pl1.stop++; //1p대기상태 추가
			map[pl1.x][pl1.y] = 20; //물풍선둥둥..
			HANDLE thread3 = CreateThread(NULL, 0, wait1, NULL, 0, NULL); //1p의 대기상태 스레드 
		}

		if (map[pl2.x][pl2.y] == -10) //플레이어가 있는 자리에 물풍선이 터졌나..
		{
			pl2.stop++; //2p대기상태 추가
			map[pl2.x][pl2.y] = 20; //물풍선둥둥..
			HANDLE thread5 = CreateThread(NULL, 0, wait2, NULL, 0, NULL); //2p의 대기상태 스레드
		}

	}

	Sleep(400); //믈풍선 터진 대기시간

	pl1.br++; //물풍선의 수 복구

	for (int i = 0; i < 17; i++) //터트린 잔해 없애기
		for (int j = 0; j < 17; j++)
			if (map[i][j] == -10)
				map[i][j] = 1;

}

//플레이어 1의 물풍선과 대기시간을 재주는 쓰레드 함수

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

	//물풍선 스레드

	int brake1 = 1, brake2 = 1, brake3 = 1, brake4 = 1;

	pl2.br--; //물풍선 수 하나 차감하기

	int x = pl2.x;
	int y = pl2.y;
	int len = pl2.len;

	map[x][y] = 10;

	for (int i = 0; i < 100; i++) //맞붙거나 영향력이 가해진 물풍선 연속해서 터트리기
	{
		if (map[x][y] == -10)
			break;
		else
			Sleep(10);
	}

	for (int i = 0; i <= len; i++) //물풍선 십자로 터트리기&&벽에 물줄기 가로막히기&&벽 부수기
	{

		//상

		if (brake2 != 0 && map[x - i][y] != 20 && (map[x - i][y] == 1 || map[x - i][y] == 10 || (map[x - i][y] >= 11 && map[x - i][y] <= 18) || map[x - i][y] > 100))
			map[x - i][y] = -10;

		if (map[x - i][y] == -1)
			brake2 = 0;
		else if (map[x - i][y] == 0 && brake2 == 1)
		{
			randitem2(x - 1, y);
			brake2 = 0;
		}


		//하
		if (brake1 != 0 && map[x + i][y] != 20 && (map[x + i][y] == 1 || map[x + i][y] == 10 || (map[x + i][y] >= 11 && map[x + i][y] <= 18) || map[x + i][y] > 100))
			map[x + i][y] = -10;

		if (map[x + i][y] == -1)
			brake1 = 0;
		else if (map[x + i][y] == 0 && brake1 == 1)
		{
			randitem3(x + 1, y);
			brake1 = 0;
		}


		//좌
		if (brake4 != 0 && map[x][y - i] != 20 && (map[x][y - i] == 1 || map[x][y - i] == 10 || (map[x][y - i] >= 11 && map[x][y - i] <= 18) || map[x][y - i] > 100))
			map[x][y - i] = -10;

		if (map[x][y - i] == -1)
			brake4 = 0;
		else if (map[x][y - i] == 0 && brake4 == 1)
		{
			randitem1(x, y - 1);
			brake4 = 0;
		}


		//우
		if (brake3 != 0 && map[x][y + i] != 20 && (map[x][y + i] == 1 || map[x][y + i] == 10 || (map[x][y + i] >= 11 && map[x][y + i] <= 18) || map[x][y + i] > 100))
			map[x][y + i] = -10;

		if (map[x][y + i] == -1)
			brake3 = 0;
		else if (map[x][y + i] == 0 && brake3 == 1) {
			randitem4(x, y + 1);
			brake3 = 0;
		}



		if (map[pl2.x][pl2.y] == -10) //플레이어가 있는 자리에 물풍선이 터졌나..
		{
			pl2.stop++;
			map[pl2.x][pl2.y] = 20;
			HANDLE thread5 = CreateThread(NULL, 0, wait2, NULL, 0, NULL);
		}

		if (map[pl1.x][pl1.y] == -10) //플레이어가 있는 자리에 물풍선이 터졌나..
		{
			pl1.stop++;
			map[pl1.x][pl1.y] = 20;
			HANDLE thread5 = CreateThread(NULL, 0, wait1, NULL, 0, NULL);
		}

		Sleep(10);
	}

	Sleep(400); //믈풍선 터진 대기시간

	pl2.br++; //물풍선의 수 복구

	for (int i = 0; i < 17; i++) //터트린 잔해 없애기
		for (int j = 0; j < 17; j++)
			if (map[i][j] == -10)
				map[i][j] = 1;

}

//플레이어 1의 물풍선과 대기시간을 재주는 쓰레드 함수