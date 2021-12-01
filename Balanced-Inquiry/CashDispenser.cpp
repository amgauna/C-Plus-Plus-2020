// CashDispenser.cpp
// Definições de função membro da classe CashDispenser.
#include "CashDispenser.h" // Definição da classe CashDispenser

// o construtor padrão CashDispenser inicializa a contagem como padrão
CashDispenser::CashDispenser()
{
   count = INITIAL_COUNT; // configura atributo count como o padrão
} // fim do construtor padrão CashDispenser 

// simula a liberação da quantia em dinheiro especificada; supõe que há dinheiro suficiente
// disponível (chamada anterior para isSufficientCashAvailable retornou true)
void CashDispenser::dispenseCash( int amount )
{
   int billsRequired = amount / 20; // número de cédulas de US$ 20 requerido
   count -= billsRequired; // atualiza a contagem das cédulas
} // fim da função dispenseCash

// indica se o dispensador de cédulas pode entregar a quantia desejada
bool CashDispenser::isSufficientCashAvailable( int amount ) const
{
   int billsRequired = amount / 20; // número de cédulas de US$ 20 requerido

   if ( count >= billsRequired )
      return true; // cédulas suficientes estão disponíveis
   else 
      return false; // não há cédulas suficientes disponíveis
} // fim da função isSufficientCashAvailable


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
