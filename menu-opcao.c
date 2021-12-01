#include conio.h
#include stdio.h 
void main()
{

int escolha=1;

// se a escolha for diferente de 5, ele continua... o que inicialmente é verdade
// pois escolha é igual a 1
while (escolha!=5)
{

printf("\n\n ----------------------- ");

printf("\n 1 - Opcao 1 ");
printf("\n 2 - Opcao 2 ");
printf("\n 3 - Opcao 3 ");
printf("\n 4 - Opcao 4 ");
printf("\n 5 - Fechar Programa ");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);


// estrutura switch
switch (escolha) {

case 1:
{

// a função clrscr(); é para limpar a tela
clrscr();
printf("\n\n Opcao escolhida: 1 ");

break;
}

case 2:
{
clrscr();
printf("\n\n Opcao escolhida: 2 ");
break;
}

case 3:
{
clrscr();
printf("\n\n Opcao escolhida: 3 ");
break;
}

case 4:
{
clrscr();
printf("\n\n Opcao escolhida: 4 ");
break;
}

// opção padrão
default:
{
clrscr();

// se for escolhida a opção 5, ele pula o while utilizando continue para isso 
if( escolha==5)
{
continue;
}
// caso o usuário digite um numero acima de 5, ele irá informar que nao existe essa opção
printf("\n\n Nenhuma opcao foi escolhida ");
break;
}

}

}

if( escolha==5)
printf("\n\n O Programa foi fechado");

getch(); 

}
