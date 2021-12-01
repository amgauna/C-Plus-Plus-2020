#include <stdio.h> // Biblioteca de entrada e saída de dados
#include <stdlib.h> // Biblioteca de conversão das strings
#include <conio.h> // Biblioteca de manipulação de caracteres
#include <locale.h> // Biblioteca de acentuação de caracteres
#include <windows.h> // Biblioteca dos códigos do cmd

int a,b,L,L2; // Declaração das váriaveis das setas
int co,L3,L4; // Novas declarações do menu

void gotoxy(int x,int y){
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

int main() {
    /* MENU */
    int opcao;
    setlocale(LC_ALL, "Portuguese"); // Definindo português como linguagem padrão
    SetConsoleTitle("Maze Escape"); // Título do programa
    do{
        inicio:
        opcao=0;
        L=2;L2=2;b=2;
        system("cls"); // Limpar a tela dos comandos anteriores
        system("color 1F"); // Definindo a cor do fundo e a letra no cmd
        printf("Dica: Precione a tecla ESQ a qualquer momento para voltar para o menu principal!");


        gotoxy(15,11); printf("    /\\        /\\          /\\      =======    =======");
        gotoxy(15,12); printf("   /  \\      /  \\        /  \\         //     ||     ");
        gotoxy(15,13); printf("  /    \\    /    \\      /====\\       //      =======");
        gotoxy(15,14); printf(" /      \\  /      \\    /      \\     //       ||     ");
        gotoxy(15,15); printf("/        \\/        \\  /        \\   =======   =======");

        gotoxy(12,17); printf("=======  =======   =======      /\\      =======   ======= ");
        gotoxy(12,18); printf("||       ||        ||          /  \\     ||        ||   || ");
        gotoxy(12,19); printf("=======  =======   ||         /====\\    =======   ======= ");
        gotoxy(12,20); printf("||            ||   ||        /      \\   ||        ||      ");
        gotoxy(12,21); printf("=======  ======    =======  /        \\  =======   ||      ");

        gotoxy(2,24);  printf("JOGAR");
        gotoxy(12,24);  printf("RANKING - PONTOS");
        gotoxy(35,24);  printf("RANKING - TEMPO");
        gotoxy(58,24);  printf("CRÉDITOS");
        gotoxy(72,24);  printf("SAIR");

        /*modificando o valor de co muda a coluna de inicio do menu que pose ser de zero ate 63*/
        /*modificando o valor de L muda a linha de inicio do menu que pode ser de zero ate 20*/
        opcao=0;co=0;/*co é a coluna onde colocar a seta*/
        L=3;/*L é a linha onde fica as opções, mudando as opções p/baixo mude o valor de L igual*/
        L2=L;    /*L2 é onde estava a seta */
        L3=L+4;  /*L3 é a linha final do menu*/
        L4=L;    /*L4 é a linha de inicio do menu*/
        system("color 1F"); /*// Definindo a cor do fundo e a letra no cmd*/

        gotoxy(co+5,L);     // co é a coluna de inicio do menu e L é a linha de inico do menu
        printf("1 - JOGAR");
        gotoxy(co+5,L+1);
        printf("2 - RANKINGS POR PONTOS");
        gotoxy(co+5,L+2);
        printf("3 - RANKING POR TEMPO");
        gotoxy(co+5,L+3);
        printf("4 - CREDITOS");
        gotoxy(co+5,L+4);
        printf("5 - SAIR\n");

        do{                       /*loop para movimentar a seta*/
            gotoxy(co+2,L);       /*gotoxy posiciona o cursor, o co é a coluna e L é a linha onde imprimir a seta*/
            printf("-%c",16);     /*imprime a seta*/
            gotoxy(0,23);         /*posiciona o cursor fora da tela para ele não ficar piscando*/
            if(kbhit){a=getch();} /*se alguma tecla foi pressionada a igual a tecla*/
            if(a == 80){          /*80 é valor do cactere seta p/baixo do teclado*/
                L2=L;             /*L2 é posição onde estava a seta para apagar senao fica duas setas*/
                L++;              /*L aponta para a nova posição da seta*/
                if(L>L3){L=L4;}   /*L vai de 2 ate 5 pois é onde estão as 4 opções, mudando mude tambem os valores*/
            }                     /*a seta estando no 4 e for movida p/baixo ela vai para a primeira opção*/
            if(a == 72){          /*72 é valor do cactere seta p/cima do teclado*/
                L2=L;             /*L2 é onde estava a seta para apagar*/
                L--;              /*L aponta para a nova posição da seta*/
                if(L<L4){L=L3;}   /*a seta estando no 1 e for movida p/cima ela vai para a ultima opção*/
            }
            if(L!=L2){            /*se a seta for movida */
                gotoxy(co+2,L2);  /*posicione o cursor onde estava a seta*/
                printf("  ");     /*imprime espaços em branco(que sao pretos) em cima da seta para apaga-la*/
                L2=L;             /*L2 igual a nova posição da seta*/
            }
            if(a == 13){          /*se a tecla enter for pressionada*/
                opcao=L-(L4-1);        /*opcao igual a linha onde esta a opção menos um, pois a primeira opção */
                                  /*esta na linha 2*/
            }
        }while(opcao == 0);       /*repete enquanto opcao igual a zero*/

    switch (opcao) {
    case 1:
        system("cls");
        printf("AQUI É O GAME\n");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 2:
        system("cls");
        printf("Ranking por pontos\n");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 3:
        system("cls");
        printf("Ranking por tempo\n");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 4:
        system("cls");
        printf("Aqui é Os Créditos\n");
        do{
            if(kbhit){a=getch();}
        }while(a != 27);
        break;
    case 5:
        system("cls");
        printf("Você pediu para sair, fechando programa...");
        for(a=0;a<10;a++){
            printf(".");
            Sleep(300);
        }
        printf("!\n\n");
		exit(0);
    default:
        system("cls");
        printf("Você deve escolher uma opção válida\n");
        printf("Precione qualquer tecla para voltar ao menu\n");
        system("pause");
        goto inicio;
        }
    }while(opcao!=5);
}
para ver qual o valor de cada tecla você pode usar esse código aqui :

#include <stdio.h>
#include <conio.h>
int a,b;
int main(){
    do{
        if(b!=224)printf("Digite Um Tecla Ou Tecle ESC Para Parar\n\n");
        b=getch();
        if(b!=224)printf("O Valor Da Tecla é = %d\n\n",b);
        if(b==27){a=1;}
    }while(a==0);
    return 0;
}
