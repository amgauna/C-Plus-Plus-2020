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
  if (n == 1)
     return 1;
  else
     return fat(n-1) * n;
} 

