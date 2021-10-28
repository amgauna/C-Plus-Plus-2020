main()
{
  int *pa,a,i,i1,ma[100];
  char ac[80];
  int format;
  char *acpoint;
  printf("Entre com o limite: ");
  scanf("%d",&a);
  pa = &a;
  i = *pa;
  printf("O Limite foi: %d\n\n",i);
  if (i < 100) {
     pa = &ma[0];
     format = 4;
     dostime(ac,format);
     puts(ac);
     for (i1=0;i1<i;i1++)
       *(pa+i1) = i1 * 5;
     for (i1=0;i1<i;i1++)
       printf("%d ",*(pa+i1));
     puts("\n");
     format = 4;
     dostime(ac,format);
     puts(ac);
     printf("\n \n");
     for (i1=0;i1<i;i1++)
       ma[i1] = i1 * 5;
     for (i1=0;i1<i;i1++)
       printf("%d ",ma[i1]);
     puts("\n");
     format = 4;
     dostime(ac,format);
     puts(ac);
  }
}

