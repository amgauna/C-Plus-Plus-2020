// Fig. E.2: figE_02.cpp
// Utilizando listas de argumentos de comprimento variável.
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setprecision;
using std::setiosflags;
using std::fixed;

#include <cstdarg>
using std::va_list;

double average( int, ... );

int main()
{
   double double1 = 37.5;
   double double2 = 22.5;
   double double3 = 1.7;
   double double4 = 10.2;

   cout << fixed << setprecision( 1 ) << "double1 = " 
        << double1 << "\ndouble2 = " << double2 << "\ndouble3 = "
        << double3 << "\ndouble4 = " << double4 << endl
        << setprecision( 3 ) 
        << "\nThe average of double1 and double2 is " 
        << average( 2, double1, double2 )
        << "\nThe average of double1, double2, and double3 is " 
        << average( 3, double1, double2, double3 ) 
        << "\nThe average of double1, double2, double3"
        << " and double4 is " 
        << average( 4, double1, double2, double3, double4 ) 
        << endl;
   return 0;
}  // fim de main

// calcula a média
double average( int count, ... )
{
   double total = 0;
   va_list list;  // para armazenar informações necessárias a va_start
 
   va_start( list, count );

   // processa lista de argumentos de comprimento variável
   for ( int i = 1; i <= count; i++ )
      total += va_arg( list, double );

   va_end( list ); // fim de va_start
   return total / count;
}  // fim da função average


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
