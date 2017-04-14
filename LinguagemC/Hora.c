main()	/* dostime.c -- illustrates various formats for dostime() */
{
char ac[80];
int format, n;
char *acpoint;


for(n = 1; n < 8; n++){
		format = n;
		dostime(ac, format);
	printf("At the return, the time is: ");
		puts(ac);

	}
}
