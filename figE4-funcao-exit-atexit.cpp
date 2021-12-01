// Fig. E.4: figE_04.cpp
// Utilizando as funções exit e atexit
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>
using std::atexit;
using std::exit;

void print();

int main()
{
   atexit( print ); // registra função print

   cout << "Enter 1 to terminate program with function exit" 
        << "\nEnter 2 to terminate program normally\n";

   int answer;
   cin >> answer;

   // encerra se a resposta for 1
   if ( answer == 1 )
   {
      cout << "\nTerminating program with function exit\n";
      exit( EXIT_SUCCESS );
   }  // fim do if

   cout << "\nTerminating program by reaching the end of main"
        << endl;

   return 0;
}  // fim de main

// exibe a mensagem antes da terminação                      
void print()                                                 
{                                                            
   cout << "Executing function print at program termination\n"
        << "Program terminated" << endl;                     
}  // fim da função print                                    


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
