main()
	{
	float num1,num2;
	char op;
	do
		{
		printf("Entre com o 1o. Numero: ");
		scanf("%f",&num1);
          printf("Entre com o 2o. Numero: ");
          scanf("%f",&num2);
          printf("Entre com o Operador  : ");
          scanf("%c",&op);
		switch(op)
			{
			case '+' : printf("%f\n",num1 + num2);
					 break;
			case '-' : printf("%f\n",num1 - num2);
					 break;
			case '/' : printf("%f\n",num1 / num2);
					 break;
			case '*' : printf("%f\n",num1 * num2);
					 break;
			default  : printf("Operador desconhecido\n");
			}
		}
		while (op != '.');
	}
