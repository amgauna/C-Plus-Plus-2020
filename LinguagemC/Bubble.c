main()

{
	int x,y,z,w,a[100];
     do
     {
         traca_linha()
         puts("Programa para ordenar (bubble) 'n' numeros digitados.");
         traca_linha();
         printf("Quantos Numeros (0=fim) -> ");
         x = leintf();
         if (x==0) break;
         traca_linha();
         for (y = 0; y < x; y++)
             {
                printf("a[%2d]= ",y);
                a[y] = leintf();
             }
         traca_linha();
         for (y = 0; y < (x-1); y++)
             for ( z = y+1; z < x; z++)
                 if (a[y] > a[z])
                    {
                        w    = a[y];
                        a[y] = a[z];
                        a[z] = w;
                    }
         for (y = 0; y < x ;y++)
             printf("%d\n",a[y]);
     }
     while(1);
}

traca_linha()
{
   int x;
   for (x=1;x != 80; x++)
       putchar('=');
   putchar('\n');
}  

leintf()
{ 
   char s[20];
   gets(s);
   return(atoi(s));
}
