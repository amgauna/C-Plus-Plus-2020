do{
    linha(80);
    printf("\n\n\t\t\t>>> MENU PRINCIPAL <<<\n\n");
    linha(80);
    printf("\n\t 1 - C A D A S T R O S \n");
    linha(80);
    printf("\n\t 2 - C O M P R A S \n");
    linha(80);
    printf("\n\t 3 - V E N D A S \n");
    linha(80);
    printf("\n\t 4 - N O T A S  F I S C A I S  \n");
    linha(80);
    printf("\n\t 5 - S A I R  D O  P R O G R A M A\n");
    linha(80);
    scanf("%d%*c", &escolha);
    } while(escolha < 0 || escolha > 5)
