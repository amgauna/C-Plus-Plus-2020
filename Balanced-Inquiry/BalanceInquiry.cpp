// BalanceInquiry.cpp
// Definições de função membro da classe BalanceInquiry.
#include "BalanceInquiry.h" // Definição da classe BalanceInquiry
#include "Screen.h" // Definição da classe Screen
#include "BankDatabase.h" // Definição da classe BankDatabase

// o construtor BalanceInquiry inicializa os membros de dados de classe básica
BalanceInquiry:: BalanceInquiry( int userAccountNumber, Screen &atmScreen, 
   BankDatabase &atmBankDatabase )
   : Transaction( userAccountNumber, atmScreen, atmBankDatabase )
{
   // corpo vazio
} // fim do construtor de BalanceInquiry

// realiza transação; sobrescreve a função virtual pura da Transaction
void BalanceInquiry::execute()
{
   // obtém as referências ao banco de dados e tela do banco
   BankDatabase &bankDatabase = getBankDatabase();
   Screen &screen = getScreen();

   // obtém o saldo disponível da Account do usuário atual
   double availableBalance = 
      bankDatabase.getAvailableBalance( getAccountNumber() );

   // obtém o saldo total da Account do usuário atual
   double totalBalance = 
      bankDatabase.getTotalBalance( getAccountNumber() );
   
   // exibe as informações sobre o saldo na tela
   screen.displayMessageLine( "\nBalance Information:" );
   screen.displayMessage( " - Available balance: " ); 
   screen.displayDollarAmount( availableBalance );
   screen.displayMessage( "\n - Total balance:     " );
   screen.displayDollarAmount( totalBalance );
   screen.displayMessageLine( "" );
} // fim da função execute


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
