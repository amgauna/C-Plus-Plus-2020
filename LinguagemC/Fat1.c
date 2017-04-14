main()
{
  int i,j;
  float f=1;
  printf("Digite um numero: ");
  scanf("%d",&j);
  for(i=1;i<=j;i++) f=f*i;
  printf("O fatorial de %d e' %7.0f.",j,f);
}
