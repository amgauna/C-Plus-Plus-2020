#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
   char user[20];
   char pass[20];
   int codigo;;
}usuario[1000];



void cadastro_cliente(int a)
{
   system("cls");
   usuario[a].codigo = a+1;
   printf("\n\tCadastro %d",usuario[a].codigo);
   puts("\n\n\tDigite o login: ");
   printf("\t");
   scanf(" %s",usuario[a].user);
   puts("\tDigite a senha: ");
   printf("\t");
   scanf(" %s",usuario[a].pass);
   system("cls");
}

void logar_sist()
{
   int c;
   int logado;
   char login[1][20], senha[1][20];

   erro_login:

   printf("\n\tLogon\n");
   printf("\n\tLogin: ");
   scanf(" %s",login[0]);
   printf("\n\tSenha: ");
   scanf(" %s",senha[0]);


   for (c=0;c<1000;c++)
   {
       if ((strcmp(login[0],usuario[c].user)!=0) || (strcmp(senha[0],usuario[c].pass)!=0))
       {
           logado = 1; //login e/ou senha incorretos
       }
       else if(strcmp(login[0],usuario[c].user)==0)
       {
           if (strcmp(senha[0],usuario[c].pass)==0)
           {
               logado = 2; //logado com sucesso
               break;
           }

       }
   }

   if (logado==1)
   {
       system("cls");
       printf("\nLogin e/ou senha incorreto(s)\n");
       printf("\nTente Novamente!\n");
       goto erro_login;
   }
   else if (logado==2)
   {
       system("cls");
       printf("\nLogado com sucesso!\n\nBem-vindo(a) %s\n",login[0]);
       printf("Codigo do usuario: %d\n\n",usuario[c].codigo);
   }
}

int main(void)
{
   int a = 0,b,c,nc;
   int logado;
   int op;
   int codigo[1000];

   tela_inicial:
   printf("1 - Cadastro\n");
   printf("2 - Logar\n");
   printf("3 - Fechar\n");
   scanf("%d", &op);
   system("cls");
   if (op == 1)
   {
       printf("\nQuantos cadastros deseja fazer? \n");
       scanf("%d",&nc);
       if (a==0)
       {
           for (a=0;a<nc;a++)
           {
               cadastro_cliente(a);
           }
           goto tela_inicial;
       }
       else if (a!=0)
       {
           b = a;
           c = a+nc-1;
           printf("\n%d\n",a);
           for (a=b;a<=c;a++)
           {
               cadastro_cliente(a);
           }
           goto tela_inicial;
       }

   }
   else if (op == 2) logar_sist();
   else if (op == 3) exit(0);

   return 0;
}
