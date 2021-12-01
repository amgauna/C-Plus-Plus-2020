#include <stdio.h>

int main(){
        char txt[2],x;

        printf("Digite uma direcao: \n");
        x = getchar();    //Obtem a tecla
        scanf("\r%s",txt);//Obtem a linha
        x = txt[1];

        switch(x){
                case 'A':
                        printf("CIMA!!\n");
                        break;
                case 'D':
                        printf("ESQUERDA!!\n");
                        break;
                case 'B':
                        printf("BAIXO!!\n");
                        break;
                case 'C':
                        printf("DIREITA!!\n");
                        break;
                default:
                        printf("Direcao nao identificada!\n");
                        break;
        }
        return 0;
}
