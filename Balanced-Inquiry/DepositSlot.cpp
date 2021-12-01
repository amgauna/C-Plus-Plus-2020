// DepositSlot.cpp
// Definição de função membro da classe DepositSlot.
#include "DepositSlot.h" // Definição da classe DepositSlot

// indica se o envelope foi recebido (sempre retorna true,
// porque isso só é uma simulação do software de uma abertura para depósito real)
bool DepositSlot::isEnvelopeReceived() const
{
   return true; // o envelope de depósito foi recebido
} // fim da função isEnvelopeReceived


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
