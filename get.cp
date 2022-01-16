# C/C++: Por que usar fgets em vez de gets
# A função gets, da biblioteca padrão do C (stdio) pode gerar um grande problema 
# para o programador que a usa: como essa função não limita o número de caracteres 
# a serem lidos da entrada padrão (stdin), pode haver vazamento de memória, ou até
# pior, injeção de código malicioso no programa. A própria compilação com o C já 
# alerta sobre o problema de gets:  Dependendo da posição da memória em que o
# programa for executado, pode ocorrer problema durante sua execução. Esse erro
# depende dos limites de memória alocados para a execução do programa.
# A solução é usar fgets, que limita o buffer de leitura.

include <stdio.h>
 
define STRSIZE 10
 
int main()
{
	char str[ STRSIZE ];
 
	fgets( str, STRSIZE, stdin );
 
	printf( "%s\n", str );
 
	return 0;
}
