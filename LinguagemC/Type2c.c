main()

{
  char name[20];
  char buf[1];
  int fin;

	printf("Nome do Arquivo: ");
	gets(name);
	if ((fin = open(name,0)) == -1)
	{	printf("Nao existe o arquivo: %s\n",name);
		exit();
	}
	while(read(fin, buf, 1) >= 0)
		if (buf[0] != 26) 
             putchar(buf[0]);
          else 
             break;
	close(fin);
     printf("\n[FEITO]");
}
