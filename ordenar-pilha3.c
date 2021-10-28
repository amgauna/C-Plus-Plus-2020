int pilha[50],*p1,*to;
main()
{
  int valor;
  p1 = pilha;
  to = p1;
  valor = 3;
  push(valor);
  valor = 0;
  push(valor);
  pop();
  valor = 1;
  pop();
}

push(i)
int i;
{
  p1++;
  *p1 = i;
}

pop()
{
  p1--;
  printf("%d",*(p1+1));
}


