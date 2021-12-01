// Withdrawal.h
// Definição da classe Withdrawal. Representa uma transação de retirada.
#ifndef WITHDRAWAL_H
#define WITHDRAWAL_H

#include "Transaction.h" // Definição da classe Transaction
class Keypad; // declaração antecipada da classe Keypad
class CashDispenser; // declaração antecipada da classe CashDispenser

class Withdrawal : public Transaction
{
public:
   Withdrawal( int, Screen &, BankDatabase &, Keypad &, CashDispenser & );
   virtual void execute(); // realiza a transação
private:
   int amount; // quantia a sacar
   Keypad &keypad; // referência ao teclado do ATM
   CashDispenser &cashDispenser; // referência ao dispensador de notas do ATM
   int displayMenuOfAmounts() const; // exibe o menu de retirada
}; // fim da classe Withdrawal

#endif // WITHDRAWAL_H


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
