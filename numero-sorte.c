main()
{
  int tot=0,i,w;
  char a,s[20];
  cls();   
  printf("Digite seu Nome: "); scanf("%s",s);
  for(i=0;i<=strlen(s)-1;i++) {
    a = s[i];
    tot = tot + a - 64;
  }
  printf("%s seu numero da sorte e' %d",s,tot);
}

