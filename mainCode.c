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
	printf("⊥");
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
					printf("⊥");
				}
				break;
			case DOWN:
				if (selectMenu < 5) {
					Gotoxy(x, y);
					printf("  ");
					y = y + 3;
					selectMenu++;
					Gotoxy(x, y);
					printf("⊥");
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

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); //儀鼻擊 滲唳擊 п邀 1~15 
	printf("\n");
	Gotoxy(23, 3); printf("≠"); Sleep(120);
	Gotoxy(25, 3); printf("觼"); Sleep(120);
	Gotoxy(27, 3); printf("溯"); Sleep(120);
	Gotoxy(29, 3); printf("檜"); Sleep(120);
	Gotoxy(31, 3); printf("雖"); Sleep(120);
	Gotoxy(33, 3); printf("嬴"); Sleep(120);
	Gotoxy(35, 3); printf("馨"); Sleep(120);
	Gotoxy(37, 3); printf("檜"); Sleep(120);
	Gotoxy(39, 3); printf("萄"); Sleep(120);
	Gotoxy(41, 3); printf("≠"); Sleep(120);

	Gotoxy(25, 8);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   啪歜衛濛");
	Gotoxy(25, 11);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   啪歜寞徹");
	Gotoxy(25, 14);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   嬴檜蠱撲貲");
	Gotoxy(25, 17);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   議葛攪撲貲");
	Gotoxy(25, 20);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	printf("   �飛曌麥�");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);

	Gotoxy(58, 5);
	printf("檜翕 : ∟, ⊿");
	Gotoxy(58, 7);
	printf("摹鷗 : ENTER");

	Gotoxy(57, 10);
	printf("啪歜謙猿 : ESC");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	PlaySound(TEXT("Login.wav.wav"), NULL, SND_ASYNC);



}

//void HideCursor() //醴憮蒂 獗梯
//{
//	CONSOLE_CURSOR_INFO cursor;
//	cursor.bVisible = FALSE;
//	cursor.dwSize = sizeof(cursor);
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorInfo(handle, &cursor);
//}

void game() {




	Gotoxy(35, 2); printf(" ≠啪歜 寞徹≠");

	Gotoxy(10, 5); printf("憮煎朝 僭Ё摹擊 陛雖堅 陝陝曖 僭Ё摹擊 攪お萵 熱 氈蝗棲棻. ");

	Gotoxy(10, 6); printf("僭爾塭縑 蜃擎 菴 橾薑衛除檜 雖釭賊 僭Ё摹檜 攪雖堅 啪歜檜 謙猿腌棲棻.");

	Gotoxy(10, 7); printf("嬴檜蠱擊 瞳瞰ж啪 餌辨п 蝓葬蒂 檜莊橫 頂撮蹂!");

	Gotoxy(10, 10); printf("player 1 : w a s d煎 議葛攪蒂 褻謙й 熱 氈蝗棲棻.");

	Gotoxy(10, 11); printf("\'Q\'蒂 揚楝 僭Ё摹擊 撲纂й 熱 氈蝗棲棻.");

	Gotoxy(10, 12); printf("\'E\'蒂 揚楝 夥棺擊 餌辨й 熱 氈蝗棲棻.");

	Gotoxy(10, 15); printf("palyer 2 : �香嚂扑� 議葛攪蒂 褻謙й 熱 氈蝗棲棻.");

	Gotoxy(10, 16); printf("辦難 璋濠酈 \'0\'擊 揚楝 僭Ё摹擊 撲纂й 熱 氈蝗棲棻.");

	Gotoxy(10, 17); printf("謝難 \'/\'擊 揚楝 夥棺擊 餌辨й 熱 氈蝗棲棻,");




	Gotoxy(50, 22); printf("ESC蒂 揚楝 詭檣戲煎 給嬴骨棲棻.");

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

	Gotoxy(35, 3); printf("≠嬴檜蠱 撲貲≠");

	Gotoxy(9, 10); printf("夥棺 : 僭Ё摹縑 陘�� 鼻�窒□� ж釭蒂 模賅п 緒螳釭螢 熱 氈蝗棲棻. (＝)");

	Gotoxy(9, 13); printf("僭Ё摹 : 撲纂 陛棟и 僭Ё摹曖 偃熱陛 隸陛м棲棻. (∟)");

	Gotoxy(9, 16); printf("艙擒 : 僭Ё摹曖 望檜陛 隸陛м棲棻. (㏒)");

	printf("\n\n\n\n\n");

	Gotoxy(50, 22); printf("ESC蒂 揚楝 詭檣戲煎 給嬴骨棲棻.");

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
	printf("Ｊ");
	Gotoxy(85, 0);
	printf("Ｈ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
	Gotoxy(4, 11);
	printf("          錳�勒� 啪歜 �秣磍� 嬪п �香嚂弘� 賅憮葬縑 蜃湊啪 撲薑п輿撮蹂.");
	Gotoxy(0, 23);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
	printf("Ｉ");
	Gotoxy(85, 23);
	printf("Ｋ");


	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	Gotoxy(50, 22); printf("ESC蒂 揚楝 詭檣戲煎 給嬴骨棲棻.");

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
	printf("殮溘ж撮蹂 >> ");
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
	printf("棻擠 : SpaceBar");

	Gotoxy(x, y+2);
	printf(" 摹鷗 : Enter");
	colset(LIGHTWHITE);

	x -= 8;
	y += 2;


	Gotoxy(x, y + 4);
	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	Gotoxy(x, y + 5);
	printf("早                           早");
	Gotoxy(x, y + 6);
	printf("早                           早");
	Gotoxy(x, y + 7);
	printf("早                           早");
	Gotoxy(x, y + 8);
	printf("早                           早");
	Gotoxy(x, y + 9);
	printf("早                           早");
	Gotoxy(x, y + 10);
	printf("早                           早");
	Gotoxy(x, y + 11);
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	

	while (1) {

		if (choice == 1) {
			maprint(map1, 17, 17, 10, 3);
			Gotoxy(x+5, y + 6);
			printf("≠≧≧≧≧");
			Gotoxy(x + 5, y + 8);
			printf("嬴馨檜萄    ");
				
		}else if (choice == 2) {
			maprint(map2, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("≠≠≠≧≧");
			Gotoxy(x + 5, y + 8);
			printf("犒濛犒濛    ");
		}
		else if (choice == 3) {
			maprint(map3, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("≠≠≠≠≧");
			Gotoxy(x + 5, y + 8);
			printf("觼溯檜雖!   ");
		}
		else if (choice == 4) {
			maprint(map4, 17, 17, 10, 3);
			Gotoxy(x + 5, y + 6);
			printf("≧≧≧≧≧");
			Gotoxy(x + 5, y + 8);
			printf("楠渾           ");
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

void charasdfghjkl/*議葛撲貲л熱 冗冗*/() {


	Gotoxy(50, 22); printf("ESC蒂 揚楝 詭檣戲煎 給嬴骨棲棻.");

	HideCursor(1);

	int x = 20, y = 6;
	int chactclor;

	Gotoxy(x, 5); printf("忙收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收忖");
	Gotoxy(x, 14); printf("朵收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收朽");
	Gotoxy(x, 20); printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收戎");

	for (int i = 6; i <= 19; i++)
	{
		Gotoxy(x, i);
		printf("弛");
	}
	for (int i = 6; i <= 19; i++) {
		Gotoxy(x + 44, i);
		printf("弛");
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
			printf("  ((e秉e)) ");
			Gotoxy(x, y++);
			printf("   o(＿)o ");
			Gotoxy(x, y++);
			printf("    足足 ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf(" 寡鎬 BAZZI    ");

			Gotoxy(42, y - 8);
			printf("#蟾爾瞪辨 #援啻塑啻    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("偃熱   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("僭還晦 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
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
			printf("    足足 ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  棻螃 DAO    ");

			Gotoxy(42, y - 8);
			printf("#輿該棲_躑 #瞪楞議    ");

			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);


			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("偃熱   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 10)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("僭還晦 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}
			break;
		case 3:

			chactclor = 14;

			Gotoxy(x, y++);
			printf("   活__活 ");
			Gotoxy(x, y++);
			printf("  ((Q╲Q)) ");
			Gotoxy(x, y++);
			printf("   o(≧)o ");
			Gotoxy(x, y++);
			printf("    足足 ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("蛤雖棲 DIZNI   ");

			Gotoxy(42, y - 8);
			printf("#滌≠ #敝罹遺 #蕨需    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("偃熱   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("僭還晦 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 9)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			break;
		case 4:

			chactclor = 8;

			Gotoxy(x, y++);
			printf("   _o矜o_ ");
			Gotoxy(x, y++);
			printf("  ((d,`o)) ");
			Gotoxy(x, y++);
			printf("   o('')o ");
			Gotoxy(x, y++);
			printf("    足足");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  賅蝶 MOS   ");

			Gotoxy(42, y - 8);
			printf("#僭Ё摹_釭擒 #給    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("偃熱   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 8)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("僭還晦 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 5)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			break;
		case 5:

			chactclor = 10;

			Gotoxy(x, y++);
			printf("   o_仃_o ");
			Gotoxy(x, y++);
			printf("  ((o炮o)) ");
			Gotoxy(x, y++);
			printf("   o(\"\")o ");
			Gotoxy(x, y++);
			printf("    足足 ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("  辦棲 UNI    ");

			Gotoxy(42, y - 8);
			printf("#輿檣濰_譆擁 #擬擁    ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("偃熱   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("僭還晦 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 7)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			break;
		case 6:

			chactclor = 13;

			Gotoxy(x, y++);
			printf("    _今_  ");
			Gotoxy(x, y++);
			printf("  ((G, G)) ");
			Gotoxy(x, y++);
			printf("   o(＿)o ");
			Gotoxy(x, y++);
			printf("    足足 ");
			Gotoxy(x - 12, y - 8);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
			printf("葆葬萄  MARID");

			Gotoxy(42, y - 8);
			printf("#犒璃嬴 #撚蘋_醞絮     ");

			x -= 12;
			y += 4;

			Gotoxy(x, y + 2);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("偃熱   ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 2)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 9)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
			}

			Gotoxy(x, y++);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			printf("僭還晦 ");
			for (int j = 1; j <= 10; j++) {
				if (j <= 1)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), chactclor);
				else if (j <= 6)
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
				else
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);

				printf("≒ ");
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
//Ы溯檜橫 薑爾

struct XYLBSGIn pl1 = { 1,1,1,1,10,10,0,0,0,"Player 1",12,1 };
struct XYLBSGIn pl2 = { 15,15,1,1,10,10,0,0,0,"Player 2",12,1 };

struct XYLBSGIn backupl1 = { 1,1,1,1,10,10,0,0,0,"Player 1",12,1 };
struct XYLBSGIn backupl2 = { 15,15,1,1,10,10,0,0,0,"Player 2",12,1 };

void main() {

	HideCursor(1);
	//啪歜曖 瞪羹瞳檣 �撣�

	//Ready();

	if (asdfghjkl == 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11擊 揚楝 瞪羹�飛橉虞� 撲薑 п 輿撮蹂.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11擊 揚楝 瞪羹�飛橉虞� 撲薑 п 輿撮蹂.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11擊 揚楝 瞪羹�飛橉虞� 撲薑 п 輿撮蹂.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11擊 揚楝 瞪羹�飛橉虞� 撲薑 п 輿撮蹂.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		Gotoxy(6, 2); printf("F11擊 揚楝 瞪羹�飛橉虞� 撲薑 п 輿撮蹂.");
		Sleep(500);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
		Gotoxy(6, 2); printf("F11擊 揚楝 瞪羹�飛橉虞� 撲薑 п 輿撮蹂.");
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
		printf("＝ x %d", pl1.item);
		Gotoxy(69, 16);
		printf("＝ x %d", pl2.item);
	}

	Sleep(500);

	if (pl1.gameout == 1)
		result(2);
	else if (pl2.gameout == 1)
		result(1);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), GRAY);
	Gotoxy(52, 22);
	printf("嬴鼠 酈釭 揚楝 啗樓м棲棻.");

	system("pause>null");
	system("cls");

	for (int i = 0; i <= 1; i++) {
		main();
	}




	///詭檣�飛橉虞� 檜翕ж朝 酈


	//%s賦憮 棣啻歜 轎溘п紫...腆蛭? 檜勒 掘⑷ 蕨鼻!
}

void result(int winner) {

	char name[10];

	if (winner == 1) {
		strcpy(name, pl1.name);
	}else if (winner == 2) {
		strcpy(name, pl2.name);
	}

	Gotoxy(16, 8);
	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬"); Sleep(200);
	Gotoxy(16, 9);  printf("早                                                    早"); Sleep(100);
	Gotoxy(16, 10);  printf("早                                                    早"); Sleep(100);
	Gotoxy(16, 11);  printf("早                                                    早"); Sleep(100);
	Gotoxy(16, 12);  printf("早                                                    早"); Sleep(100);
	Gotoxy(16, 13);  printf("早                                                    早"); Sleep(100);
	Gotoxy(16, 14);
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭"); Sleep(500);
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
	
	

	Gotoxy(x, 3); printf("忙收收收收收收收收收收收收收收收收收收收收收次收收收收收收收收收收收收收收收收收收收收收忖");
	Gotoxy(x, 4); printf("        %8s              %8s", pl1.name, pl2.name);
	Gotoxy(x, 5); printf("朵收收收收收收收收收收收收收收收收收收收收收朱收收收收收收收收收收收收收收收收收收收收收朽");
	Gotoxy(x, 15); printf("朵收收收收收收收收收收收收收收收收收收收收收朱收收收收收收收收收收收收收收收收收收收收收朽");
	Gotoxy(x, 19); printf("曲式式式式式式式式式式式式式式式式式式式式式死式式式式式式式式式式式式式式式式式式式式式戎");

	for (int i = 4; i <= 18; i++)
	{
		Gotoxy(x + 22, i);
		printf("弛");
	}
	for (int i = 4; i <= 18; i++)
	{
		Gotoxy(x, i);
		printf("弛");
	}
	for (int i = 4; i <= 18; i++) {
		Gotoxy(x + 44, i);
		printf("弛");
	}

	while (1) {

		x = 60, y = 8;
		colset(LIGHTYELLOW);
		Gotoxy(x, y);
		printf("摹鷗 : A,D / ∠,⊥");

		Gotoxy(x, y + 2);
		printf("遽綠 : W,S / ∟,⊿");

		Gotoxy(x - 2, y + 5);
		printf("虜擒 酈 濛翕檜 腎雖 彊戲賊");
		colset(pl1.color);
		Gotoxy(x - 2, y + 6);
		printf("Caps Lock");
		colset(LIGHTYELLOW);
		printf("檜釭 ");
		colset(pl2.color);
		printf("Num Lock");
		colset(LIGHTYELLOW);
		printf("擊");
		Gotoxy(x - 2, y + 7);
		printf("�挫恉� 輿撮蹂.");
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
		printf("  ((e秉e)) ");
		Gotoxy(x, y++);
		printf("   o(＿)o ");
		Gotoxy(x, y++);
		printf("    足足 ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf(" 寡鎬 BAZZI    ");
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
		printf("    足足 ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  棻螃 DAO    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 3:
		Gotoxy(x, y++);
		printf("   活__活 ");
		Gotoxy(x, y++);
		printf("  ((Q╲Q)) ");
		Gotoxy(x, y++);
		printf("   o(≧)o ");
		Gotoxy(x, y++);
		printf("    足足 ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("蛤雖棲 DIZNI   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 4:
		Gotoxy(x, y++);
		printf("   _o矜o_ ");
		Gotoxy(x, y++);
		printf("  ((d,`o)) ");
		Gotoxy(x, y++);
		printf("   o('')o ");
		Gotoxy(x, y++);
		printf("    足足");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  賅蝶 MOS   ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 5:
		Gotoxy(x, y++);
		printf("   o_仃_o ");
		Gotoxy(x, y++);
		printf("  ((o炮o)) ");
		Gotoxy(x, y++);
		printf("   o(\"\")o ");
		Gotoxy(x, y++);
		printf("    足足 ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("  辦棲 UNI    ");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
		break;
	case 6:
		Gotoxy(x, y++);
		printf("    _今_  ");
		Gotoxy(x, y++);
		printf("  ((G, G)) ");
		Gotoxy(x, y++);
		printf("   o(＿)o ");
		Gotoxy(x, y++);
		printf("    足足 ");
		Gotoxy(x, y + 2);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
		printf("葆葬萄  MARID");
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
	printf("忙");
	for (int i = -1; i < jsize * 2; i++)
	{
		printf("式");

	}
	printf("旬");

	for (int i = 0; i < isize; i++)
	{
		Gotoxy(arrangex - 2, arrangey + i);
		printf("早");

	}
	for (int i = 0; i < isize; i++)
	{
		Gotoxy(arrangex + jsize * 2, arrangey + i);
		printf("早");

	}

	Gotoxy(arrangex - 2, arrangey + isize);
	printf("戌");
	for (int i = 0; i <= jsize * 2; i++)
	{
		printf("式");

	}
	printf("戎");

	for (int i = 0; i < isize; i++) {
		Gotoxy(arrangex, arrangey + i);
		for (int j = 0; j < jsize; j++) {
			if (*((ptr + i * jsize) + j) == -1)
				printf("﹥");
			else if (*((ptr + i * jsize) + j) == 0)
				printf("﹤");
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
				printf("≦");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == -30)
				printf("﹢");
			else if (*((ptr + i * jsize) + j) == -100)
				printf("  ");
			else if (*((ptr + i * jsize) + j) == 11)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("∼");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 12)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("∪");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 13)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("９");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 14)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl1.color);
				printf("Ⅱ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 15)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("﹦");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 16)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("∩");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 17)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("８");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 18)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pl2.color);
				printf("Ⅰ");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 20) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTBLUE);
				printf("≡");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 101)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("＝");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 102)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("∟");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);
			}
			else if (*((ptr + i * jsize) + j) == 103)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTYELLOW);
				printf("㏒");
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

	printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收旬 ");
	Gotoxy(x, y + 1);
	printf("早                           早 ");
	Gotoxy(x, y + 2);
	printf("早                           早 ");
	Gotoxy(x, y + 3);
	printf("早                           早 ");
	Gotoxy(x, y + 4);
	printf("早                           早 ");
	Gotoxy(x, y + 5);
	printf("早                           早 ");
	Gotoxy(x, y + 6);
	printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收旭 ");

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
	Gotoxy(x + 17, y + 3);
	printf("式式式式式式式式式式");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTWHITE);

	x += 2;
	y++;

	Gotoxy(x, y);
	printf("旨收收收收收收收收收收收旬 ");
	Gotoxy(x, y + 1);
	printf("早           早 ");
	Gotoxy(x, y + 2);
	printf("早           早 ");
	Gotoxy(x, y + 3);
	printf("早           早 ");
	Gotoxy(x, y + 4);
	printf("曲收收收收收收收收收收收旭 ");

	x += 2;
	y++;

	switch (ch)
	{
	case 'B':
		Gotoxy(x, y);
		printf("   o__o ");
		Gotoxy(x, y + 1);
		printf(" ((e秉e)) ");
		Gotoxy(x, y + 2);
		printf("  o(＿)o ");
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
		printf("  活__活 ");
		Gotoxy(x, y + 1);
		printf(" ((Q╲Q)) ");
		Gotoxy(x, y + 2);
		printf("  o(≧)o ");
		break;
	case 'M':
		Gotoxy(x, y);
		printf("  _o矜o_ ");
		Gotoxy(x, y + 1);
		printf(" ((d,`o)) ");
		Gotoxy(x, y + 2);
		printf("  o('')o ");
		break;
	case 'U':
		Gotoxy(x, y);
		printf("  o_仃_o ");
		Gotoxy(x, y + 1);
		printf(" ((o炮o)) ");
		Gotoxy(x, y + 2);
		printf("  o(\"\")o ");
		break;
	case 'R':
		Gotoxy(x, y);
		printf("   _今_  ");
		Gotoxy(x, y + 1);
		printf(" ((G, G)) ");
		Gotoxy(x, y + 2);
		printf("  o(＿)o ");
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

	//夥棺 1
	//僭Ё摹 熱 2
	//僭Ё摹 望檜 2
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
	//夥棺 1
	//僭Ё摹 熱 2
	//僭Ё摹 望檜 2


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
	//夥棺 1
	//僭Ё摹 熱 2
	//僭Ё摹 望檜 2


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

	//夥棺 1
	//僭Ё摹 熱 2
	//僭Ё摹 望檜 2

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
//楠渾 嬴檜蠱 轎溘

void readygo() {
	Gotoxy(12, 2);
	printf("∪ 1P");
	Gotoxy(36, 20);
	printf(" 2P ∼");
	Gotoxy(22, 9);
	printf("旨收收收收收收收旬 ");
	Gotoxy(22, 10);
	printf("早       早 ");
	Gotoxy(22, 11);
	printf("早  Ready早 ");
	Gotoxy(22, 12);
	printf("早       早 ");
	Gotoxy(22, 13);
	printf("曲收收收收收收收旭 ");
	Sleep(500);
	Gotoxy(12, 2);
	printf("∩ 1P");
	Gotoxy(36, 20);
	printf(" 2P ﹦");
	Sleep(500);
	Gotoxy(12, 2);
	printf("∪ 1P");
	Gotoxy(36, 20);
	printf(" 2P ∼");
	Sleep(500);
	Gotoxy(12, 2);
	printf("∩ 1P");
	Gotoxy(36, 20);
	printf(" 2P ﹦");
	Sleep(500);
	Gotoxy(12, 2);
	printf("∪ 1P");
	Gotoxy(36, 20);
	printf(" 2P ∼");
	Sleep(500);
	Gotoxy(12, 2);
	printf("∩ 1P");
	Gotoxy(36, 20);
	printf(" 2P ﹦");
	Gotoxy(22, 11);
	printf("早   Go! 早 ");
	Sleep(500);
	Gotoxy(12, 2);
	printf("∪ 1P");
	Gotoxy(36, 20);
	printf(" 2P ∼");
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

	int up = 11, down = 12, left = 13, right = 14; //1p 殮溘
	int up2 = 15, down2 = 16, left2 = 17, right2 = 18; //2p 殮溘
	int direction; //Ы溯檜橫曖 遺霜歜 評塭憮 Ы溯檜橫 賅曄 滲�飛� 輿晦嬪п 虜萇 滲熱
	int Xchange = 0, Ychange = 0; //寡翮曖太 x謝ル y謝ル 滲�風� 輿溥掘

	int change, color;

	int x, y, stop, len, br, item; //殮溘高縑 評塭 掘褻羹 滲熱蒂 1p 2p 輿溥堅 虜菟歷橫
	int lenmax, brmax;

	char input; //殮溘嫡晦

	while (pl1.gameout == 0 && pl2.gameout == 0) {

		input = _getch(); //殮溘擊 嫡嬴

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

		// 陝陝曖 滲熱縑 1p曖 薑爾釭 2p曖 薑爾蒂 厥橫


		if ((input == 'w' || input == 's' || input == 'a' || input == 'd' || input == 72 || input == 80 || input == 75 || input == 77) && map[x][y] != 20)
		{
			//虜擒 滲熱陛 Ы溯檜橫蒂 遺霜檜朝 酈檜堅, Ы溯檜橫陛 僭Ё摹縑 蜃擎 鼻鷓檣 唳辦陛 嬴棲塭賊~


			if (input == 'w' || input == 72)
				Xchange = -1;
			else if (input == 's' || input == 80)
				Xchange = 1;
			else if (input == 'a' || input == 75)
				Ychange = -1;
			else if (input == 'd' || input == 77)
				Ychange = 1;

			//寡翮 高擊 滲�亳藷停� 嬪и 餌瞪濛機

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

			//賅曄 轎溘擊 п撿ж棲梱 陝陝曖 璋濠高擊 厥堅氈橫


			if (map[x + Xchange][y + Ychange] == -10) {

				//虜擒 Ы溯檜橫陛 遺霜罹撿 ж朝 寞щ檜 攪霞 僭Ё摹檜塭賊?

				map[x + Xchange][y + Ychange] = 20;
				map[x][y] = 1;

				//Ы溯檜橫蒂 檜翕衛酈堅 Ы溯檜橫曖 鼻鷓蒂 僭Ё摹縑 蜃擎 鼻鷓煎 虜菟橫

				stop++; //渠晦鼻鷓縑 餵橫厥堅,


				if (input == 'w' || input == 's' || input == 'a' || input == 'd')
					CreateThread(NULL, 0, wait1, NULL, 0, NULL);
				else if (input == 72 || input == 80 || input == 75 || input == 77)
					CreateThread(NULL, 0, wait2, NULL, 0, NULL);

				//虜擒 p1曖 殮溘檜塭賊 p1蒂 渠晦鼻鷓縑 餵橫厥堅 p2曖 殮溘檜賊 p2蒂 渠晦鼻鷓縑 餵橫厥橫.

				x += Xchange;
				y += Ychange;

				//棻 部陬戲棲 xy高縑 滲�風挫� 渦ж濠!
			}
			else if (map[x + Xchange][y + Ychange] == 1 || map[x + Xchange][y + Ychange] > 100 || map[x + Xchange][y + Ychange] == 20) {

				//遺霜檜溥堅 ж朝 夠檜 望檜剪釭, 嬴檜蠱檜 氈朝 夠檜塭賊

				if (map[x + Xchange][y + Ychange] > 100)
				{
					//虜擒 嬴檜蠱檜賊

					// >>>>>槳��萼 檜際棻 敝膨棻 餌嫌蝶毀棻 仄元? <<��葬棲陛 陴梯<<<<<

					if (map[x + Xchange][y + Ychange] == 103 && len <= lenmax) //望檜 蹺陛
						len++;
					else if (map[x + Xchange][y + Ychange] == 102 && br <= brmax) //偎熱 蹺陛
						br++;
					else if (map[x + Xchange][y + Ychange] == 101 && item != 2) //夥棺 蹺陛
						item++;
				}

				map[x + Xchange][y + Ychange] = direction; //殮溘脹 Ы溯檜橫曖 高戲煎 夥脯.

				if (map[x][y] != 10 || map[x + Xchange][y + Ychange] == 20) //渠晦鼻鷓曖 僭Ё摹檜 嬴棲塭賊
					map[x][y] = 1; //雖釭陛朝 望煎 夥紱濠



				x += Xchange;
				y += Ychange;

				//棻 部陬戲棲 xy高縑 滲�風挫� 渦ж濠!
			}
		}
		else if (input == 'q' && pl1.stop == 0)
		{

			//僭Ё摹 幗が檜 揚溜堅, 渠晦鼻鷓陛 嬴棲塭賊

			if (pl1.br != 0) {

				//僭Ё摹曖 熱陛 0檜 嬴棲塭賊

				HANDLE thread2 = CreateThread(NULL, 0, wtbr1, NULL, 0, NULL); //僭Ё摹 噙溯萄蒂 碳楝螃濠!

			}
		}
		else if (input == 'e' && pl1.stop != 0)
		{

			//夥棺 幗が檜 揚溜堅, 渠晦鼻鷓陛 嬴棲塭賊

			if (pl1.item != 0) {

				//夥棺曖 熱陛 0檜 嬴棲塭賊

				pl1.item--; //離馬ж堅
				pl1.stop = 0; //渠晦鼻鷓縑憮 ヴ溥釭啪 虜菟橫!

			}
		}
		//嬴楚紫 僅偽嬴
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

		//葆雖虞戲煎 滲�風挫� 掘褻羹縑 瞳辨ж賊 и廓曖 殮溘嫡晦陛 部釭!

	}
}

//舒 Ы溯檜橫曖 �做螃� 殮溘嫡朝 噙溯萄 л熱

DWORD WINAPI wait1(void* a) {

	int count = 0; //衛除擊 撚剪撿

	int stop = pl1.stop;
	int x = pl1.x;
	int y = pl1.y;

	//陝 滲熱縑 1p曖 薑爾蒂 й渡ж濠

	for (int i = 0; i < 100; i++)
	{

		stop = pl1.stop; //啗樓縑憮 薑爾蒂 碳楝螃朝剪撿.

		if (stop == 0) { //虜擒 嬴檜蠱擊 賦憮 渠晦鼻鷓縑憮 ヴ溥陬棻賊??
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 11; //僭Ё摹擊 п薯!!
			break;

		}
		else if (x == pl2.x && y == pl2.y) //虜擒 渠晦鼻鷓檣等 鼻渠陛 釭蒂 詳歷(..)棻賊
		{
			map[x][y] = -10;
			Sleep(20);
			map[x][y] = 15;
			count = 99; //蘋遴お蒂 闊衛 max煎 虜菟橫
			break;
		}

		count = i; //蘋遴お 1噶 蹺陛
		Sleep(35);

	}

	if (count == 99) //虜擒 蘋遴お陛 max塭賊
		pl1.gameout = 1; //啪歜嬴醒鼻鷓蒂 麵!
}
DWORD WINAPI wtbr1(void* a) {

	//僭Ё摹 蝶溯萄

	int brake1 = 1, brake2 = 1, brake3 = 1, brake4 = 1; //僭Ё摹擎 陛漁檜釭 漁擊 舒萄葬賊 剪晦憮 僭還晦陛 部釭棲梱 滲熱蒂 撲薑п 鍍橫

	pl1.br--; //僭Ё摹 熱 ж釭 離馬ж晦

	int x = pl1.x;
	int y = pl1.y;
	int len = pl1.len;

	map[x][y] = 10;

	for (int i = 0; i < 100; i++) //蜃稱剪釭 艙щ溘檜 陛п霞 僭Ё摹 翱樓п憮 攪お葬晦
	{
		if (map[x][y] == -10)
			break;
		else
			Sleep(10);
	}

	for (int i = 0; i <= len; i++) //僭Ё摹 褊濠煎 攪お葬晦&&漁縑 僭還晦 陛煎虞�鰼�&&漁 睡熱晦
	{

		//鼻

		if (brake1 == 1 && map[x - i][y] != 20 && (map[x - i][y] == 1 || map[x - i][y] == 10 || (map[x - i][y] >= 11 && map[x - i][y] <= 18) || map[x - i][y] > 100))
			map[x - i][y] = -10; //橫辦 犒濩п

		//橫雯 鼻鷓傍. 斜傖 詞 橾奩. 漁擊 虜釭雖 彊懊堅, 

		if (map[x - i][y] == -1)
			brake1 = 0;
		else if (map[x - i][y] == 0 && brake1 == 1)
		{
			randitem1(x - i, y);
			brake1 = 0;
		}


		//ж
		if (brake2 != 0 && map[x + i][y] != 20 && (map[x + i][y] == 1 || map[x + i][y] == 10 || (map[x + i][y] >= 11 && map[x + i][y] <= 18) || map[x + i][y] > 100))
			map[x + i][y] = -10;

		if (map[x + i][y] == -1)
			brake2 = 0;
		else if (map[x + i][y] == 0 && brake2 == 1)
		{
			randitem2(x + i, y);
			brake2 = 0;
		}


		//謝
		if (brake3 != 0 && map[x][y - i] != 20 && (map[x][y - i] == 1 || map[x][y - i] == 10 || (map[x][y - i] >= 11 && map[x][y - i] <= 18) || map[x][y - i] > 100))
			map[x][y - i] = -10;

		if (map[x][y - i] == -1)
			brake3 = 0;
		else if (map[x][y - i] == 0 && brake3 == 1)
		{
			randitem3(x, y - i);
			brake3 = 0;
		}


		//辦
		if (brake4 != 0 && map[x][y + i] != 20 && (map[x][y + i] == 1 || map[x][y + i] == 10 || (map[x][y + i] >= 11 && map[x][y + i] <= 18) || map[x][y + i] > 100))
			map[x][y + i] = -10;

		if (map[x][y + i] == -1)
			brake4 = 0;
		else if (map[x][y + i] == 0 && brake4 == 1)
		{
			randitem4(x, y + i);
			brake4 = 0;
		}



		if (map[pl1.x][pl1.y] == -10) //Ы溯檜橫陛 氈朝 濠葬縑 僭Ё摹檜 攪螺釭..
		{
			pl1.stop++; //1p渠晦鼻鷓 蹺陛
			map[pl1.x][pl1.y] = 20; //僭Ё摹菅菅..
			HANDLE thread3 = CreateThread(NULL, 0, wait1, NULL, 0, NULL); //1p曖 渠晦鼻鷓 蝶溯萄 
		}

		if (map[pl2.x][pl2.y] == -10) //Ы溯檜橫陛 氈朝 濠葬縑 僭Ё摹檜 攪螺釭..
		{
			pl2.stop++; //2p渠晦鼻鷓 蹺陛
			map[pl2.x][pl2.y] = 20; //僭Ё摹菅菅..
			HANDLE thread5 = CreateThread(NULL, 0, wait2, NULL, 0, NULL); //2p曖 渠晦鼻鷓 蝶溯萄
		}

	}

	Sleep(400); //嘖Ё摹 攪霞 渠晦衛除

	pl1.br++; //僭Ё摹曖 熱 犒掘

	for (int i = 0; i < 17; i++) //攪お萼 濤п 橈擁晦
		for (int j = 0; j < 17; j++)
			if (map[i][j] == -10)
				map[i][j] = 1;

}

//Ы溯檜橫 1曖 僭Ё摹婁 渠晦衛除擊 營輿朝 噙溯萄 л熱

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

	//僭Ё摹 蝶溯萄

	int brake1 = 1, brake2 = 1, brake3 = 1, brake4 = 1;

	pl2.br--; //僭Ё摹 熱 ж釭 離馬ж晦

	int x = pl2.x;
	int y = pl2.y;
	int len = pl2.len;

	map[x][y] = 10;

	for (int i = 0; i < 100; i++) //蜃稱剪釭 艙щ溘檜 陛п霞 僭Ё摹 翱樓п憮 攪お葬晦
	{
		if (map[x][y] == -10)
			break;
		else
			Sleep(10);
	}

	for (int i = 0; i <= len; i++) //僭Ё摹 褊濠煎 攪お葬晦&&漁縑 僭還晦 陛煎虞�鰼�&&漁 睡熱晦
	{

		//鼻

		if (brake2 != 0 && map[x - i][y] != 20 && (map[x - i][y] == 1 || map[x - i][y] == 10 || (map[x - i][y] >= 11 && map[x - i][y] <= 18) || map[x - i][y] > 100))
			map[x - i][y] = -10;

		if (map[x - i][y] == -1)
			brake2 = 0;
		else if (map[x - i][y] == 0 && brake2 == 1)
		{
			randitem2(x - 1, y);
			brake2 = 0;
		}


		//ж
		if (brake1 != 0 && map[x + i][y] != 20 && (map[x + i][y] == 1 || map[x + i][y] == 10 || (map[x + i][y] >= 11 && map[x + i][y] <= 18) || map[x + i][y] > 100))
			map[x + i][y] = -10;

		if (map[x + i][y] == -1)
			brake1 = 0;
		else if (map[x + i][y] == 0 && brake1 == 1)
		{
			randitem3(x + 1, y);
			brake1 = 0;
		}


		//謝
		if (brake4 != 0 && map[x][y - i] != 20 && (map[x][y - i] == 1 || map[x][y - i] == 10 || (map[x][y - i] >= 11 && map[x][y - i] <= 18) || map[x][y - i] > 100))
			map[x][y - i] = -10;

		if (map[x][y - i] == -1)
			brake4 = 0;
		else if (map[x][y - i] == 0 && brake4 == 1)
		{
			randitem1(x, y - 1);
			brake4 = 0;
		}


		//辦
		if (brake3 != 0 && map[x][y + i] != 20 && (map[x][y + i] == 1 || map[x][y + i] == 10 || (map[x][y + i] >= 11 && map[x][y + i] <= 18) || map[x][y + i] > 100))
			map[x][y + i] = -10;

		if (map[x][y + i] == -1)
			brake3 = 0;
		else if (map[x][y + i] == 0 && brake3 == 1) {
			randitem4(x, y + 1);
			brake3 = 0;
		}



		if (map[pl2.x][pl2.y] == -10) //Ы溯檜橫陛 氈朝 濠葬縑 僭Ё摹檜 攪螺釭..
		{
			pl2.stop++;
			map[pl2.x][pl2.y] = 20;
			HANDLE thread5 = CreateThread(NULL, 0, wait2, NULL, 0, NULL);
		}

		if (map[pl1.x][pl1.y] == -10) //Ы溯檜橫陛 氈朝 濠葬縑 僭Ё摹檜 攪螺釭..
		{
			pl1.stop++;
			map[pl1.x][pl1.y] = 20;
			HANDLE thread5 = CreateThread(NULL, 0, wait1, NULL, 0, NULL);
		}

		Sleep(10);
	}

	Sleep(400); //嘖Ё摹 攪霞 渠晦衛除

	pl2.br++; //僭Ё摹曖 熱 犒掘

	for (int i = 0; i < 17; i++) //攪お萼 濤п 橈擁晦
		for (int j = 0; j < 17; j++)
			if (map[i][j] == -10)
				map[i][j] = 1;

}

//Ы溯檜橫 1曖 僭Ё摹婁 渠晦衛除擊 營輿朝 噙溯萄 л熱