struct registro {		/* struct.c */
	int codigo;
	long qtd;
	double valor;
	char descric[20];
};

main()
{
	struct registro r, *rp;

	r.codigo = 999;
	r.qtd = 11;
	r.valor = 23.21;
	strcpy(r.descric,"MOTOR DE EXPLOSAO");
	printf("Codigo: %d, Qtd: %ld, Valor: %.2f\n",r.codigo,r.qtd,r.valor);
	printf("Descricao: %s\n",r.descric);
	rp = &r;
	printf("Codigo: %d, Qtd: %ld, Valor: %.2f\n",rp->codigo,rp->qtd,rp->valor);
	strcpy(rp->descric,"MOTOR DE EXPLOSAO");
	printf("Descricao: %s\n",rp->descric);
}

