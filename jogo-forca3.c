main()
{
  int tamanho,tot=0,i,w,errou,acerto=0,tent=0,erro=5,certo=0;
  char a,s[20],c[20],e[20];
  cls();
  COLOR(14,0,0);  /* Amarelo */
  printf("\n\nJogo da Forca\n\n");   
  printf("Digite a Palavra: "); 
  COLOR(0,0,0);  /* "Invisivel" */
  scanf("%s",s);
  COLOR(14,0,0);
  cls();
  printf("Jogo da Forca\n\n");
  tamanho = strlen(s);
  for(i=0;i<=tamanho-1;i++) {
    c[i] = '*';
    e[i] = ' ';
  }
  while (certo<tamanho) {
    LOCATE(3,1);
    printf("Digite uma Letra: ");
    a = ' ';
    while (a == ' ') {
      LOCATE(3,20);
      printf(" ");
      LOCATE(3,20);
      scanf("%c",&a);
      for(i=0;i<=tamanho-1;i++)
        if(a == e[i])
          a = ' ';
      }
    errou = 1;  /* errado e' um */
    for(i=0;i<=tamanho-1;i++)
      if (a == s[i])
         if (c[i] != s[i]) {
            certo++;
            c[i] = s[i];
            errou = 0;
         }
    e[tent] = a;
    if (!errou) acerto++;
    tent++;
    if (tent-acerto>erro) {
       LOCATE(9,1);
       printf("\nVoce perdeu! (%s)",s);
       break;
    }
    if (tamanho==certo) {
       LOCATE(9,1);
       printf("\nVoce ganhou!");
       break;
    }
    LOCATE(5,1);printf("%s                    Chutes: %s",c,e);
    LOCATE(7,1);printf("Faltam %d Tentativas!",erro-(tent-acerto));
  }
  LOCATE(5,1);printf("%s",c);
  LOCATE(10,1);
}

