// Account.cpp
// Definições de função membro para a classe Account.
#include "Account.h" // Definição da classe Account

// O construtor Account inicializa os atributos
Account::Account( int theAccountNumber, int thePIN, 
   double theAvailableBalance, double theTotalBalance )
   : accountNumber( theAccountNumber ),
     pin( thePIN ),
     availableBalance( theAvailableBalance ),
     totalBalance( theTotalBalance )
{
   // corpo vazio
} // fim do construtor Account

// determina se um PIN especificado pelo usuário corresponde ao PIN em Account
bool Account::validatePIN( int userPIN ) const
{ 
   if ( userPIN == pin )
      return true;
   else
      return false;
} // fim da função validatePIN

// retorna o saldo disponível
double Account::getAvailableBalance() const
{
   return availableBalance;
} // fim da função getAvailableBalance

// retorna o saldo total
double Account::getTotalBalance() const
{
   return totalBalance;
} // fim da função getTotalBalance

// credita uma quantia à conta
void Account::credit( double amount )
{
   totalBalance += amount; // adiciona ao saldo total
} // fim da função credit

// debita uma quantia da conta
void Account::debit( double amount )
{
   availableBalance -= amount; // subtrai do saldo disponível
   totalBalance -= amount; // subtrai do saldo total
} // fim da função debit

// retorna o número da conta
int Account::getAccountNumber() const
{
   return accountNumber;  
} // fim da função getAccountNumber


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
