struct date {
	int day;
	int month;
	char mon_name[12];
};

main()
{
  static struct date months[3] = {
	{5,1,"JANEIRO"},
	{4,2,"FEVEREIRO"},
	{10,3,"MARCO"}
	};

  int a;
  struct date *p_months;
  p_months=&months[1];	/* observe que o 1o. esta' armazenado na posicao 0 */
					/* da matriz, sempre usada em C. Portanto Fevereiro sera' o 2o. mes */
  printf("Nome do Mes No. %d e': %s.", p_months->month, p_months->mon_name);
}

