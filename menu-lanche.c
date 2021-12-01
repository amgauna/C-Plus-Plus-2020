#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 
main ()
{


  printf("Item Produto Codigo preço Unitario\n\n"); 


  printf(" 1 Cachorro-Quente 100 R$ 5,00\n"); 


  printf(" 2 X-Salada 101 R$ 8,79\n");


  printf(" 3 X-Bacon 102 R$ 9,99\n");


  printf(" 4 Misto 103 R$ 6,89\n");


  printf(" 5 Salada 104 R$ 4,80\n");


  printf(" 6 Agua 105 R$ 3,49\n");


  printf(" 7 Refrigerante 106 R$ 4,99\n\n\n");

 

  int item=1,item2=1, item3=1,qntd; 


  float custofinal=0; 


  


  printf("\n\n Para cancelar ou encerrar seu pedido, digite 0 em três opções seguidas!\n\n"); 


  


  while(item!=0) 


  {


    printf("Qual item deseja? Digite o numero:"); 


     scanf("%i", &item);


printf("Qual seu segundo item? Digite o numero:");


     scanf("%i", &item2);


printf("qual seu terceiro item? Digite o numero:");


     scanf("%i", &item3);


  


   switch (item)


    {


      case 1:


      printf("Agora, digite a quantidade para o primeiro item: "); 


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*5.00); 


      break; 


      


      case 2:


      printf("Agora, digite a quantidade para o primeiro item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*8.79);


      break;


      


      case 3:


      printf("Agora, digite a quantidade para o primeiro item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*9.99);


      break;


      


      case 4:


      printf("Agora, digite a quantidade para o primeiro item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*6.89);


      break;


      


      case 5:


      printf("Agora, digite a quantidade para o primeiro item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*4.89);


      break;


      


      case 6:


      printf("Agora, digite a quantidade para o primeiro item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*3.49);


      break;


      


      case 7:


      printf("Agora, digite a quantidade para o primeiro item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*4.99);


      break;

 

default:


        item=0; 


        break;


    }

 

switch (item2)


    {


      case 1:


      printf("Agora, digite a quantidade para seu segundo item: "); 


scanf("%i", &qntd);


      custofinal=custofinal+(qntd*5.00); 


      break; // essa função é para parar o case 1 e pular ao próximo, continuando a operação


      


      case 2:


      printf("Agora, digite a quantidade para seu segundo item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*8.79);


      break;


      


      case 3:


      printf("Agora, digite a quantidade para seu segundo item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*9.99);


      break;


      


      case 4:


      printf("Agora, digite a quantidade para seu segundo item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*6.89);


      break;


      


      case 5:


      printf("Agora, digite a quantidade para seu segundo Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*4.89);


      break;


      


      case 6:


      printf("Agora, digite a quantidade para seu segundo Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*3.49);


      break;


      


      case 7:


      printf("Agora, digite a quantidade para seu segundo Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*4.99);


      break;

 

default:


        item=0;


        break;


    }

 

switch (item3)


    {


      case 1:


      printf("Agora, digite a quantidade para seu terceiro Item: "); // os "case" mostram as opções escolhidas pelo usuario e após, é indicado a quantidade desejada do item


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*5.00); 


      break; // essa função é para parar o case 1 e pular ao próximo, continuando a operação


      


      case 2:


      printf("Agora, digite a quantidade para seu terceiro Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*8.79);


      break;


      


      case 3:


      printf("Agora, digite a quantidade para seu terceiro Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*9.99);


      break;


      


      case 4:


      printf("Agora, digite a quantidade para seu terceiro Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*6.89);


      break;


      


      case 5:


      printf("Agora, digite a quantidade para seu terceiro Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*4.89);


      break;


      


      case 6:


      printf("Agora, digite a quantidade para seu terceiro Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*3.49);


      break;


      


      case 7:


      printf("Agora, digite a quantidade para seu terceiro Item: ");


      scanf("%i", &qntd);


      custofinal=custofinal+(qntd*4.99);


     break;


 

 

} //laço switch case

 

   } //laço while

 

printf ("\n\nProdutos Quantidade Valor\n");


printf ("Agua 3 R$ 10,47\n");


printf ("X-bacon 1 R$ 9.99\n");


printf ("X-bacon 3 R$ 19.98\n");


  printf(" \n O seu pedido N° RU 633312 foi concluido com sucesso, obrigado pela preferencia! \n\n\n Valor a pagar: R$ %.2f", custofinal);


    printf("\n\n BOM APETITE!"); 


 


  getchar ();


  printf ("\n\n\n");


  system("pause"); 


  return (0);


}
