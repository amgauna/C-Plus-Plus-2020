// Deposit.h
// Definição da classe Deposit. Representa uma transação de depósito.
#ifndef DEPOSIT_H
#define DEPOSIT_H

#include "Transaction.h" // Definição da classe Transaction
class Keypad; // declaração antecipada da classe Keypad
class DepositSlot; // declaração antecipada da classe DepositSlot

class Deposit : public Transaction
{
public:
   Deposit( int, Screen &, BankDatabase &, Keypad &, DepositSlot & );
   virtual void execute(); // realiza a transação
private:
   double amount; // quantia a depositar
   Keypad &keypad; // referência ao teclado do ATM
   DepositSlot &depositSlot; // referência à abertura de depósito do ATM
   double promptForDepositAmount() const; // obtém a quantia de depósito do usuário
}; // fim da classe Deposit

#endif // DEPOSIT_H


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
