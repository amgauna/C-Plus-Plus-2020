main()
{
 int x,y,*px,*py;
 printf("Digite um valor: ");
 scanf("%d",&x);
 px = &x;
 y = *px;
 printf("digitou= %d e y= %d\n",x,y);
 *px = 8;
 printf("valor mudou para %d\n",x);
}


