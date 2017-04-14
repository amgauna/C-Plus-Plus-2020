main()
{
  char k1[10], k2[10];
  printf("Leia: ");
  scanf("%s",k1);
  printf("\nLeia 1: ");
  scanf("%s",k2);
  if (k1[0] > k2[0])
     printf("O maior: %c",k1[0]);
  else
     printf("O maior: %c",k2[0]);
}
