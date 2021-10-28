main()
{
 int a,r,x;
 printf("Digite um valor: ");
 scanf("%d",&a);
 x = 2 * a + 3;
 r = soma(a);
 printf("%d, %d e %d",a,x,r);
}

soma(z)
int z;
{
 int x=5;
 x = 2 * x + z;
 z = 0;
 return(x);
}

