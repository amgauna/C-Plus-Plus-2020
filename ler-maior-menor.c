main()
{
  int a,b;
  a = 100;
  b = 20;
  swapg(&a,&b);
  printf("Maior = %d ",b);
  printf("Menor = %d ",a);
}

swapg(c,d)
int *c,*d;
{
  int t;
  if (*c <= *d) return;   /*   nao troca   */
  t  = *c;
  *c = *d;
  *d = t;
}

