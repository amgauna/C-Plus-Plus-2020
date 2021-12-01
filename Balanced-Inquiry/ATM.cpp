// ATM.cpp
// Definições de função membro para a classe ATM.
#include "ATM.h" // Definição da classe ATM
#include "Transaction.h" // Definição da classe Transaction
#include "BalanceInquiry.h" // Definição da classe BalanceInquiry
#include "Withdrawal.h" // Definição da classe Withdrawal
#include "Deposit.h" // Definição da classe Deposit

// constantes de enumeração representam as principais opções de menu
enum MenuOption { BALANCE_INQUIRY = 1, WITHDRAWAL, DEPOSIT, EXIT };

// o construtor padrão ATM inicializa os membros de dados
ATM::ATM() 
   : userAuthenticated ( false ), // usuário não foi autenticado para iniciar
     currentAccountNumber( 0 ) // nenhum número atual de conta para iniciar
{
   // corpo vazio
} // fim do construtor padrão ATM 

// inicia o ATM
void ATM::run()
{
   // dá boas-vindas e autentica o usuário; realiza transações
   while ( true )
   {
      // faz um loop enquanto o usuário ainda não está autenticado
      while ( !userAuthenticated ) 
      {
         screen.displayMessageLine( "\nWelcome!" );       
         authenticateUser(); // autentica o usuário
      } // fim do while
      
      performTransactions(); // o usuário agora está autenticado
      userAuthenticated = false; // reinicializa antes da próxima sessão do ATM
      currentAccountNumber = 0; // reinicializa antes da próxima sessão do ATM
      screen.displayMessageLine( "\nThank you! Goodbye!" );
   } // fim do while
} // fim da função run

// tenta autenticar o usuário contra o banco de dados
void ATM::authenticateUser() 
{
   screen.displayMessage( "\nPlease enter your account number: " );
   int accountNumber = keypad.getInput(); // insere o número de conta
   screen.displayMessage( "\nEnter your PIN: " ); // solicita o PIN
   int pin = keypad.getInput(); // insere o PIN
   
   // configura userAuthenticated como um valor bool retornado pelo banco de dados
   userAuthenticated = 
      bankDatabase.authenticateUser( accountNumber, pin );
   
   // verifica se a autenticação foi bem-sucedida
   if ( userAuthenticated )
   {
      currentAccountNumber = accountNumber; // salva a conta do usuário #
   } // fim do if
   else
      screen.displayMessageLine( 
         "Invalid account number or PIN. Please try again." );
} // fim da função authenticateUser

// exibe o menu principal e realiza transações
void ATM::performTransactions() 
{
   // ponteiro local para armazenar a transação atualmente processada
   Transaction *currentTransactionPtr;
   
   bool userExited = false; // usuário optou por não sair

   // faz um loop enquanto o usuário não escolher a opção para sair do sistema
   while ( !userExited )
   {     
      // mostra o menu principal e obtém a seleção de usuário
      int mainMenuSelection = displayMainMenu();

      // decide como prosseguir com base na seleção de menu feita pelo usuário
      switch ( mainMenuSelection )
      {
         // o usuário optou por realizar um entre três tipos de transações
         case BALANCE_INQUIRY: 
         case WITHDRAWAL: 
         case DEPOSIT:
            // inicializa como o novo objeto do tipo escolhido
            currentTransactionPtr = 
               createTransaction( mainMenuSelection );

            currentTransactionPtr->execute(); // executa a transação

            // libera o espaço para a Transaction dinamicamente alocada
            delete currentTransactionPtr;

            break; 
         case EXIT: // usuário optou por terminar a sessão
            screen.displayMessageLine( "\nExiting the system..." );
            userExited = true; // essa sessão de ATM deve terminar
            break;
         default: // usuário não inseriu um inteiro de 1 a 4
            screen.displayMessageLine( 
               "\nYou did not enter a valid selection. Try again." );
            break;
      } // fim do switch
   } // fim do while
} // fim da função performTransactions

// exibe o menu principal e retorna uma seleção de entrada
int ATM::displayMainMenu() const
{
   screen.displayMessageLine( "\nMain menu:" );
   screen.displayMessageLine( "1 - View my balance" );
   screen.displayMessageLine( "2 - Withdraw cash" );
   screen.displayMessageLine( "3 - Deposit funds" );
   screen.displayMessageLine( "4 - Exit\n" );
   screen.displayMessage( "Enter a choice: " );
   return keypad.getInput(); // retorna a seleção do usuário
} // fim da função displayMainMenu
      
// retorna o objeto da classe derivada Transaction especificada
Transaction *ATM::createTransaction( int type )
{
   Transaction *tempPtr; // ponteiro Transaction temporário
   
   // determina que tipo Transaction criar
   switch ( type )
   {
      case BALANCE_INQUIRY: // cria uma nova transação BalanceInquiry
         tempPtr = new BalanceInquiry( 
            currentAccountNumber, screen, bankDatabase );
         break;
      case WITHDRAWAL: // cria uma nova transação Withdrawal
         tempPtr = new Withdrawal( currentAccountNumber, screen, 
            bankDatabase, keypad, cashDispenser );
         break; 
      case DEPOSIT: // cria uma nova transação Deposit
         tempPtr = new Deposit( currentAccountNumber, screen, 
            bankDatabase, keypad, depositSlot );
         break;
   } // fim do switch

   return tempPtr; // retorna o objeto recém-criado
} // fim da função createTransaction


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
