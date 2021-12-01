int main() {
    int opcao;
    int ranking,ranking1,ranking2,ranking3,ranking4,ranking5,ranking6,ranking7,ranking8,ranking9,ranking10; /*// Sistema de Ranking*/
    setlocale(LC_ALL, "Portuguese"); /*// Definindo português brasileiro como linguagem dentro de printf*/
do{
        inicio:
        system("cls"); /*// Limpar a tela dos comandos anteriores*/
        printf("\nDica: Precione a tecla ESQ a qualquer momento para voltar para o menu principal!\n");

        gotoxy(30, 8); printf("                                  __ _____\n");
        gotoxy(30, 9); printf("    /\\        /\\          /\\           /   |     \n");
        gotoxy(30,10); printf("   /  \\      /  \\        /  \\         /    |     \n");
        gotoxy(30,11); printf("  /    \\    /    \\      /_\\       /     |__\n");
        gotoxy(30,12); printf(" /      \\  /      \\    /      \\     /      |     \n");
        gotoxy(30,13); printf("/        \\/        \\  /        \\   /__  |__\n");
        gotoxy(30,14); printf(" __    ___   ___                 __   __\n");
        gotoxy(30,15); printf("|         |         |              /\\       |     | |     \n");
        gotoxy(30,16); printf("|         |         |             /  \\      |     | |     \n");
        gotoxy(30,17); printf("|__    |__   |            /_\\     |__| |__\n");
        gotoxy(30,18); printf("|               |   |           /      \\    |       |     \n");
        gotoxy(30,19); printf("|__    __|   |__   /        \\   |       |___\n");



        gotoxy(10,24);  printf("JOGAR");
        gotoxy(30,24);  printf("RANKING");
        gotoxy(50,24);  printf("CRÉDITOS");
        gotoxy(70,24);  printf("SAIR");

        /*modificando o valor de co muda a coluna de inicio do menu que pose ser de zero ate 63*/
        /*modificando o valor de L muda a linha de inicio do menu que pode ser de zero ate 20*/
        opcao=0;co=0;/*co é a coluna onde colocar a seta*/
        L=3;/*L é a linha onde fica as opções, mudando as opções p/baixo mude o valor de L igual*/
        L2=L;    /*L2 é onde estava a seta */
        L3=L+3;  /*L3 é a linha final do menu*/
        L4=L;    /*L4 é a linha de inicio do menu*/
        system("color 0F"); /*// Definindo a cor do fundo e a letra no cmd*/
        gotoxy(co+5,L);     /*co é a coluna de inicio do menu e L é a linha de inico do menu*/
        printf("1 - JOGAR");
        gotoxy(co+5,L+1);
        printf("2 - RANKINGS");
        gotoxy(co+5,L+2);
        printf("3 - CREDITOS");
        gotoxy(co+5,L+3);
        printf("4 - SAIR\n");
        do{   /*loop para movimentar a seta*/
            gotoxy(co,L);/*gotoxy posiciona o cursor, o co é a coluna e L é a linha onde imprimir a seta*/
            printf("  -%c",16);   /*imprime a seta*/
            gotoxy(0,24);         /*posiciona o cursor fora da tela para ele não ficar piscando*/
            if(kbhit){a=getch();} /*se alguma tecla foi pressionada a igual a tecla*/
            if(a == 80){          /*80 é valor do cactere seta p/baixo do teclado*/
                L2=L;             /*L2 é posição onde estava a seta para apagar senao fica duas setas*/
                L++;              /*L aponta para a nova posição da seta*/
                if(L>L3){L=L4;}     /*L vai de 2 ate 5 pois é onde estão as 4 opções, mudando mude tambem os valores*/
            }                     /*a seta estando no 4 e for movida p/baixo ela vai para a primeira opção*/
            if(a == 72){          /*72 é valor do cactere seta p/cima do teclado*/
                L2=L;             /*L2 é onde estava a seta para apagar*/
                L--;              /*L aponta para a nova posição da seta*/
                if(L<L4){L=L3;}     /*a seta estando no 1 e for movida p/cima ela vai para a ultima opção*/
            }
            if(L!=L2){            /*se a seta for movida */
                gotoxy(co,L2);     /*posicione o cursor onde estava a seta*/
                printf("    ");   /*imprime espaços em branco(que sao pretos) em cima da seta para apaga-la*/
                L2=L;             /*L2 igual a nova posição da seta*/
            }
            if(a == 13){          /*se a tecla enter for pressionada*/
                opcao=L-(L4-1);        /*opcao igual a linha onde esta a opção menos um, pois a primeira opção */
                                  /*esta na linha 2*/
            }
        }while(opcao == 0);       /*repete enquanto opcao igual a zero*/
