// Transaction.h
// Definição da classe básica abstrata Transaction.
#ifndef TRANSACTION_H
#define TRANSACTION_H

class Screen; // declaração antecipada da classe Screen
class BankDatabase; // declaração antecipada da classe BankDatabase

class Transaction
{
public:
   // o construtor inicializa recursos comuns de todas as Transactions
   Transaction( int, Screen &, BankDatabase & );

   virtual ~Transaction() { } // destrutor virtual com corpo vazio

   int getAccountNumber() const; // retorna o número da conta
   Screen &getScreen() const; // retorna a referência à tela
   BankDatabase &getBankDatabase() const; // retorna referência ao banco de dados

   // função virtual pura para realizar a transação
   virtual void execute() = 0; // sobrescrita em classes derivadas
private:
   int accountNumber; // indica conta envolvida
   Screen &screen; // referência à tela ATM
   BankDatabase &bankDatabase; // referência ao banco de dados de informações de conta
}; // fim da classe Transaction

#endif // TRANSACTION_H


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
