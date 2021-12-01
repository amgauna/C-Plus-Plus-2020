// CashDispenser.h
// Definição da classe CashDispenser. Representa o ATM para o dispensador de cédulas.
#ifndef CASH_DISPENSER_H
#define CASH_DISPENSER_H

class CashDispenser
{
public:
   CashDispenser(); // construtor inicializa contagem de conta para 500

   // simula a entrega da quantia especificada de cédulas
   void dispenseCash( int ); 

   // indica se o dispensador de cédulas pode entregar a quantia desejada
   bool isSufficientCashAvailable( int ) const;
private:
   const static int INITIAL_COUNT = 500;
   int count; // número de cédulas de US$ 20 remanescente
}; // fim da classe CashDispenser

#endif // CASH_DISPENSER_H


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
