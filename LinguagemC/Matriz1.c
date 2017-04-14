main()
{
  double d=231;
  int i,s=0;
  char a[10],l[1];
  strcpy(a,"123456789");
  for (i=0;i<9;i++) {
    l[0] = a[i];
    s = s + atoi(l) * i;
  } 
  printf("%d\n",s);
  i = d / 2;
  printf("Resto de %.0f por 2 = %.0f",d,d-i*2);
}
