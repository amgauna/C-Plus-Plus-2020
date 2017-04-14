
main()
{
  int numero;
  printf("Digite um Numero: ");
  scanf("%d",&numero);
  numero = quadrado(numero);
  printf("O quadrado resulta em %d. \n", numero);
}

quadrado(q)
int q;
{
  return(q*q);
}


