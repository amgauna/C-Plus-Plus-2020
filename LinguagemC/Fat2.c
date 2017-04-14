float f=1;
main()
{
  int j;
  printf("Digite um numero: ");
  scanf("%d",&j);
  fat(j);
  printf("O fatorial de %d e' %7.0f.",j,f);
}

fat(n)
int n;
{
  int i;
  for(i=1;i<=n;i++) f = f*i;
} 
