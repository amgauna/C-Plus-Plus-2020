main()
{
  int i,ini,fim,n,j,nao;
  char ac[80];
  cls();
  printf("Digite extremo inferior: "); scanf("%d",&ini);
  printf("\nDigite extremo superior: ");scanf("%d",&fim);
  dostime(ac, 2);
  puts(ac);
  for(i=ini;i<=fim;i++) {
    nao = 1;
    for(j=2;j<i;j++)
      if(i % j == 0)
        nao = 0;
    if (nao || i == 2)
       printf("%d ",i);
  }
  printf("\n");
  dostime(ac, 2);
  puts(ac);
} 
