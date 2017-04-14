main()
{
int n,i,j,l,p;
printf("Digite um numero: ");
scanf("%d",&n);
i=0;
j=1;
printf("%d %d ",i,j);
for(l=1;l<=n-2;l++) {
  p=i+j;
  printf("%d ",p);
  i=j;
  j=p;
  }
}
