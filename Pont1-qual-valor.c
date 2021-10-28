#include "stdio.h"
main()
{
  int i,k,*pi,*pk;
  char a;
  i = 2; k = 0;
  puts("Qual sera o valor de k? ");
  pk = &k;
  pi = &i;
  *pk = i;
  printf("para *pk = i, temos k= %d\n",k);
  k = *pi;
  printf("para k = *pi, temos k= %d\n",k);
  scanf("%c",&a);
}

