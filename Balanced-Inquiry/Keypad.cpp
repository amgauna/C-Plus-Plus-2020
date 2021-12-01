// Keypad.cpp
// Definição da função membro da classe Keypad (o teclado do ATM).
#include <iostream>
using std::cin;

#include "Keypad.h" // Definição da classe Keypad

// retorna um valor de inteiro inserido pelo usuário
int Keypad::getInput() const
{
   int input; // variável para armazenar a entrada
   cin >> input; // supomos que o usuário insira um inteiro
   return input; // retorna o valor inserido pelo usuário
} // fim da função getInput


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
