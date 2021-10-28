int pilha[50],*p1,*to;
main()
{
  int valor;
  p1 = pilha;
  to = p1;
  printf("Numero --> Pilha, 0 recupera e -1 finaliza \n");
  do {
       scanf("%d",&valor);
       if (valor != 0) 
          push(valor);
       else {
          valor = pop();
          printf("%d\n",valor);
          }
      } while (valor != -1);
}

push(i)
int i;
{
  p1++;
  if (p1 == (to + 50)) {
     puts("Estouro da Pilha (superior) ");
     exit(1);
  }
  *p1 = i;
}

pop()
{
  if ((p1) == to) {
     puts("Estouro da Pilha (inferior) ");
     exit(1);
  }
  p1--;
  return *(p1+1);
}


