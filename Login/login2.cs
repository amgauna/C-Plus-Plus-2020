#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>
#include <string> // Necessário para usar strings

using namespace std;


int main()
{  int c,a,x,i,id;

   char login[id];
   char senha[id];

   string login1[id]={"Henrique"};
   char senha1[id]={"123456"};


   *login1="Henrique"->login[id];
   *senha1="123456"->senha[id];

    printf("Digite o Login\n");
    scanf("%s",login[id]);
    x = strcmp(login[id],lg1[id]);
    if (x == 0) {
    printf("digite sua senha");
    scanf("%s",senha[id]);
    a = strcmp(senha[id],senha1[id]);
                }
    if (a != 0) { 
        for (i=0;i<3;i++)
           { printf("Digite sua senha");
             scanf("%c",senha[id]);
             if (senha != senha1[id]);
           }  }
          printf("Procure saber a senha");
    if (a == 0)
    printf("Acesso autorizado");
}
