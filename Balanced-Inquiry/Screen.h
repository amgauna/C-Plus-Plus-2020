// Screen.h
// Definição da classe Screen. Representa a tela do ATM.
#ifndef SCREEN_H
#define SCREEN_H

#include <string>
using std::string;

class Screen
{
public:
   void displayMessage( string ) const; // gera saída de uma mensagem
   void displayMessageLine( string ) const; // gera saída da mensagem com nova linha
   void displayDollarAmount( double ) const; // gera saída de um valor em dólar
}; // fim da classe Screen

#endif // SCREEN_H


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
