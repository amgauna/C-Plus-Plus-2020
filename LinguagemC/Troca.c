swapg(c,d)
int *c,*d;
{
  int t;
  if (*c <= *d) return;
  t  = *c;
  *c = *d;
  *d = t;
}