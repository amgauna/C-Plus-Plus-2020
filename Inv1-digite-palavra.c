main()
{
  char str[80];
  int i;
  printf("Digite uma Palavra: ");
  gets(str);
  for (i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
}

