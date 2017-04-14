main()
{
  int num;
  printf("Digite um Numero: ");
  scanf("%d",&num);
  printf("Seu Fatorial (Metodo Convencional) %d.\n",fact(num));
  printf("Seu Fatorial (Metodo Recursivo   ) %d.\n",factr(num));
}

fact(n)
int n;
{
  int t,resp;
  resp = 1;
  for (t=1;t<=n;t++) resp = resp * t;
  return (resp);
}

factr(n)
int n;
{
  int resp;
  if (n==1) return(1);
  resp = factr(n-1) * n;
  return (resp);
}
  
