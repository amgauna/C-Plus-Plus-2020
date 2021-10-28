struct cliente {
  char codigo[4];
  char nome[40];
  char endereco[40];
} cmatriz[100];

struct pedido {
  char numero[4];
  char codigo[4];
  float valor;
} pmatriz[100];

main()
{ 
  char escolha;
  inicia_matriz();
  for (;;) {
    escolha = menu();
    switch (escolha) {
      case 'i' : 
        inserir();
        break;
      case 'e' :
        exibir();
        break;
      case 'v' :
        ver();
        break;
      case 'c' :
        carga();
        break;
      case 's' :
        salvar();
        break;
      case 'm' :
        movimentar();
        break;
      case 'f' :
        saida();
    }    
  }
puts(escolha);
}

saida()
{
  cls();
  exit();
}

inicia_matriz()
{
  int t;
  for (t=0;t<100;t++) *cmatriz[t].codigo = '\0';
  for (t=0;t<100;t++) *pmatriz[t].numero = '\0';
}  

menu()
{
  char s;
  cls();
  do {
     puts("Inserir Cliente");
     puts("Exibir Clientes");
     puts("Movimentar Dados");
     puts("Ver Dados");
     puts("Carregar");
     puts("Salvar");
     puts("Finaliza");
     printf("Digite a 1a. Letra: ");
     scanf("%c",&s);
   } while(s != 'i' && s != 'm' && s != 'e' && s != 'c' 
                    && s != 's' && s != 'f' && s != 'v');
   return(s);
}

inserir()
{
  int i;
  for (i=0; i < 100; i++) 
    if (!*cmatriz[i].codigo) break;
  if (i==100) {
    puts("Arquivo Cheio!");
    return;
  }
  printf("Codigo: "); gets(cmatriz[i].codigo);
  printf("Nome  : "); gets(cmatriz[i].nome); 
  printf("Endere: "); gets(cmatriz[i].endereco); 
}

movimentar()
{
  int i;
  char x;
  for (i=0; i < 100; i++) 
    if (!*pmatriz[i].numero) break;
  if (i==100) {
    puts("Arquivo Cheio!");
    return;
  }
  printf("Pedido: "); gets(pmatriz[i].numero);
  printf("Codigo: "); scanf("%s",pmatriz[i].codigo);
  if (buscar(pmatriz[i].codigo) == 0) {
     printf("Val.: "); 
     scanf("%f",&pmatriz[i].valor); 
     }
  else {
     printf("\nNao existe este Codigo!");
     puts(" "); puts("<Enter> para prosseguir!");
     x = getchar();
     *pmatriz[i].numero = '\0';
  }
}

exibir()
{
  char x;
  int t;
  cls();
  for(t=0;t<100;t++) {
    if (*cmatriz[t].codigo) {
       printf("%s \n", cmatriz[t].codigo);
       printf("%s \n", cmatriz[t].nome);
       printf("%s \n", cmatriz[t].endereco);
       puts(" "); puts("<Enter> para prosseguir!");
       x = getchar();
       }
    else
      break;
  }
} 

buscar(chave)
char chave[4];
{
  char x;
  int t;
  for(t=0;t<100;t++) 
    if (*cmatriz[t].codigo) {
       if (strcmp(cmatriz[t].codigo,chave)==0) {
          printf("                 Nome: %s\n", cmatriz[t].nome);
          return 0;
          }
       }
    else
      break;
  return 1; 
} 

ver()
{
  char x;
  int t;
  cls();
  for(t=0;t<100;t++) {
    if (*pmatriz[t].numero) {
       printf("%s \n", pmatriz[t].numero);
       printf("%s \n", pmatriz[t].codigo);
       printf("%f \n", pmatriz[t].valor);
       puts(" "); puts("<Enter> para prosseguir!");
       x = getchar();
       }
    else
      break;
  }
} 


salvar()
{
  FILE *fp,*fq;
  int i;
  if ((fp=fopen("LISTA.DAT","wb"))==NULL) {
     puts("Falhou Abertura! ");
     return;
  }
  for (i=0;i<100;i++)
    if (*cmatriz[i].codigo)
       if (fwrite(&cmatriz[i],sizeof(struct cliente), 1,fp) != 1)
          puts("Falha na Gravacao! ");
  fclose(fp);
  if ((fq=fopen("MOVIM.DAT","wb"))==NULL) {
     puts("Falhou Abertura! ");
     return;
  }
  for (i=0;i<100;i++)
    if (*pmatriz[i].numero)
       if (fwrite(&pmatriz[i],sizeof(struct pedido), 1,fq) != 1)
          puts("Falha na Gravacao! ");
  fclose(fq);
}

carga()
{
  FILE *fp,*fq;
  int i;
  if ((fp=fopen("LISTA.DAT","rb")) == NULL) {
     puts("Falha na Abertura do Arquivo!");
     return;
  }
  if ((fq=fopen("MOVIM.DAT","rb")) == NULL) {
     puts("Falha na Abertura do Arquivo!");
     return;
  }
  inicia_matriz();
  for (i=0; i < 100; i++) 
    if (fread(&cmatriz[i], sizeof(struct cliente), 1, fp) != 1) 
       if (feof(fp)) {
          fclose(fp);
          break;
       }
    else 
       {
         puts("Erro de Leitura! ");
         fclose(fp);
         return;
       }
  for (i=0; i < 100; i++) 
    if (fread(&pmatriz[i], sizeof(struct pedido), 1, fq) != 1) 
       if (feof(fq)) {
          fclose(fq);
          return;
        }
     else 
        {
          puts("Erro de Leitura! ");
          fclose(fq);
          return;
        }
}

