// Fig. E.3: figE_03.cpp
// Utilizando argumentos de linha de comando
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <fstream>
using std::ifstream;
using std::ofstream;

int main( int argc, char *argv[] )
{
   // verifica número de argumentos de linha de comando
   if ( argc != 3 )
      cout << "Usage: copyFile infile_name outfile_name" << endl;
   else
   {
      ifstream inFile( argv[ 1 ], ios::in );

      // arquivo de entrada não pôde ser aberto
      if ( !inFile )
      {
         cout << argv[ 1 ] << " could not be opened" << endl;
         return -1;
      }  // fim do if

      ofstream outFile( argv[ 2 ], ios::out );

      // arquivo de saída não pôde ser aberto
      if ( !outFile )
      {
         cout << argv[ 2 ] << " could not be opened" << endl;
         inFile.close();
         return -2;
      } // fim do if

      char c = inFile.get(); // lê o primeiro caractere

      while ( inFile )
      {
         outFile.put( c );   // caractere de saída
         c = inFile.get();   // lê o próximo caractere
      }  // fim do while
   }  // fim do else

   return 0;
}  // fim de main


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
