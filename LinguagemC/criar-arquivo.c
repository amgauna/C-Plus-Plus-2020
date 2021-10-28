main()	
{
	FILE *fo;
	char c, dest[25];
	int i;
	char *cp;
	double d;
	printf("Arquivo a ser Criado: ");
	gets(dest);
	if((fo = fopen(dest,"w")) == NULL) {
		printf("Nao posso criar %s\n",dest);
		exit();
	}
	c = 'A';
	i = 999;
	cp = "String criada para exemplo.";
	d = 123.456;
	fprintf(fo,"%c %d %s %lf\n", c, i, cp, d);
	fclose(fo);
	puts("Resposta Correta (no arquivo):A 999 String criada para exemplo. 123.456000");
}

