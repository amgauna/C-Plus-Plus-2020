// Fig. E.8: figE_08.cpp
// Um exemplo de uma união.
#include <iostream>
using std::cout;
using std::endl;

// define a union Number 
union Number             
{                        
   int integer1;         
   double double1;       
};  // fim da union Number

int main()
{
   Number value; // variável de união

   value.integer1 = 100; // atribui 100 ao membro integer1

   cout << "Put a value in the integer member\n"
        << "and print both members.\nint:   " 
        << value.integer1 << "\ndouble: " << value.double1
        << endl;

   value.double1 = 100.0;  // atribui 100.0 ao membro double1

   cout << "Put a value in the floating member\n" 
        << "and print both members.\nint:   " 
        << value.integer1 << "\ndouble: " << value.double1
        << endl;

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
