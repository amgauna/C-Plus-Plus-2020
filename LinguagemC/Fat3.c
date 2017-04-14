main()
{
  int j;
  printf("Digite um numero: ");
  scanf("%d",&j);
  printf("O fatorial de %d e' %d",j,fat(j));
}

int fat(n)
int n;
{
  int i,f=1,z=3;
  for(i=1;i<=n;i++) f = f*i;
  return f;
} 
