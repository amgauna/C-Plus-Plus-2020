// ATM.h
// Definição da classe ATM. Representa um caixa automático.
#ifndef ATM_H
#define ATM_H

#include "Screen.h" // Definição da classe Screen
#include "Keypad.h" // Definição da classe Keypad
#include "CashDispenser.h" // Definição da classe CashDispenser
#include "DepositSlot.h" // Definição da classe DepositSlot
#include "BankDatabase.h" // Definição da classe BankDatabase
class Transaction; // declaração forward da classe Transaction

class ATM
{
public:
   ATM(); // construtor inicializa membros de dados
   void run(); // inicia o ATM
private:
   bool userAuthenticated; // se usuário foi autenticado
   int currentAccountNumber; // número atual da conta de usuário
   Screen screen; // Tela do ATM
   Keypad keypad; // Teclado do ATM
   CashDispenser cashDispenser; // dispensador de cédulas do ATM
   DepositSlot depositSlot; // Abertura para depósito do ATM
   BankDatabase bankDatabase; // banco de dados com as informações sobre as contas

   // funções utilitárias private 
   void authenticateUser(); // tenta autenticar o usuário
   void performTransactions(); // realiza transações
   int displayMainMenu() const; // exibe o menu principal

   // retorna o objeto da classe derivada Transaction especificada
   Transaction *createTransaction( int ); 
}; // fim da classe ATM

#endif // ATM_H


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
