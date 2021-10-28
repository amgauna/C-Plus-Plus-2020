main()
	{

	int a, c;
	printf("Digite uma Letra Minuscula: ");
	a = getchar();
	c = toupper(a);
	if(a > 'Z' && a <= 'z')
       printf("\nObserve que %c tem a forma maiuscula igual a %c.", a, c);
	else
	  printf("\nOps! Esta letra nao e' minuscula!\n");
	}

