char x,y,*px;
main()
{
  px = malloc(1000);
  x = 'a';
  push(x);
  x = 'b';
  push(x);
  y = pop();
  printf("%c\n",y);
  y = pop();
  printf("%c",y);
}

push(i)
char i;
{
  px++;
  *px=i;
}

pop()
{
  px--;
  return *(px+1);
}

