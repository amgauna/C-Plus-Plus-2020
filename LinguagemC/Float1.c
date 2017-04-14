/* adapted from The C Programming Language, k&r p. 11 */
main()	/* float.c  -- illustrates use of float */
{
	int fahr;
	float celsius;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	{
		printf("%4d", fahr);
		celsius = (5.0/9.0)*(fahr-32); printf("\t%6.1f\n",celsius);
	}
}
