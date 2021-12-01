// Transaction.cpp
// Definições de função membro da classe Transaction.
#include "Transaction.h" // Definição da classe Transaction
#include "Screen.h" // Definição da classe Screen
#include "BankDatabase.h" // Definição da classe BankDatabase

// o construtor inicializa recursos comuns de todas as Transactions
Transaction::Transaction( int userAccountNumber, Screen &atmScreen, 
   BankDatabase &atmBankDatabase )
   : accountNumber( userAccountNumber ),
     screen( atmScreen ),
     bankDatabase( atmBankDatabase )
{
   // corpo vazio
} // fim do construtor de Transaction

// retorna o número da conta
int Transaction::getAccountNumber() const
{
   return accountNumber; 
} // fim da função getAccountNumber

// retorna a referência à tela
Screen &Transaction::getScreen() const
{
   return screen;
} // fim da função getScreen

// retorno a referência ao banco de dados de instituição financeira
BankDatabase &Transaction::getBankDatabase() const
{
   return bankDatabase;
} // fim da função getBankDatabase


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
