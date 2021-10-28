main()
{
  char k1[20], k2[20];
  printf("Leia: ");
  scanf("%s",k1);
  printf("\nLeia 1: ");
  scanf("%s",k2);
  if (*k1 > *k2)
     printf("O maior: %s",k1);
  else
     printf("O maior: %s",k2);
}

