main()
{
  int tamanho,tot=0,i,w,errou,acerto=0,tent=0,erro=5,certo=0;
  char a,s[20],c[20],e[20];
  printf("\n\nJogo da Forca\n\n");   
  printf("Digite a Palavra: "); scanf("%s",s);
  for(i=1;i<23;i++) printf("\n");
  printf("Jogo da Forca\n\n");
  tamanho = strlen(s);
  for(i=0;i<=tamanho-1;i++) {
    c[i] = '*';
    e[i] = ' ';
  }
  while (certo<tamanho) {
    printf("\nDigite uma Letra: ");
    a = ' ';
    while (a == ' ') {
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
       printf("\n\n\nVoce perdeu! (%s)",s);
       break;
    }
    if (tamanho==certo) {
       printf("\n\n\nVoce ganhou!");
       break;
    }
    printf("\n%s                    Chutes: %s",c,e);
    printf("\nFaltam %d Tentativas!",erro-(tent-acerto));
  }
  printf("    %s",c);
}
