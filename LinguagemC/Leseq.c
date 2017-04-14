main()	
{
	FILE *ler;
	int i;
	char x;
	char name[50];
     double d;
	if((ler = fopen("TESTE.TST","r")) == NULL) {
		puts("Nao Posso Abrir TESTE.TST");
		exit();
	}
	fscanf(ler,"%c %d %s %lf", &x, &i, name, &d);
	printf("%c %d %s %lf", x, i, name, d);
}
