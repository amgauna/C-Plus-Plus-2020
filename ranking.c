#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> /*// Biblioteca de acentuação*/
#include <windows.h> /*// Biblioteca dos códigos do cmd*/

int a,b,L,L2;
void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main() {
    /*//menu*/
    int opcao;
    int ranking,ranking1,ranking2,ranking3,ranking4,ranking5,ranking6,ranking7,ranking8,ranking9,ranking10; /*// Sistema de Ranking*/
    setlocale(LC_ALL, "Portuguese"); /*// Definindo português brasileiro como linguagem dentro de printf*/
    do{
        inicio:
        opcao=0;
        L=2;L2=2;b=2;
        system("cls"); /*// Limpar a tela dos comandos anteriores*/
        system("color 0F"); /*// Definindo a cor do fundo e a letra no cmd*/
        printf("\n\n      1 - JOGAR \n      2 - RANKINGS \n      3 - CREDITOS \n      4 - SAIR\n");
        do{
            gotoxy(1,L);
            printf("  -%c",16);
            gotoxy(10,6);
            if(kbhit){a=getch();}
            if(a == 80){      /*seta p/baixo*/
                L2=L;L++;b++;
                if(b>5){b=2;L=2;}
            }
            if(a == 72){      /*seta p/cima */
                L2=L;L--;b--;
                if(b<2){b=5;L+=4;}
            }
            if(L!=L2){gotoxy(1,L2);printf("    ");L2=L;}
            if(a == 13){opcao=b-1;}
        }while(opcao == 0);
    switch (opcao) {
    case 1:
        system("cls");
        printf("GAME\n");
        /*Sleep(3000);*/
        printf("\nPressione ESC Para Voltar Ao Menu Principal");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 2:
        system("cls");
        printf("Ranking\n\n");
        /*// Começo do código de ranking*/
        ranking1  = 5000;
        ranking2  = 4500;
        ranking3  = 4000;
        ranking4  = 3800;
        ranking5  = 3600;
        ranking6  = 3000;
        ranking7  = 2500;
        ranking8  = 2300;
        ranking9  = 1900;
        ranking10 = 1600;

        if(ranking > ranking10){
            ranking10 = ranking;
        }
        if(ranking > ranking9){
            ranking10 = ranking9;
            ranking9 = ranking;
        }
        if(ranking > ranking8){
            ranking9 = ranking8;
            ranking8 = ranking;
        }
        if(ranking > ranking7){
            ranking8 = ranking7;
            ranking7 = ranking;
        }
        if(ranking > ranking6){
            ranking7 = ranking6;
            ranking6 = ranking;
        }
        if(ranking > ranking5){
            ranking6 = ranking5;
            ranking5 = ranking;
        }
        if(ranking > ranking4){
            ranking5 = ranking4;
            ranking4 = ranking;
        }
        if(ranking > ranking3){
            ranking4 = ranking3;
            ranking3 = ranking;
        }
        if(ranking > ranking2){
            ranking3 = ranking2;
            ranking2 = ranking;
        }
        if(ranking > ranking1){
            ranking2 = ranking1;
            ranking1 = ranking;
        }

        printf  ("RANKING  1 = %d\nRANKING  2 = %d\nRANKING  3 = %d",ranking1,ranking2,ranking3);
        printf("\nRANKING  4 = %d\nRANKING  5 = %d\nRANKING  6 = %d",ranking4,ranking5,ranking6);
        printf("\nRANKING  7 = %d\nRANKING  8 = %d\nRANKING  9 = %d",ranking7,ranking8,ranking9);
        printf("\nRANKING 10 = %d\n",ranking10);
        /*// Fim do Código do Ranking*/
        /*Sleep(10000);*/
        printf("\nPressione ESC Para Voltar Ao Menu Principal");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 3:
        system("cls");
        printf("Creditos\n");
        /*Sleep(3000);*/
        printf("\nPressione ESC Para Voltar Ao Menu Principal");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 4:
        system("cls");
        printf("voce pediu para sair, fechando programa...");
        for(a=0;a<10;a++){
            printf(".");
            Sleep(300);/*// Aqui ele dorme por 3 centesimos de segundos depois continua o código*/
        }
        printf("!\n\n");
		exit(0);
    default:
        printf("Você deve escolher uma opção válida\n");
        printf("Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        }
    }while(opcao != 4);
    return 0;
}
