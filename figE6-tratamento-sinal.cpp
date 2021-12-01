// Fig. E.6: figE_06.cpp
// Utilizando o tratamento de sinal
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <csignal>
using std::raise;
using std::signal;

#include <cstdlib>
using std::exit;
using std::rand;
using std::srand;

#include <ctime>
using std::time;

void signalHandler( int );

int main()
{
   signal( SIGINT, signalHandler );
   srand( time( 0 ) );
   
   // cria e gera saída de números aleatórios
   for ( int i = 1; i <= 100; i++ )
   {
      int x = 1 + rand() % 50;
      
      if ( x == 25 )
         raise( SIGINT ); // levanta SIGINT quando x é 25
         
      cout << setw( 4 ) << i;

      if ( i % 10 == 0 )
         cout << endl; // gera saída de endl quando i é um múltiplo de 10
   } // fim do for

   return 0;
} // fim de main

// trata o sinal
void signalHandler( int signalValue )
{
   cout << "\nInterrupt signal (" << signalValue
        << ") received.\n"
        << "Do you wish to continue (1 = yes or 2 = no)? ";

   int response;  

   cin >> response;

   // verifica respostas inválidas
   while ( response != 1 && response != 2 )
   {
      cout << "(1 = yes or 2 = no)? ";
      cin >> response;
   }  // fim do while
   
   // determina se é hora de sair
   if ( response != 1 )
      exit( EXIT_SUCCESS );

   // chama signal e lhe passa SIGINT e o endereço de signalHandler
   signal( SIGINT, signalHandler );                               
}  // fim da função signalHandler


/**************************************************************************
 * (C) Copyright 1992-2005 Deitel & Associates, Inc. e                    *
 * Pearson Education, Inc. Todos os direitos reservados                   *
 *                                                                        *
 * NOTA DE ISENÇÃO DE RESPONSABILIDADES: Os autores e o editor deste      *
 * livro empregaram seus melhores esforços na preparação do livro. Esses  *
 * esforços incluem o desenvolvimento, pesquisa e teste das teorias e     *
 * programas para determinar sua eficácia. Os autores e o editor não      *
 * oferecem nenhum tipo de garantia, explícita ou implicitamente, com     *
 * referência a esses programas ou à documentação contida nesses livros.  *
 * Os autores e o editor não serão responsáveis por quaisquer danos,      *
 * acidentais ou conseqüentes, relacionados com ou provenientes do        *
 * fornecimento, desempenho ou utilização desses programas.               *
 **************************************************************************/
