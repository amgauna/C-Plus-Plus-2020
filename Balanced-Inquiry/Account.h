// Account.h
// Definição da classe Account. // Representa uma conta bancária
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( int, int, double, double ); // o construtor configura atributos
   bool validatePIN( int ) const; // o PIN especificado pelo usuário é correto?
   double getAvailableBalance() const; // retorna o saldo disponível
   double getTotalBalance() const; // retorna saldo total
   void credit( double ); // adiciona um valor ao  de Account
   void debit( double ); // subtrai uma quantia do saldo de Account
   int getAccountNumber() const; // retorna o número da conta
private:
   int accountNumber; // número da conta
   int pin; // PIN para autenticação
   double availableBalance; // findos disponíveis para retirada
   double totalBalance; // fundos disponíveis + fundos esperando compensação
}; // fim da classe Account

#endif // ACCOUNT_H


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
