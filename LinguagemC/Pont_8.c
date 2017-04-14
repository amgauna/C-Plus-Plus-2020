main()
{
  int *p,*q,a[10],i=0,j=0,n,n1;
  cls();
  printf("Digite um Numero: "); scanf("%d",&n);
  n1 = n;
  while (j < 10) { 
    if (n % 2 == 0) {
       a[j] = n;
       j++;
       }
    n++;
    }
  for (i=0;i<=9;i++)
    printf("%d ",a[i]);  /* Tradicional */
  printf("\n\n");
  j = 0;                 /* com ponteiros 2 modos */
  p = &a[0];
  n = n1;
  while (j < 10) { 
    if (n % 2 == 0) {
       *p = n;
       p++;
       j++;
       }
    n++;
    }            
  p = &a[0];
  q = p + 10;
  while (p<q)
    printf("%d ",*p++);
  printf("\n\n");
  p = &a[0];
  for (i=0;i<=9;i++) {
    printf("%d ",*p);
    p++;
  }
}
