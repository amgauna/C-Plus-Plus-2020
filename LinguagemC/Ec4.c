main()
{
  int *pc,*pd,c,d,e;
  printf("Digite um Numero: ");
  scanf("%d",&c);
  puts(" ");
  printf("Outro Numero: ");
  scanf("%d",&d);
  puts(" ");
  printf("c = %d,  d = %d",c,d);
  puts(" ");
  pc = &c;
  pd = &d;
  e  = *pc;
  c  = *pd;
  d  = e;
  printf("c = %d,  d = %d",c,d);
}
