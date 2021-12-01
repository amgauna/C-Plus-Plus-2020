// BankDatabase.cpp
// Definições da função membro da classe BankDatabase.
#include "BankDatabase.h" // Definição da classe BankDatabase

// construtor padrão BankDatabase inicializa contas
BankDatabase::BankDatabase()
{
   // cria dois objetos Account para testar
   Account account1( 12345, 54321, 1000.0, 1200.0 );
   Account account2( 98765, 56789, 200.0, 200.0 );

   // adiciona os objetos Account ao vector accounts
   accounts.push_back( account1 ); // adiciona account1 ao fim de vector
   accounts.push_back( account2 ); // adiciona account2 ao fim de vetcor
} // fim construtor padrão BankDatabase 

// recupera o objeto Account que contém o número de conta especificado
Account * BankDatabase::getAccount( int accountNumber )
{
   // faz um loop pelas contas procurando uma correspondência com o número de conta
   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      // retorna a conta atual se uma correspondência for localizada
      if ( accounts[ i ].getAccountNumber() == accountNumber )
         return &accounts[ i ];
   } // fim do for

   return NULL; // se nenhuma correspondência com uma conta foi encontrada, retorna NULL
} // fim da função getAccount

// determina se o número da conta e o PIN especificados pelo usuário correspondem
// àqueles de uma conta no banco de dados
bool BankDatabase::authenticateUser( int userAccountNumber, 
   int userPIN )
{
   // tenta recuperar a conta com o número da conta
   Account * const userAccountPtr = getAccount( userAccountNumber );

   // se a conta existir, retorna o resultado da função validatePIN de Account
   if ( userAccountPtr != NULL )
      return userAccountPtr->validatePIN( userPIN );
   else
      return false; // número de conta não foi localizado, portanto retorna false
} // fim da função authenticateUser

// retorna o saldo disponível de Account com o número da conta especificado
double BankDatabase::getAvailableBalance( int userAccountNumber )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   return userAccountPtr->getAvailableBalance();
} // fim da função getAvailableBalance

// retorna o saldo total de Account com o número da conta especificado
double BankDatabase::getTotalBalance( int userAccountNumber )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   return userAccountPtr->getTotalBalance();
} // fim da função getTotalBalance

// credita uma quantia a Account com o número da conta especificado
void BankDatabase::credit( int userAccountNumber, double amount )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   userAccountPtr->credit( amount );
} // fim da função credit

// debita uma quantidade da Account com o número da conta especificado
void BankDatabase::debit( int userAccountNumber, double amount )
{
   Account * const userAccountPtr = getAccount( userAccountNumber );
   userAccountPtr->debit( amount );
} // fim da função debit


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
