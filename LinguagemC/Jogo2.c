int verif=0,numm,numh,ia=0,ib=1023,contm=0,conth=0,resph,palpm;
char nome[32];
main ()                                                                
{                             
   cls (); 
   apresent ();
   nome_hum ();
   num_maq ();
   while (verif == 0){
      joga_hum ();
      joga_maq ();
      rotina_verif ();
      rotina_verif1 ();
      rotina_verif2 ();
}
   rotina_venceu ();
}
apresent ()
{
   puts ("|*********************************************************|");
   puts ("|*             J O G O     A L O - V E J A               *|");
   puts ("|************* ( A P R E S E N T A C A O ) ***************|");
   puts ("|* - JOGO ENTRE A MAQUINA E VOCE. A MAQUINA VAI ESCOLHER *|");
   puts ("|*   UM NUMERO E VOCE OUTRO NUM INTERVALO ENTRE 1 E 1023.*|");
   puts ("|* - CADA UM IRA TENTAR DESCOBRIR O NUMERO DO OUTRO, SEN-*|");
   puts ("|*   DO QUE O JOGO TERMINA QUANDO HOUVER O PRIMEIRO ACER-*|");
   puts ("|*   TO.                                                 *|");
   puts ("|* - A MAQUINA IRA INFORMA-LO SE O SEU PALPITE FOI :     *|");
   puts ("|*   ALTO / BAIXO / OU CERTO.                            *|");
   puts ("|* - VOCE IRA FAZER O MESMO PARA ELA INFORMANDO    :     *|");
   puts ("|*   (1) PARA UM CHUTE BAIXO;                            *|");
   puts ("|*   (2) PARA UM CHUTE ALTO;                             *|");
   puts ("|*   (3) PARA CERTO.                                     *|");
   puts ("|*********************************************************|");
}
nome_hum ()
{
   puts ("INFORME O SEU NOME :");
   gets (nome);
}         
num_maq ()
{
numm=rand()/32;
}
joga_hum ()
{
   printf ("%s, tente acertar o numero que eu escolhi : ",nome);
   scanf  ("%d",&numh);
   puts   ("o resultado sera divulgado apos a jogada da maquina");
   conth=conth+1;
   puts   ("*************************************************************");
   puts   (" ");
}  
joga_maq ()
{
   palpm=(ia+ib+1)/2;
   printf ("%s, acho que voce pensou no numero %d",nome,palpm);
   puts   (" ");
   printf ("digite (1) baixo, (2) alto ou (3) certo : ");
   scanf  ("%d",&resph);
   contm=contm+1;
   puts   ("*************************************************************");
   puts   (" ");
}
rotina_verif ()
{
   if (numh == numm){
      verif = verif + 1;
   }
   else
      if (resph == 3){
         verif = verif + 1;
   }
}
rotina_verif1 ()
{     
   if (numh > numm){
      puts (" ");
      printf ("seu chute foi alto");
      puts (" ");  
   }
   else
      if (numh < numm){
      puts (" ");
      printf ("seu chute foi baixo");
      puts (" ");
   }
}
rotina_verif2 ()
{
   if (resph == 1){ 
      ia = palpm;     
   }
   else
   if (resph == 2){
   ib = palpm;
   }
}
rotina_venceu ()
{ 
   if (numh == numm){
      puts  (" ");
      printf("* %s parabens, voce acertou em %d tentativas.",nome,conth);
      puts  (" ");
      puts  ("* fim do jogo.");
      puts  (" ");
   }
   else
   if (resph == 3){
      puts  (" ");
      printf("* %s a maquina acertou em %d tentativas.",nome,contm);
      puts  (" "); 
      puts  ("* fim do jogo.");
      puts  (" ");
   }
}







