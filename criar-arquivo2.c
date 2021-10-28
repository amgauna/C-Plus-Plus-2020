main()	
{
int ret;
FILE *fi, *fo;
char c, source[50], dest[50];

	printf("Nome do Arquivo: ");
	gets(source);
	fi = fopen(source, "w+");
	ret = fputs("abcdefghijklmnopqrstuvwxyz", fi);
	fclose(fi);
	puts("Feito");
}

