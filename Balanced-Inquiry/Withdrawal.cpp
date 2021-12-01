// Withdrawal.cpp
// Definições de função membro da classe Withdrawal.
#include "Withdrawal.h" // Definição da classe Withdrawal
#include "Screen.h" // Definição da classe Screen
#include "BankDatabase.h" // Definição da classe BankDatabase
#include "Keypad.h" // Definição da classe Keypad
#include "CashDispenser.h" // Definição da classe CashDispenser

// constante global que corresponde à opção de menu para cancelar
const static int CANCELED = 6;

// construtor Withdrawal inicializa os membros de dados da classe
Withdrawal::Withdrawal( int userAccountNumber, Screen &atmScreen, 
   BankDatabase &atmBankDatabase, Keypad &atmKeypad, 
   CashDispenser &atmCashDispenser )
   : Transaction( userAccountNumber, atmScreen, atmBankDatabase ),
     keypad( atmKeypad ), cashDispenser( atmCashDispenser )
{
   // corpo vazio
} // fim do construtor de Withdrawal

// realiza transação; sobrescreve função virtual da Transaction
void Withdrawal::execute()
{
   bool cashDispensed = false; // cédulas ainda não foram entregues
   bool transactionCanceled = false; // transação ainda não foi cancelada 

   // obtém as referências ao banco de dados e tela do banco
   BankDatabase &bankDatabase = getBankDatabase(); 
   Screen &screen = getScreen();

   // faz um loop até as cédulas serem entregues ou o usuário cancelar
   do
   {
      // obtém a quantia de retirada escolhida pelo usuário
      int selection = displayMenuOfAmounts();
      
      // verifica se o usuário escolheu uma quantia de retirada ou cancelou
      if ( selection != CANCELED )
      {
         amount = selection; // configura quantia como o valor em dólar selecionado

         // obtém o saldo disponível na conta envolvida
         double availableBalance = 
            bankDatabase.getAvailableBalance( getAccountNumber() );
   
         //  verifica se o usuário tem dinheiro suficiente na conta
         if ( amount <= availableBalance )
         {   
            // verifica se o dispensador de cédulas tem cédulas suficientes
            if ( cashDispenser.isSufficientCashAvailable( amount ) )
            {
               // atualiza a conta envolvida para refletir a retirada
               bankDatabase.debit( getAccountNumber(), amount );
               
               cashDispenser.dispenseCash( amount ); // entrega cédulas
               cashDispensed = true; // cédulas foram entregues

               // instrui o usuário a pegar as cédulas
               screen.displayMessageLine( 
                  "\nPlease take your cash from the cash dispenser." );
            } // fim do if
            else // o dispensador de cédulas não tem cédulas suficientes
               screen.displayMessageLine( 
                  "\nInsufficient cash available in the ATM."
                  "\n\nPlease choose a smaller amount." );
         } // fim do if
         else // não há dinheiro suficiente disponível na conta do usuário
         {
            screen.displayMessageLine( 
               "\nInsufficient funds in your account."
               "\n\nPlease choose a smaller amount." );
         } // fim de else
      } // fim do if
      else // usuário escolheu a opção de menu Cancel 
      {
         screen.displayMessageLine( "\nCanceling transaction..." );
         transactionCanceled = true; // usuário cancelou a transação
      } // fim de else
   } while ( !cashDispensed && !transactionCanceled ); // fim da instrução do...while
} // fim da função execute

// exibe um menu de quantias de saques e a opção para cancelar;
// retorna a quantia escolhida ou 0 se o usuário escolher cancelar
int Withdrawal::displayMenuOfAmounts() const
{
   int userChoice = 0; // variável local para armazenar o valor de retorno

   Screen &screen = getScreen(); // obtém referência de tela
   
   // array de quantias que correspondem aos números no menu
   int amounts[] = { 0, 20, 40, 60, 100, 200 };

   // faz um loop enquanto nenhuma escolha válida for feita
   while ( userChoice == 0 )
   {
      // exibe o menu
      screen.displayMessageLine( "\nWithdrawal options:" );
      screen.displayMessageLine( "1 - $20" );
      screen.displayMessageLine( "2 - $40" );
      screen.displayMessageLine( "3 - $60" );
      screen.displayMessageLine( "4 - $100" );
      screen.displayMessageLine( "5 - $200" );
      screen.displayMessageLine( "6 - Cancel transaction" );
      screen.displayMessage( "\nChoose a withdrawal option (1-6): " );

      int input = keypad.getInput(); // obtém a entrada do usuário pelo teclado

      // determina como prosseguir com base no valor de entrada
      switch ( input )
      {
         case 1: // se o usuário escolheu uma quantia de retirada
         case 2: // (isto é, escolheu a opção 1, 2, 3, 4 ou 5), retorna a
         case 3: // quantia correspondente do array de quantias
         case 4:
         case 5:
            userChoice = amounts[ input ]; // salva a escolha do usuário
            break;       
         case CANCELED: // o usuário escolheu cancelar
            userChoice = CANCELED; // salva a escolha do usuário
            break;
         default: // o usuário não inseriu um valor ente 1 e 6
            screen.displayMessageLine( 
               "\nIvalid selection. Try again." );
      } // fim do switch
   } // fim do while

   return userChoice; // retorna a quantia de retirada ou CANCELADA
} // fim da função displayMenuOfAmounts


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
