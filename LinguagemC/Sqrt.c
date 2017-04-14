main()	/* sqrt.c -- squares two numbers */

{

double x;
double result;

x = 9;

result = sqrt(x);
printf("%.f e' raiz de %f\n", result, x);
result = sqrt(result);
printf("%.17f e' raiz de %.f", result, sqrt(x));
}
