main()
{
  int i,*p,a[5];
  for(i=0;i<=4;i++) {
    printf("Digite o %d elemento ",i+1);
    scanf("%d ",&a[i]);
  }
  p = a;
  for (i=0;i<=4;i++) 
    printf("\n\n%d %d %d",a[i],p[i],*(p+i));
}

