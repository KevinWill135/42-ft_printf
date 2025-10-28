#include <ft_printf.h>

int main(void)
{ 
/* 	long	tst = ULONG_MAX;
	long	tstM = -ULONG_MAX;
	long *ptr1 = &tst;
	long *ptr2 = &tstM;
 */
	//ft_printf("testing category p: \n");

	/* int origin = printf(" %u ", -1);
	int copy = ft_printf(" %u ", -1);
 */
	//int origin = printf(" %d ", -1);//printf(" %p %p ", ptr1, ptr2);
	//int copy = ft_printf(" %d ", -1);//ft_printf(" %p %p ", ptr1, ptr2);

	//ft_printf("\nori: %d\ncpy: %d\n", origin, copy);
	printf("The NULL macro represents the %p address\n", (void *)-1);
	ft_printf("The NULL macro represents the %p address\n", (void *)-1);
	//ft_printf(" %d ", -1);
	//char *s = "SOS";
	//int c = -12123;
	/* char *ptr = "ABC\n";
	//char c = 'B';
	//ft_printf("thats that shit %u ba next arg for test is %p LoL\n", c, s);
	//printf("thats that shit %u ba\n", c);
	int myprintf = ft_printf("ft_Original: %p\n", ptr);
	int	orprintf = printf("Original:    %p\n", ptr); */

	//unsigned int y = c;
	/* printf("printf Length:    %d\n", orprintf);
	printf("ft_printf Length: %d\n", myprintf);

	ft_printf("%dpC is the lowest temperature in the universe\n", -273);
	ft_printf("\n\nNow I will test my ft_putnb_base!!\n");
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	ft_putnbr_base(INT_MIN, "0123456789");
	ft_printf("\n");
	ft_putnbr_base(INT_MAX, "0123456789");
	ft_printf("\n"); */
	/* ft_printf("tests category com ft_pri: *c* \n");
	int test1ft = ft_printf("%c$\n", '0');
	int test2ft = ft_printf(" %c$\n", '0' - 256);
	int test3ft = ft_printf("%c $\n", '0' + 256);
	int test4ft = ft_printf(" %c %c %c $\n", '0', 0, '1');
	int test5ft = ft_printf(" %c %c %c $\n", '2', '1', 0);

	printf("tests category com printf: *c* \n");
	int	test1pf = printf("%c$\n", '0');
	int	test2pf = printf(" %c$\n", '0' - 256);
	int	test3pf = printf("%c $\n", '0' + 256);
	int	test4pf = printf(" %c %c %c $\n", '0', 0, '1');
	int	test5pf = printf(" %c %c %c $\n", '2', '1', 0);

	ft_printf("\ntesting returns: \n");

	printf("pf1 = %d\n", test1pf);
	printf("pf2 = %d\n", test2pf);
	printf("pf3 = %d\n", test3pf);
	printf("pf4 = %d\n", test4pf);
	printf("pf5 = %d\n", test5pf);

	ft_printf("****************** // *****************\n");

	ft_printf("ft1 = %d\n", test1ft);
	ft_printf("ft2 = %d\n", test2ft);
	ft_printf("ft3 = %d\n", test3ft);
	ft_printf("ft4 = %d\n", test4ft);
	ft_printf("ft5 = %d\n", test5ft);

	ft_printf("\n"); */
}
/* 
(" %c ", '0'));
	TEST(3, print(" %c", '0' - 256));
	TEST(4, print("%c ", '0' + 256));
	TEST(5, print(" %c %c %c ", '0', 0, '1'));
	TEST(6, print(" %c %c %c ", ' ', ' ', ' '));
	TEST(7, print(" %c %c %c ", '1', '2', '3'));
	TEST(8, print(" %c %c %c ", '2', '1', 0));
	TEST(9, print(" %c %c %c ", 0, '1', '2')); 
	print("%s", ""));
	TEST(2, print(" %s", ""));
	TEST(3, print("%s ", ""));
	TEST(4, print(" %s ", ""));
	TEST(5, print(" %s ", "-"));
	TEST(6, print(" %s %s ", "", "-"));
	TEST(7, print(" %s %s ", " - ", ""));
	TEST(8, print(" %s %s %s %s %s", " - ", "", "4", "", s2));
	TEST(9, print(" %s %s %s %s %s ", " - ", "", "4", "", "2 "));

	print(" %p ", -1));
	TEST(2, print(" %p ", 1));
	TEST(3, print(" %p ", 15));
	TEST(4, print(" %p ", 16));
	TEST(5, print(" %p ", 17));
	TEST(6, print(" %p %p ", LONG_MIN, LONG_MAX));
	TEST(7, print(" %p %p ", INT_MIN, INT_MAX));
	TEST(8, print(" %p %p ", ULONG_MAX, -ULONG_MAX));
	TEST(9, print(" %p %p ", 0, 0));
*/