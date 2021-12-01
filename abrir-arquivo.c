#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> /*// Biblioteca de acentuação*/
#include <windows.h> /*// Biblioteca dos códigos do cmd*/
#include <iostream>
#include <fstream>
#include <string>

main()	
{
	FILE *fo;
	char c, *dest;
	int i;
	char *cp;
	double d;

	dest = "TESTE.TXT";
	if((fo = fopen(dest,"w")) == NULL) {
		printf("Nao Posso ABRIR TESTE.TXT");
		exit(fo);
	}
	c = 'A';
	i = 999;
	cp = "abcdefgh";
	d = 123.456;
	fprintf(fo,"%c %d %s %lf\n", c, i, cp, d);
	fclose(fo);
}

