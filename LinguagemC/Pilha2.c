char *p1;
main()
{
  int valor,volta;
  p1 = malloc(20);
  printf("Digite valor No. 1: "); scanf("%d",&valor);
  push(valor);   
  printf("Digite valor No. 2: "); scanf("%d",&valor);
  push(valor);                   
  printf("Digite valor No. 3: "); scanf("%d",&valor);
  printf("3o Digitado foi %d\n",valor);
  volta = pop();
  valor = valor * volta;
  printf("Digitado * Pop= %d e Pop = %d \n",valor,volta);
  volta = pop();
  valor = valor * volta;
  printf("Digitado * Pop = %d e Pop = %d \n",valor,volta);
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
  return *(p1+1);
}


