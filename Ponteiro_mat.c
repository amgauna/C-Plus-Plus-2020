main()
{
  int *p,a[10],i=0,j=0,n,n1;
  cls();
  printf("Digite um Numero: "); scanf("%d",&n);
  n1 = n;
  while (j < 10) { 
    if (n % 2 == 0) {
       a[j] = n;
       j++;
       }
    n++;
    }
  for (i=0;i<=9;i++)
    printf("%d ",a[i]);
  j = 0;
  p = &a[0];
  n = n1;
  puts(" ");puts(" ");
  while (j < 10) { 
    if (n % 2 == 0) {
       *p = n;
       p++;
       j++;
       }
    n++;
    }
  p = &a[0];
  for (i=0;i<=9;i++) {
    printf("%d ",*p);
    p++;
  }
}

