// BankDatabase.h
// Definição da classe BankDatabase. Representa o banco de dados do banco.
#ifndef BANK_DATABASE_H
#define BANK_DATABASE_H

#include <vector> // classe utiliza vector para armazenar objetos Account
using std::vector;

#include "Account.h" // Definição da classe Account

class BankDatabase
{
public:
   BankDatabase(); // o construtor inicializa as contas

   // determina se o número de conta e o PIN correspondem aos de uma Account
   bool authenticateUser( int, int ); // retorna true se a Account for autêntica

   double getAvailableBalance( int ); // obtém um saldo disponível
   double getTotalBalance( int ); // obtém o saldo total de uma Account
   void credit( int, double ); // adiciona o valor ao saldo de Account
   void debit( int, double ); // subtrai o valor do saldo de Account
private:
   vector< Account > accounts; // vector das Accounts do banco

   // função utilitária private
   Account * getAccount( int ); // obtém ponteiro para o objeto Account
}; // fim da classe BankDatabase

#endif // BANK_DATABASE_H


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
