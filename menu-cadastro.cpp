#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> /*// Biblioteca de acentuação*/
#include <windows.h> /*// Biblioteca dos códigos do cmd*/
#include <iostream>
#include <fstream>
#include <string>

using System;
using System.io;  /*// include the System.IO namespace*/
var filename = System.IO.Path.GetFilename(fullPath);

using namespace std; 

struct registro {
  char nome[40];
  char endereco[40];
  float valor;
} matriz[100];

main()
{ 
  char escolha;
  inicia_matriz();
  for (;;) {
    escolha = menu();
    switch (escolha) {
      case 'i' : 
        inserir();
        break;
      case 'e' :
        exibir();
        break;
      case 'c' :
        carga();
        break;
      case 's' :
        salvar();
        break;
      case 'f' :
        saida();
    }    
  }
puts(escolha);
}

saida()
{
  cls();
  exit();
}

inicia_matriz()
{
  int t;
  for (t=0;t<100;t++) *matriz[t].nome = '\0';
}  

menu()
{
  char s;
  cls();
  do {
     puts("Inserir");
     puts("Exibir");
     puts("Carregar");
     puts("Salvar");
     puts("Finaliza");
     printf("Digite a 1a. Letra: ");
     scanf("%c",&s);
   } while(s != 'i' && s != 'e' && s != 'c' && s != 's' && s != 'f');
   return(s);
}

inserir()
{
  int i;
  for (i=0; i < 100; i++) 
    if (!*matriz[i].nome) break;
  if (i==100) {
    puts("Arquivo Cheio!");
    return;
  }
  printf("Nome: "); gets(matriz[i].nome); 
  printf("End.: "); gets(matriz[i].endereco); 
  printf("Val.: "); scanf("%f",&matriz[i].valor); 
}

exibir()
{
  char x;
  int t;
  cls();
  for(t=0;t<100;t++) {
    if (*matriz[t].nome) {
       printf("%s \n", matriz[t].nome);
       printf("%s \n", matriz[t].endereco);
       printf("%f \n", matriz[t].valor);
       puts(" "); puts("<Enter> para prosseguir!");
       x = getchar();
       }
    else
      break;
  }
} 

salvar()
{
  FILE *fp;
  int i;
  if ((fp=fopen("LISTA.DAT","wb"))==NULL) {
     puts("Falhou Abertura! ");
     return;
  }
  for (i=0;i<100;i++)
    if (*matriz[i].nome)
       if (fwrite(&matriz[i],sizeof(struct registro), 1,fp) != 1)
          puts("Falha na Gravacao! ");
   fclose(fp);
}

carga()
{
  FILE *fp;
  int i;
  if ((fp=fopen("LISTA.DAT","rb")) == NULL) {
     puts("Falha na Abertura do Arquivo!");
     return;
   }
   inicia_matriz();
   for (i=0; i < 100; i++)
     if (fread(&matriz[i], sizeof(struct registro), 1, fp) != 1) {
        if (feof(fp)) {
           fclose(fp);
           return;
         }
     else 
        {
          puts("Erro de Leitura! ");
          fclose(fp);
          return;
        }
     }     
}

