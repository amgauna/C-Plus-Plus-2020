/* programa leitor de arquivo, semelhante ao type do DOS */

#define MAXLEN 80

main()	
{
	FILE *fi;
	char source[25], line[MAXLEN], *p;
	printf("Nome do Arquivo: ");
	gets(source);
	if((fi = fopen(source, "r")) == NULL) {
		printf("\tNao posso abrir %s\n",source);
		exit();
	}
	p = line;
	while(p != NULL) {
		p = fgets(line,MAXLEN,fi);
		printf(line);
	}
	fclose(fi);
	puts("\n{FEITO}");
}

