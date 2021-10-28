char *p = "Imprimindo Algo\n";
main()
{
  int i;
  printf("%s\n - por ponteiro...\n\n",p);
  for(i=0;p[i];i++)
    printf("%c",p[i]);
  puts("\n - por caracteres em ponteiro ");
}

