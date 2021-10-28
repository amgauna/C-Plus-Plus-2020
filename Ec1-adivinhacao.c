main()
{
  int y=0,z,x,x1=1,x2=10;
  puts("Adivinho entre 1 e 9");
  while (y == 0) {
    x = (x1 + x2) / 2;
    printf("Chute= %d. 0-Correto, 1-Alto, 2-Baixo ",x);
    scanf("%d",&z);
    if (z == 1) 
       x2 = x;
    else
       x1 = x;
    if (z == 0)
       y = 1;
  }
}

