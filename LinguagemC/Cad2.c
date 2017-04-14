struct registro {
  char nome[40];
  char endereco[40];
  float valor;
} matriz[100];
struct registro *pont;

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
      case 'c' :
        carga();
        break;
      case 's' :
        salvar();
        break;
      case 'o' :
        ordena();
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
  for (t=0;t<100;t++) *matriz[t].nome = '\0';
}  

menu()
{
  char s;
  cls();
  do {
     puts("Inserir");
     puts("Exibir");
     puts("Carregar");
     puts("Salvar");
     puts("Ordenar");
     puts("Finaliza");
     printf("Digite a 1a. Letra: ");
     scanf("%c",&s);
   } while(s != 'i' && s != 'o' && s != 'e' && s != 'c' && s != 's' && s != 'f');
   return(s);
}

inserir()
{
  int i;
  for (i=0; i < 100; i++) 
    if (!*matriz[i].nome) break;
  if (i==100) {
    puts("Arquivo Cheio!");
    return;
  }
  printf("Nome: "); gets(matriz[i].nome); 
  printf("End.: "); gets(matriz[i].endereco); 
  printf("Val.: "); scanf("%f",&matriz[i].valor); 
}

ordena()
{
  int i=0,j,tot;
  char a[1];
  char work[100];
  while (*matriz[i].nome) i++;
  tot=i--;
  for(i=0;i<tot;i++)
    for(j=i+1;j<=tot;j++)
      if(*matriz[i].nome>*matriz[j].nome) {
        strcpy(work,&matriz[i]);
        strcpy(&matriz[i],&matriz[j]);
        strcpy(&matriz[j],work);
      }
}
  

exibir()
{
  char x;
  int t;
  cls();
  for(t=0;t<100;t++) {
    pont = &matriz[t]; 
    if (*matriz[t].nome) {
       printf("%s \n", pont->nome);   /* analogo a matriz[t].nome */
       printf("%s \n", pont->endereco);
       printf("%f \n", pont->valor);
       puts(" "); puts("<Enter> para prosseguir!");
       x = getchar();
       }
    else
      break;
  }
} 

salvar()
{
  FILE *fp;
  int i;
  if ((fp=fopen("LISTA.DAT","wb"))==NULL) {
     puts("Falhou Abertura! ");
     return;
  }
  for (i=0;i<100;i++)
    if (*matriz[i].nome)
       if (fwrite(&matriz[i],sizeof(struct registro), 1,fp) != 1)
          puts("Falha na Gravacao! ");
   fclose(fp);
}

carga()
{
  FILE *fp;
  int i;
  if ((fp=fopen("LISTA.DAT","rb")) == NULL) {
     puts("Falha na Abertura do Arquivo!");
     return;
   }
   inicia_matriz();
   for (i=0; i < 100; i++)
     if (fread(&matriz[i], sizeof(struct registro), 1, fp) != 1) {
        if (feof(fp)) {
           fclose(fp);
           return;
         }
     else 
        {
          puts("Erro de Leitura! ");
          fclose(fp);
          return;
        }
     }     
}
