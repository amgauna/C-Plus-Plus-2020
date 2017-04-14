main()
{
  char str[80],*p;
  int i;
  printf("Digite uma Palavra: ");
  gets(str);
  p = str;
  for (i=strlen(str)-1;i>=0;i--)
    printf("%c",*(p+i));
}
