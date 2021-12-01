#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

void gotoxy(int x, int y);

int main()
{
    int opcao = 1, x = 7;
    bool sair = true;

    system("cls");
    system("color 0F");
    gotoxy(18,5); printf("Menu Principal");
    gotoxy(18,7); printf("->");

    while(sair){
        gotoxy(20,7);  printf("1 - JOGAR");
        gotoxy(20,8);  printf("2 - RANKINGS");
        gotoxy(20,9);  printf("3 - CREDITOS");
        gotoxy(20,10); printf("4 - SAIR");

        system("pause>nul");

		if(GetAsyncKeyState(VK_DOWN) && x != 10) {
            gotoxy(18,x); printf("  ");
            x++;
            gotoxy(18,x); printf("->");
            opcao++;
            continue;
        }

		if(GetAsyncKeyState(VK_UP) && x != 7){
            gotoxy(18,x); printf("  ");
            x--;
            gotoxy(18,x); printf("->");
            opcao--;
            continue;
        }

		if(GetAsyncKeyState(VK_RETURN)){
            switch (opcao) {
            case 1:
                gotoxy(20,16);
                printf("GAME\n");
                break;
            case 2:
                gotoxy(20,16);
                printf("Ranking\n");
                break;
            case 3:
                gotoxy(20,16);
                printf("Creditos\n");
                break;
            case 4:
                gotoxy(20,16);
                printf("voce pediu para sair\n");
                sair = false;
            }
        }
    }
    gotoxy(20,21);
	return 0;
}

void gotoxy(int x, int y)
{
    HANDLE hCon;
    COORD dwPos;

    dwPos.X = x;
    dwPos.Y = y;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hCon,dwPos);
}
