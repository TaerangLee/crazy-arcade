

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <string.h>
#include <io.h>
#include <windows.h>
#include <conio.h>
#pragma comment(lib, "winmm.lib")
#include <mmsystem.h>
#pragma warning(disable:4996)


#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define ENTER 13

#define RED "\x1b[31m"
#define RESET "\x1b[0m"
#define BLUE "\x1b[34m"


const int LIGHTBLUE = 11;
const int BLUEC = 1;
const int WHITE = 7;
const int REDC = 4;
const int GREEN = 2;
const int LIGHTYELLOW = 14;
const int LIGHTPurple = 13;
const int YELLOW = 6;
const int GRAY = 8;
const int LIGHTWHITE = 15;
const int LIGHTRED = 12;

DWORD WINAPI player(void* h);

DWORD WINAPI wtbr1(void* a);
DWORD WINAPI wait1(void* a);

DWORD WINAPI wtbr2(void* a);
DWORD WINAPI wait2(void* a);

DWORD WINAPI charinput(void* a);

void mapbackup();

void randitem1(int x, int y);
void randitem2(int x, int y);
void randitem3(int x, int y);
void randitem4(int x, int y);

void profile(int x, int y, char ch);
void charprint(int charpl, char color, int x, int y);

void charasdfghjkl();

void readygo();
void result(int winner);

void Gotoxy(int x, int y)
{

    COORD pos = { x,y };

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

void maprint(int* ptr, int isize, int jsize, int arrangex, int arrangey);
void readypick();
void Ready();

void mapchoice();

void colset(int color);

void HideCursor(int hiding)
{
    CONSOLE_CURSOR_INFO cursor;
    if (hiding == 0) {
        cursor.bVisible = TRUE;
        cursor.dwSize = 1;
    }
    else if (hiding == 1) {
        cursor.bVisible = FALSE;
        cursor.dwSize = sizeof(cursor);
    }
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cursor);
}
