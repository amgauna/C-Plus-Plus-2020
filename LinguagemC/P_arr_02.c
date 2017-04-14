main()
{
  char c,*q,*p;
  int i=0,j,r,m,n;
  cls();
  q = malloc(1000);
  p = q;
  puts("Digite Numeros... para parar digite  <Enter>"); 
  for(;;) {
    printf("Digite o %do. Numero: ",i+1);
    scanf("%d",&m);
    if (m==0)
       break;
    *p = m;
    m = 0;
    p=p+2;
    i++;
  }
  p = q;
  printf("\n\nLetras Digitadas:\n");
  for(j=1;j<=i;j++) {
    printf("%d Letra = %d\n",j,*p);
    p=p+2;
  }
  r = free(q);
  if (r == 0)
     puts("\nLiberada Memoria Usada!");
  else
     puts("\nFalha na Liberacao da Memoria Reservada!");
}
