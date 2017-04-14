main()
{
  int i,j,k;
  char *mes = "JANFEVMARABRMAIJUNJULAGOSETOUTNOVDEZ";
  cls();
  printf("Digite o Mes: "); scanf("%d",&j);
  k=j*3-3;
  for(i=k;i<k+3;i++)
    printf("%c",mes[i]);
}
