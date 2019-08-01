#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define conta_adm "root"
#define senha_adm "root"
void login_adm();
void menu_login_inicial();
struct cadastro{
   char user[20];
   char pass[20];
   int codigo;
}usuario[1000],admin[20],cadastro_user[1000];

int validar_login_usuario(int a,int c)
{
   char verifica_login[20],usuario1[20];
   int r;

   memcpy(verifica_login,usuario[c].user,50);
   memcpy(usuario1,cadastro_user[a].user,50);
   if (strcmp(verifica_login,usuario1)==0)
   {
       r = 1; //usuario ja existe
   }
   else r = 0; //usuario nao existe
   return (r);
}

void cadastro_cliente(int a)
{
   int b = 0,c;
   system("cls");
   usuario[a].codigo = a+1;
   printf("\n\tCadastro %d",usuario[a].codigo);
   puts("\n\n\tDigite o login: ");
   printf("\t");
   scanf(" %s",cadastro_user[a].user);
   if (b==0)
   {
       for (c=0;c<1000;c++)
       {
           b = validar_login_usuario(a,c);
           if (b==1)
           {
               printf("\nLogin ja existente!\n");
               break;
           }
       }
       if (b==0)
       {
           puts("\tDigite a senha: ");
           printf("\t");
           scanf(" %s",usuario[a].pass);
       }
   }
}

void cadastro_administrador(int a)
{
   system("cls");
   admin[a].codigo = a+1;
   printf("\n\tCadastro %d",admin[a].codigo);
   puts("\n\n\tDigite o login: ");
   printf("\t");
   scanf(" %s",admin[a].user);
   puts("\tDigite a senha: ");
   printf("\t");
   scanf(" %s",admin[a].pass);
   system("cls");
}

void logar_usuario()
{
   int c;
   int logado;
   char login[1][20], senha[1][20];
   char fechar_login[] = {"EXIT"}, fechar_senha[] = {"EXIT"};

   erro_login:

   printf("\n\tPara fechar digite o usuario e a senha EXIT em maiusculo\n");
   printf("\n\tLogon\n");
   printf("\n\tLogin: ");
   scanf(" %s",login[0]);
   printf("\n\tSenha: ");
   scanf(" %s",senha[0]);

   if ((strcmp(login[0],fechar_login)==0)&&(strcmp(senha[0],fechar_senha)==0)) exit(0);
   else
   {
       for (c=0;c<1000;c++)
       {
           if ((strcmp(login[0],usuario[c].user)!=0) || (strcmp(senha[0],usuario[c].pass)!=0))
           {
               logado = 1; //login e/ou senha incorretos
           }
           else if((strcmp(login[0],usuario[c].user)==0) && (strcmp(senha[0],usuario[c].pass)==0))
               {
                   logado = 2; //logado com sucesso
                   break;
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
}
void logar_adm()
{
   int c;
   int logado;
   char login[1][20], senha[1][20];
   char fechar_login[] = {"EXIT"}, fechar_senha[] = {"EXIT"};

   erro_login:

   printf("\n\tPara fechar digite o usuario e a senha EXIT em maiusculo\n");
   printf("\n\tLogon\n");
   printf("\n\tLogin: ");
   scanf(" %s",login[0]);
   printf("\n\tSenha: ");
   scanf(" %s",senha[0]);

   if ((strcmp(login[0],conta_adm)==0)&&(strcmp(login[0],senha_adm)==0)) logado = 2;
   else if ((strcmp(login[0],fechar_login)==0)&&(strcmp(senha[0],fechar_senha)==0)) exit(0);
   else
   {
       for (c=0;c<1000;c++)
       {
           if ((strcmp(login[0],admin[c].user)!=0) || (strcmp(senha[0],admin[c].pass)!=0))
           {
               logado = 1; //login e/ou senha incorretos
           }
           else if((strcmp(login[0],admin[c].user)==0) && (strcmp(senha[0],admin[c].pass)==0))
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
           printf("\n\tLogado com sucesso!\n\n\tBem-vindo(a) %s\n",login[0]);
          // printf("Codigo do ADMIN: %d\n\n",admin[c].codigo);
           login_adm();
       }
}

void login_adm()
{
   int op_adm;
   int a=0,adm_cad=0,b,c,nc;

   tela_inicial_adm:
       printf("\n\t1- Cadastro de usuarios\n");
       printf("\n\t2- Cadastro de administradores\n");
       printf("\n\t9- Voltar a tela de login\n");
       printf("\n\t0- Fechar\n");
       printf("\t");
       scanf("%d", &op_adm);
       system("cls");
       if (op_adm == 1)
       {
           printf("\nQuantos cadastros deseja fazer? \n");
           scanf("%d",&nc);
           if (a==0)
           {
               for (a=0;a<nc;a++)
               {
                   cadastro_cliente(a);
               }
               goto tela_inicial_adm;
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
               goto tela_inicial_adm;
           }
   }
   else if (op_adm == 2)
   {
       printf("\nQuantos cadastros deseja fazer? \n");
       scanf("%d",&nc);
       if (adm_cad==0)
       {
       for (adm_cad=0;adm_cad<nc;adm_cad++)
       {
           cadastro_administrador(adm_cad);
       }
       goto tela_inicial_adm;
       }
       else if (adm_cad!=0)
       {
           b = adm_cad;
           c = adm_cad+nc-1;
           printf("\n%d\n",a);
           for (adm_cad=b;adm_cad<=c;adm_cad++)
           {
               cadastro_administrador(adm_cad);
           }
           goto tela_inicial_adm;
       }
   }
   else if (op_adm == 0) exit(0);
   else if (op_adm == 9) menu_login_inicial();
}

void menu_login_inicial()
{
   int op_login;

   menu_de_login:
   printf("1- Login de USUARIO\n");
   printf("2- Login de ADMINISTRADOR\n");
   printf("0- FECHAR\n");
   scanf(" %d",&op_login);
   if (op_login==1) logar_usuario();
   else if (op_login==2) logar_adm();
   else if (op_login==0) exit(0);
   else
   {
       system("cls");
       printf("Opcao invalida!\n");
       goto menu_de_login;
   }
}

int main(void)
{
   menu_login_inicial();
   return 0;
}