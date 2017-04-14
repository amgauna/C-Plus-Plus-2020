/* union.c -- illustrates use of a union */
union {
		char delaware;
		int  iowa;
		long california;
		float texas;
		double alaska;
} USA;

main()
{
	USA.alaska = -999.0;
	USA.delaware = 'D';
	printf("%c\n",USA.delaware);
	USA.iowa = 99;
	printf("%d\n",USA.iowa);
	USA.california = 1111111L;
	printf("%ld\n",USA.california);
	USA.texas = 1.23456e9;
	printf("%f\n",USA.texas);
	printf("%lf\n",USA.alaska);
	printf("%c\n",USA.delaware);
	printf("%d\n",USA.iowa);
	printf("%ld\n",USA.california);
}
