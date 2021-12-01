// Fig. E.9: figE_09.cpp
// Utilizando uma union anônima.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   // declara uma union anônima                                        
   // os membros integer1, double1 e charPtr compartilham o mesmo espaço
   union                                                               
   {                                                                   
      int integer1;                                                    
      double double1;                                                  
      char *charPtr;                                                   
   };  // fim da union anônima                                         

   // declara as variáveis locais
   int integer2 = 1;
   double double2 = 3.3;
   char *char2Ptr = "Anonymous";

   // atribui o valor a cada membro union
   // sucessivamente e imprime cada um
   cout << integer2 << ' ';
   integer1 = 2;
   cout << integer1 << endl;

   cout << double2 << ' ';
   double1 = 4.4;
   cout << double1 << endl;

   cout << char2Ptr << ' ';
   charPtr = "union";
   cout << charPtr << endl;

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
