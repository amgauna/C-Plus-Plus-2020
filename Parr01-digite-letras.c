main()
{
  char c,*p,*q;
  int i=0,j,r;
  cls();
  q = malloc(1000);
  p = q;
  puts("Digite Letras... para parar digite  <Enter>"); 
  for(;;) {
    printf("Digite a %d letra: ",i+1);
    scanf("%c",&c);
    if (c==' ')
       break;
    *p = c;
    c = ' ';
    p++;
    i++;
  }
  p = q;
  printf("\n\nLetras Digitadas:\n");
  for(j=1;j<=i;j++) {
    printf("%d Letra = %c\n",j,*p);
    p++;
  }
  r = free(q);
  if (r == 0)
     puts("\nLiberada Memoria Usada!");
  else
     puts("\nFalha na Liberacao da Memoria Reservada!");
}

