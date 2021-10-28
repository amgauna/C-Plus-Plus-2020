#include<stdio.h>
#include<conio.h>

main()
{
   int contadoraluno=1, nota1=0, nota2=0, nota3=0, nota4=0, media=0; mediageral=0;
   float aluno, nota1,nota2,nota3,nota4,media;
   clrscr();
   for contadoraluno <>0; contadoraluno < 24; contadoraluno++
   {
       printf ("Digite o valor da primeira nota:");
       scanf ("%d",& nota1);
       printf ("Digite o valor da segunda nota:");
       scanf ("%d",& nota2);
       printf ("Digite o valor da terceira nota:");
       scanf ("%d",& nota3);
       printf ("Digite o valor da quarta nota:");
       scanf ("%d",& nota4);
       media =(nota1+nota2+nota3+nota4)/4;
       printf("A media do aluno " contadoraluno " foi %f", &media);
       mediageral = mediageral + media;
       if (media >=7) 
          {                                                              
            printf ("Você foi aprovado, sua media final é %d", media);
            getch();  contadoraluno                           
          }
       else
          { 
               printf ("Você foi reprovado, sua média final é %d", media);
                getch();
           }
    }
    printf("A media geral da turma eh: %.1f\n", mediageral/24);
                                
}
