// Screen.cpp
// Definições de função membro para a classe Screen.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "Screen.h" // Definição da classe Screen

// gera saída de uma mensagem sem uma nova linha
void Screen::displayMessage( string message ) const
{
   cout << message; 
} // fim da função displayMessage

// gera saída de uma mensagem com uma nova linha
void Screen::displayMessageLine( string message ) const
{
   cout << message << endl;   
} // fim da função displayMessageLine

// gera saída de um valor em dólar
void Screen::displayDollarAmount( double amount ) const
{
   cout << fixed << setprecision( 2 ) << "$" << amount;
} // fim da função displayDollarAmount


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
