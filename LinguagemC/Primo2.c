main()
{
  char ac[80];
  int j,i,ini,fim,n,nao;
  double r;
  cls();
  printf("Digite extremo inferior: "); scanf("%d",&ini);
  printf("\nDigite extremo superior: ");scanf("%d",&fim);
  dostime(ac, 2);
  puts(ac);
  for(i=ini;i<=fim;i++) {
    nao = 1;
    j = 2;
    r = i;
    r = sqrt(r);
    while (j<=r) {
      if(i % j == 0)
        nao = 0;
      j++;
    }
    if (nao || i == 2)
       printf("%d ",i);
  }
  printf("\n");  
  dostime(ac, 2);
  puts(ac);
} 
