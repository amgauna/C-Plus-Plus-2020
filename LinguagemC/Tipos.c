main()
{
  int x=70,x1=7;
  char c='a',c1='A';
  float f=23.215;
  printf("x= %d, c= %c, f= %2.2f, x1= %d, c1= %c \n",x,c,f,x1,c1);
  c = x;
  printf("c <--x : c= %c\n",c);
  x = f;
  printf("x <--f : x= %d\n",x);
  f = x1;
  printf("f <--x1: f= %2.2f\n",f);
  f = c1;
  printf("f <--c1: f= %2.2f",f);
}
