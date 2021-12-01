#include <stdio.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y){
  COORD c;
  c.X = x;
  c.Y = y;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int letras[11][7]={{126, 32, 32, 32, 33, 18, 12}, /* letra J*/
                   { 28, 34, 65, 65, 65, 34, 28}, /* letra O*/
                   { 60, 66,  1,  1,113, 98, 92}, /* letra G*/
                   { 28, 34, 65, 65, 65, 34, 28}, /* letra O*/
                   { 31, 33, 65, 65, 65, 33, 31}, /* letra D*/
                   { 28, 34, 65, 65,127, 65, 65}, /* letra A*/
                   { 65, 65, 65, 34, 34, 20,  8}, /* letra V*/
                   { 63,  1,  1, 31,  1,  1, 63}, /* letra E*/
                   {  1,  1,  1,  1,  1,  1,127}, /* letra L*/
                   { 65, 65, 65,127, 65, 65, 65}, /* letra H*/
                   { 28, 34, 65, 65,127, 65, 65}};/* letra A*/

int tela_de_abertura(){
    int y1=3,x1=23,y2=y1,i,j,b,a;           /*y1=linha inicial  y2 para recuperar a linha inicial*/
    system("cls");
    for(i=0;i<11;i++){              /*  sao 10 letras  */
        if(i==4){y1=11;x1=10;y2=y1;}/*muda as letras para baixo*/
        if(i==6){y1=11;x1=30;y2=y1;}/*move a posição para frente*/
        for(j=0;j<7;j++){           /*o caractere é de 7 linhas */
            gotoxy(x1,y1);          /*posiciona o cursor na posição*/
            a=letras[i][j];             /*pega o numero da 1 linha do caractere */
            for(b=0;b<7;b++){       /*aqui é um numero de apenas 7 bits*/
                if(a % 2 != 0){printf("%c",219);}else{printf(" ");}/*se bit=1 coloca espaço invertido senão coloca espaço normal*/
                a=a/2;              /*dividindo numero por 2 desloca os bits para direita*/
            }
            y1++;                   /*muda para proxima linha*/
        }
        x1=x1+8;                    /*avança 8 colunas*/
        y1=y2;                      /*volta para linha inicial*/
    }
    printf(" %c",169);              /*imprime um caractere ®*/
    gotoxy(5,1);printf("%c",201);   /*╔*/
    for(i=2;i<23;i++){              /*para imprimir as bordas laterais*/
        gotoxy(5,i) ;printf("%c",186);/*║*/
        gotoxy(72,i);printf("%c",186);
    }
    for(i=6;i<72;i++){              /*para imprimir as bordas superiores e inferiores*/
        gotoxy(i,1) ;printf("%c",205);/*═*/
        gotoxy(i,23);printf("%c",205);
        gotoxy(i,19);printf("%c",205);
    }
    gotoxy(72,1) ;printf("%c",187); /*╗*/
    gotoxy(72,23);printf("%c",188); /*╝*/
    gotoxy(5,23) ;printf("%c",200); /*╚*/
    gotoxy(5,19) ;printf("%c",204); /*╠*/
    gotoxy(72,19);printf("%c",185); /*╣*/
    gotoxy(66,3) ;printf("%c%c%c",92,92,92);
    gotoxy(66,4) ;printf("(. .)" );
    gotoxy(66,5) ;printf("  -"   );
    return 0;
}
int main(){
    tela_de_abertura();
    getch();
    return 0;
}
