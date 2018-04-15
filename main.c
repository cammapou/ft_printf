/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cammapou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 11:37:52 by cammapou          #+#    #+#             */
/*   Updated: 2018/04/03 14:13:41 by cammapou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <limits.h>

int		ft_printf(const char *fmt, ...);

int	main()
{
	setlocale(LC_ALL, "");
	char				*s1 = "42";
	wchar_t				*wides = L"£100 π我是一只猫ææäåç";
	char				ch = 'h', *string = "computer";
	int					count = 234, hex = 0x10, oct = 010, dec = 10;
	wchar_t				wc = 0x88;
	size_t				tmp = 156;
	unsigned long		dr = 30;
	unsigned long long	in = 214748364842;
	unsigned short		de = 0;
	unsigned char		tk = 'k';
	char				*ts = "";
	char				null = '\0';
	char				*strnull = "NULL";
	int					zero = 0;

	//wchar_t 			tt = 0xFFFF;
	//int i = 1;
	//char	*z = "bonjour";
	/*
	**  MAIN_TEST
	*/
	/*printf("\n-------TEST hex, oct, dec %%i-------\n");
	printf("ret = %d\n", ft_printf("%i    %i     %i\n\n", hex, oct, dec));
	printf("ret = %d\n", printf("%i    %i     %i\n\n", hex, oct, dec));

	printf("\n-------TEST unsigned long %%lu-------\n");
	printf("%d\n", ft_printf("salut ca va %lu\n", dr));
	printf("%d\n", printf("salut ca va %lu\n", dr));

	printf("\n-------TEST unsigned long long %%llu-------\n");
	printf("%d\n", ft_printf("salut ca va %llu\n", in));
	printf("%d\n", printf("salut ca va %llu\n", in));

	printf("\n-------TEST int %%d-------\n");
	printf("%d\n", ft_printf("salut ca va %d\n", 42));
	printf("%d\n", printf("salut ca va %d\n", 42));

	printf("\n-------TEST char %%c-------\n");
	printf("%d\n", ft_printf("salut ca va %c\n", 'h'));
	printf("%d\n", printf("salut ca va %c\n", 'h'));

	printf("\n-------TEST string %%s-------\n");
	printf("%d\n", ft_printf("salut ca va |%s|\n", "oui et toi"));
	printf("%d\n", printf("salut ca va |%s|\n", "oui et toi"));

	printf("\n-------TEST size_t %%zu-------\n");
	printf("%d\n", ft_printf("salut ca va |%zu|\n", tmp));
	printf("%d\n", printf("salut ca va |%zu|\n", tmp));

	printf("\n-------TEST wstr %%ls-------\n");
	printf("%d\n", ft_printf("salut ca va |%ls|\n", wides));
	printf("%d\n", printf("salut ca va |%ls|\n", wides));

	printf("\n-------TEST wchar %%-------\n");
	printf("%d\n", ft_printf("salut ca va |%lc|\n", wc));
	printf("%d\n", printf("salut ca va |%lc|\n", wc));

	printf("\n-------TEST %%-------\n");
	printf("%d\n", ft_printf("1234567890123%d4567890123456789\n\n", count));
	printf("%d\n", printf("1234567890123%d4567890123456789\n\n", count));

	printf("\n-------TEST unsigned short %%hu-------\n");
	printf("%d\n", ft_printf("salut ca va |%hu|\n", de));
	printf("%d\n", printf("salut ca va |%uh|\n", de));

	printf("\n-------TEST unsigned char %%hhu-------\n");
	printf("%d\n", ft_printf("salut ca va |%hhu|\n", tk));
	printf("%d\n", printf("salut ca va |%hhu|\n", tk));*/

	/*printf("\n-------TEST %%c-------\n");
	  while (j++ < 126)
	  {
	  printf("%d\n", ft_printf("salut ca va |%c|\n", j));
	  printf("%d\n", printf("salut ca va |%c|\n", j));
	  }*/

	/*printf("\n-------TEST %%-------\n");
	printf("%d\n", ft_printf("\u6211\u53EF\u4EE5\u5199\u5728\u4E2D\u56FD\n"));
	printf("%d\n", printf("\u6211\u53EF\u4EE5\u5199\u5728\u4E2D\u56FD\n"));

	printf("\n-------TEST unsigned char %%u %%s-------\n");
	printf("%d\n", ft_printf("%s %u\n", s1, 42));
	printf("%d\n", printf("%s %u\n", s1, 42));

	printf("\n-------TEST option %%d op: press, 0, -, width-------\n");
	printf("%d\n", ft_printf("|%10d|\n", -12));
	printf("%d\n", printf("|%10d|\n\n", -12));
	printf("%d\n", ft_printf("|%010d|\n", -12));
	printf("%d\n", printf("|%010d|\n\n", -12));
	printf("%d\n", ft_printf("|%-10.5d|\n", -12));
	printf("%d\n", printf("|%-10.5d|\n\n", -12));
	printf("%d\n", ft_printf("|%- 20.15d|\n", -12));
	printf("%d\n", printf("|%- 20.15d|\n", -12));

	printf("\n-------TEST option %%s %%c op: press, 0, -, width-------\n");
	printf("%d\n", ft_printf("%10c%5c\n", ch, ch));
	printf("%d\n", printf("%10c%5c\n", ch, ch));
	printf("%d\n", ft_printf("%25s\n%25.4s\n\n", string, string));
	printf("%d\n", printf("%25s\n%25.4s\n\n", string, string));
	printf("%d\n", ft_printf("|%-10c|\n\n", ch));
	printf("%d\n", printf("|%-10c|\n\n", ch));
	printf("%d\n", ft_printf("|%10s|\n\n", ts));
	printf("%d\n", printf("|%10s|\n\n", ts));

	printf("\n-------TEST unsigned char %%c %%s %%d-------\n");
	printf("%d\n", ft_printf("ma ft =|%c|\n", null));
	printf("%d\n", printf("|%c|\n", null));
	printf("%d\n", ft_printf("ma ft =|%s|\n", strnull));
	printf("%d\n", printf("|%s|\n", strnull));
	printf("%d\n", ft_printf("ma ft =|%d|\n", zero));
	printf("%d\n", printf("|%C|\n", 1500));
	printf("%d\n", printf("|%C|\n", 1500));


	printf("\n-------RAMDOM TEST-------\n");

	//ft_printf("%05d\n", -42);
	//printf("%05d\n", -42);

	printf("%d\n", ft_printf("%4.15d\n", 42));
	printf("%d\n", printf("%4.15d\n", 42));
	ft_printf("%0+5d\n", -42);
	printf("%0+5d\n", -42);
	ft_printf("%0+5d\n", 42);
	printf("%0+5d\n\n", 42);

	//printf("%d\n", ft_printf("ft= |%05d|\n", -42));
//	printf("%d\n", printf("|%05d|\n", -42));
	printf("%d\n", ft_printf("ft= |%-5d|\n", 42));
	printf("%d\n", printf("%-5d|\n", 42));
	printf("%d\n", ft_printf("ft= |%-05d|\n", 42));
	printf("%d\n", printf("|%05d|\n", 42));
	printf("%d\n", ft_printf("ft= |%-5d|\n", -42));
	printf("%d\n", printf("|%-5d|\n", -42));
	printf("%d\n", ft_printf("ft= |%-05d|\n", -42));
	printf("%d\n", printf("|%-5d|\n", -42));


	ft_printf("|%-5.10o|\n", 2500);
	printf("|%-5.10o|\n", 2500);

	ft_printf("|%-10.5o|\n", 2500);
	printf("|%-10.5o|\n", 2500);

	ft_printf("|%5.2x|\n", 5427);
	printf("|%5.2x|\n", 5427);

	ft_printf("@moulitest: %.10o\n", 42);
	printf("@moulitest: %.10o\n", 42);

	ft_printf("%5o\n", 41);
	printf("%5o\n", 41);
	ft_printf("%05o\n", 42);
	printf("%05o\n", 42);
	ft_printf("%-5o\n", 2500);
	printf("%-5o\n", 2500);
	ft_printf("--> %#o\n", 0);
	printf("--> = %#o\n", 0);

	ft_printf("@moulitest: |%5.o %5.0o|\n", 0, 0);
	printf("@moulitest: |%5.o %5.0o|\n\n", 0, 0);



	ft_printf("|%-10.5d|\n", 4242);
	printf("|%-10.5d|\n", 4242);
  ft_printf("|% 10.5d|\n", 4242);
  printf("|% 10.5d|\n", 4242);
  ft_printf("|%+10.5d|\n", 4246);
  printf("|%+10.5d|\n", 4242);
  ft_printf("|%-+10.5d|\n", 4245);
  printf("|%-+10.5d|\n", 4242);
  ft_printf("|%03.2d|\n", 0);
  printf("|%03.2d|\n", 0);
  ft_printf("|%03.2d|\n", 1);
  printf("|%03.2d|\n", 1);

	printf("|%#lx|\n",  0x7ffdffae488c);
	ft_printf("|%#lx|\n",  0x7ffdffae488c);

	ft_printf("%X\n", 42);
	printf("%X\n", 42);*/

	//ft_printf("%D\n", -1L);
	ft_printf("|%-05d|\n\n", 42);
	printf("|%-05d|\n", 42);
	ft_printf("|% 10.5d|\n", 4242);
	printf("|% 10.5d|\n", 4242);
	ft_printf("|%03.2d|\n", 1);
	printf("|%03.2d|\n", 1);



	ft_printf("|%4.15d|\n", 42);
	printf("|%4.15d|\n", 42);

	ft_printf("|%-10.5d|\n", 4242);
	printf("|%-10.5d|\n", 4242);

	ft_printf("|%+10.5d|\n", 4242);
	printf("|%+10.5d|\n\n", 4242);

	//ft_printf("|%|");
	//printf("|%|");
	ft_printf("{%U}\n\n", NULL);
	//printf("{%U}\n\n", NULL);

	ft_printf("%U\n", ULONG_MAX / 2);
	printf("%U\n\n", ULONG_MAX / 2);
	ft_printf("%U\n", ULONG_MAX);
	printf("%U\n", ULONG_MAX);

	printf("%d\n", ft_printf("|%C|\n", L'猫'));
	printf("%d\n", printf("|%C|\n", L'猫'));
	ft_printf("%C\n", L'δ');
	printf("%C\n", L'δ');
	ft_printf("%C\n", L'요');
	printf("%C\n", L'요');
	ft_printf("%C\n", L'莨');
	printf("%C\n", L'莨');
	ft_printf("%C\n", L'ي');
	printf("%C\n", L'ي');
	ft_printf("|%C|\n", 0);
	printf("|%C|\n", 0);
	//ft_printf("%s%d%p%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
	//printf("%s%d%p%S%D%i%o%O%u%U%x%X%c%C","bonjour", 42, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플');
	printf("%d\n", ft_printf("%s\n", "bonjour"));
	printf("%d\n",printf("%s\n", "bonjour"));
	printf("%d\n",ft_printf("%d\n", 42));
	printf("%d\n",printf("%d\n", 42));
	printf("%d\n",ft_printf("%p\n", 42));
	printf("%d\n",printf("%p\n", 42));
	printf("%d\n",ft_printf("%S\n", L"暖炉"));
	printf("%d\n",printf("%S\n", L"暖炉"));
	printf("%d\n",ft_printf("%D\n", LONG_MAX));
	printf("%d\n",printf("%D\n", LONG_MAX));
	printf("%d\n",ft_printf("%i\n", 42));
	printf("%d\n",printf("%i\n", 42));
	printf("%d\n",ft_printf("%o\n", 42));
	printf("%d\n",printf("%o\n", 42));
	printf("%d\n",ft_printf("%O\n", 42));
	printf("%d\n",printf("%O\n", 42));
	printf("%d\n",ft_printf("%u\n", 100000));
	printf("%d\n",printf("%u\n", 100000));
	printf("%d\n",ft_printf("%U\n", ULONG_MAX));
	printf("%d\n",printf("%U\n", ULONG_MAX));
	printf("%d\n",ft_printf("%x\n", 42));
	printf("%d\n",printf("%x\n", 42));
	printf("%d\n",ft_printf("%X\n", 42));
	printf("%d\n",printf("%X\n", 42));
	printf("%d\n",ft_printf("%c\n",'c'));
	printf("%d\n",printf("%c\n",'c'));
	printf("%d\n",ft_printf("%C\n", L'플'));
	printf("%d\n",printf("%C\n", L'플'));

	ft_printf("%li\n", LONG_MIN);
	printf("%li\n", LONG_MIN);
	ft_printf("%lld\n", LLONG_MIN);
	printf("%lld\n", LLONG_MIN);
	ft_printf("%lli\n", LLONG_MIN);
	printf("%lli\n", LLONG_MIN);

	ft_printf("%hhd\n", CHAR_MAX + 42);
	printf("%hhd\n", CHAR_MAX + 42);
	ft_printf("%hhd\n", CHAR_MIN - 42);
	printf("%hhd\n", CHAR_MIN - 42);
	ft_printf("%hhO, %hhO\n", 0, USHRT_MAX);
	printf("%hhO, %hhO\n", 0, USHRT_MAX);
	ft_printf("%hhu, %hhu\n", 0, UCHAR_MAX + 42);
	printf("%hhu, %hhu\n", 0, UCHAR_MAX + 42);

	ft_printf("%hhX\n", 4294967296);
	printf("%hhX\n", 4294967296);

	ft_printf("@moulitest: |%#.x %#.0x|\n", 0, 0);
	printf("@moulitest: |%#.x %#.0x|\n", 0, 0);

	ft_printf("%5.2s is a string\n", "this");
	printf("%5.2s is a string\n\n\n", "this");

	printf("%d\n",ft_printf("1|%0+5d|\n", -42));
	printf("%d\n",printf("1|%0+5d|\n", -42));
	printf("%d\n",ft_printf("2|%05d|\n", -42));
	printf("%d\n",printf("2|%05d|\n", -42));
	printf("%d\n",ft_printf("3|%0-5d|\n", -42));
	printf("%d\n",printf("3|%0-5d|\n", -42));
	printf("%d\n",ft_printf("4|%-5d|\n", 42));
	printf("%d\n",printf("4|%-5d|\n", 42));
	printf("%d\n",ft_printf("5|%-05d|\n", 42));
	printf("%d\n",printf("5|%-05d|\n", 42));
	printf("%d\n",ft_printf("6|%4.15d|\n", 42));
	printf("%d\n",printf("6|%4.15d|\n", 42));
	printf("%d\n",ft_printf("7|%10.5d|\n", 4242));
	printf("%d\n",printf("7|%10.5d|\n", 4242));
	printf("%d\n",ft_printf("8|%-10.5d|\n", 4242));
	printf("%d\n",printf("8|%-10.5d|\n", 4242));
	printf("%d\n",ft_printf("9|%+10.5d|\n", 4242));
	printf("%d\n",printf("9|%+10.5d|\n", 4242));
	printf("%d\n",ft_printf("10|%03.2d|\n", -1));
	printf("%d\n\n",printf("10|%03.2d|\n", -1));
	printf("%d\n",ft_printf("11|%-5.10o|\n", 2500));
	printf("%d\n",printf("11|%-5.10o|\n\n\n", 2500));


	ft_printf("1|%-+10.5d|\n", 4242);
	printf("1|%-+10.5d|\n", 4242);
	ft_printf("2|%03.2d|\n", 0);
	printf("2|%03.2d|\n", 0);
	ft_printf("3|%03.2d|\n", -1);
	printf("3|%03.2d|\n\n\n", -1);

	ft_printf("1|%5d|\n", 42);
	printf("1|%5d|\n", 42);
	ft_printf("2|%05d|\n", 42);
	printf("2|%05d|\n", 42);
	ft_printf("3|%+d|\n", 0);
	printf("3|%+d|\n", 0);
	ft_printf("4|%+5d|\n", -42);
	printf("4|%+5d|\n", -42);
	ft_printf("5|%-5d|\n", -42);
	printf("5|%-5d|\n", -42);
	ft_printf("6|%hd|\n", -32768);
	printf("6|%hd|\n", -32768);
	ft_printf("7|%-05d|\n", -42);
	printf("7|%-05d|\n", -42);
	ft_printf("8|%hd|\n", -32769);
	printf("8|%hd|\n", -32769);
	ft_printf("9|%zd|\n", -0);
	printf("9|%zd|\n\n", -0);
	ft_printf("|%-10.5o|\n", 2500);
	printf("|%-10.5o|\n\n", 2500);

	//printf("%d\n", ft_printf("|%5.2x|\n", 5427));
	// /printf("%d", printf("|%5.2x|\n\n\n", 5427));

	printf("%d\n", ft_printf("%lld\n", -9223372036854775808));
	printf("%d\n", printf("%lld\n", -9223372036854775808));


	printf("%d\n", ft_printf("10|%.0p, %.p|\n", 1, 1));
	printf("%d\n", printf("10|%.0p, %.p|\n", 0, 0));
	printf("%d\n", ft_printf("%.5p\n", 1));
	printf("%d\n", printf("%.5p\n", 1));
	printf("%d\n",ft_printf("%u\n", -1));
	printf("%d\n",printf("%u\n", -1));
	printf("%d\n",ft_printf("%u\n", 4294967296));
	printf("%d\n",printf("%u\n", 4294967296));
	printf("%d\n",ft_printf("%-15u\n", 4294967295));
	printf("%d\n",printf("%-15u\n", 4294967295));
	printf("%d\n",ft_printf("% u\n", 4294967295));
	printf("%d\n",printf("% u\n", 4294967295));
	printf("%d\n",ft_printf("%+u\n", 4294967295));
	printf("%d\n",printf("%+u\n", 4294967295));
	printf("%d\n",ft_printf("%hU\n", 4294967296));
	printf("%d\n",ft_printf("%hU\n", 4294967296));
	printf("%d\n", ft_printf("|@moulitest: %#.x %#.0x|\n", 0, 0));
	printf("%d\n", printf("|@moulitest: %#.x %#.0x|\n", 0, 0));
	printf("%d\n", ft_printf("%#x\n", 0));
	printf("%d\n", printf("%#x\n", 0));
	ft_printf("@moulitest: %5.x %5.0x\n", 0, 0);
	printf("@moulitest: %5.x %5.0x\n\n", 0, 0);

	ft_printf("%u\n", 4294967296);
	printf("%u\n", 4294967296);
	ft_printf("%+d\n", 0);
	printf("%+d\n\n", 0);

	printf("%d",ft_printf("%+d\n", 0));
		printf("%d",printf("%+d\n\n", 0));

	ft_printf("|%hU|\n", 4294967295);
	printf("|%hU|\n\n", 4294967295);
	ft_printf("2|%+u|\n", 4294967295);
	printf("2|%+u|\n", 4294967295);
	ft_printf("3|% u|\n", 4294967295);
	printf("3|% u\n|", 4294967295);
	ft_printf("4|%015u|\n", 4294967295);
	printf("4|%015u|\n\n\n", 4294967295);


	printf("%d\n",ft_printf("|% 10.5d|\n", 4242));
	printf("%d\n", printf("|% 10.5d|\n", 4242));
	printf("%d\n",ft_printf("|%03.2d|\n", 0));
	printf("%d\n",printf("|%03.2d|\n", 0));
	printf("%d\n",ft_printf("|%03.2d|\n", -1));
	printf("%d\n",printf("|%03.2d|\n\n", -1));




	ft_printf("|%+10.5d|\n", 4242);
	 printf("|%+10.5d|\n\n", 4242);


	 ft_printf("|%05d|\n", 42);
 	printf("|%05d|\n", 42);

	 ft_printf("|%0+5d|\n", 42);
		printf("|%0+5d|\n\n", 42);

		ft_printf("|%05d|\n", -42);
 	 printf("|%05d|\n", -42);
 	 ft_printf("|%0+5d|\n", -42);
 	 printf("|%0+5d|\n", -42);
	 ft_printf("|%5d|\n", -42);
	 printf("|%5d|\n", -42);
	 ft_printf("|%-5d|\n", -42);
	 printf("|%-5d|\n", -42);
	 ft_printf("|%-05d|\n", -42);
	 printf("|%-05d|\n\n", -42);

	 ft_printf("|%+10.5d|\n", 4242);
	 printf("|%+10.5d|\n", 4242);
	 ft_printf("|%03.2d|\n", -1);
	 printf("|%03.2d|\n", -1);
	 ft_printf("|%-15u|\n", 4294967295);
	 printf("|%-15u|\n", 4294967295);
	 ft_printf("|%+10.5d|\n", 4242);
		printf("|%+10.5d|\n\n", 4242);


	ft_printf("@moulitest: %.10d\n", -42);
	printf("@moulitest: %.10d\n", -42);
	ft_printf("@moulitest: %.d %.0d\n", 0, 0);
	printf("@moulitest: %.d %.0d\n", 0, 0);
	ft_printf("@moulitest: %5.d %5.0d\n", 0, 0);
	printf("@moulitest: %5.d %5.0d\n", 0, 0);
	ft_printf("%-15u\n", 4294967295);
	printf("%-15u\n", 4294967295);
	ft_printf("%015u\n", 4294967295);
	printf("%015u\n", 4294967295);
	ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);
	printf("@moulitest: %5.o %5.0o\n", 0, 0);
	ft_printf("@moulitest: %.o %.0o\n", 0, 0);
	printf("@moulitest: %.o %.0o\n", 0, 0);
	ft_printf("@moulitest: %#.x %#.0x\n", 0, 0);
	printf("@moulitest: %#.x %#.0x\n", 0, 0);
	ft_printf("@moulitest: %.x %.0x\n", 0, 0);
	printf("@moulitest: %.x %.0x\n", 0, 0);
	ft_printf("@moulitest: %5.x %5.0x\n\n", 0, 0);
	printf("@moulitest: %5.x %5.0x\n\n", 0, 0);
	//ft_printf("%D\n", 0L);
	/*printf("%D\n", 0L);
	ft_printf("%D\n", 1L);
	printf("%D\n", 1L);*/
	//ft_printf("%D\n", -1L);
	//printf("%D\n", -1L);
	//ft_printf("%D\n", 42L);
	//printf("%D\n", 42L);
	//ft_printf("%D\n", LONG_MAX);
	//printf("%D\n", LONG_MAX);
	//ft_printf("%D\n", LONG_MIN);
	//printf("%D\n", LONG_MIN);
	/*ft_printf("Coucou les %D!\n", 42);
	printf("Coucou les %D!\n", 42);*/
	//printf("{%S}\n", NULL);


	//ft_printf("|%|\n");
	//printf("%");

	//ft_printf("%Z");
	//ft_printf("% hZ%");
	//ft_printf("|% |\n");


	/*printf("%d\n", ft_printf("%\n"));
	printf("%d\n", printf("%\n"));
	ft_printf("% hZ%\n");
	printf("% hZ%\n");
	ft_printf("%%%\n", "test");
	printf("%%%\n", "test");
	ft_printf("|%%   %|\n", "test");
	printf("|%%   %|\n", "test");
	ft_printf("%0 d\n", -42);
	printf("%0 d\n", -42);
	ft_printf("% 0d\n", -42);
	printf("% 0d\n", -42);
	ft_printf("%0 d\n", 42);
	printf("%0 d\n", 42);
	ft_printf("%5+d\n", 42);
	printf("%5+d\n", 42);

	ft_printf("%5+d\n", -42);
	printf("%5+d\n", -42);

	ft_printf("%-5+d\n", 42);
	printf("%-5+d\n", 42);
	ft_printf("%%%\n", "test");
	printf("%%%\n", "test");
	ft_printf("%lhl\n", 9223372036854775807);
	ft_printf("%lhlz\n", 9223372036854775807);
	ft_printf("%zj\n", 9223372036854775807);
	ft_printf("%lhh\n", 2147483647);*/
	/*ft_printf("%hhld\n", 128);
	printf("%hhld\n", 128);
	ft_printf("@main_ftprintf: %####0000 33..1..#00d\n", 256);
	printf("@main_ftprintf: %####0000 33..1..#00d\n", 256);
	ft_printf("@main_ftprintf: %####0000 33..1d\n", 256);
	printf("@main_ftprintf: %####0000 33..1d\n", 256);
	ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
	printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);*/
	/*//printf("% ");
	ft_printf("|% h|\n");
	//printf("% h");
	ft_printf("|% hZ%|\n");
	//printf("% hZ%");
	ft_printf("|%%%|\n", "test");
	//printf("%%%", "test");
	ft_printf("|%%   %|\n", "test");
	//printf("%%   %", "test");
	ft_printf("|%-010s is a string|\n", "this");
	//printf("|%-010s is a string|\n", "this");
	ft_printf("|%0 d|\n", -42);
	//printf("%0 d", -42);
	ft_printf("|% 0d|\n", -42);
	//printf("% 0d", -42);
	ft_printf("|%5+d|\n", 42);
	//printf("%5+d", 42);
	ft_printf("|%-5+d|\n", -42);
	//printf("%-5+d", -42);
	ft_printf("|%-0+5d|\n", -42);
	//printf("%-0+5d", -42);*/
	//ft_printf("|%jhd|\n", 9223372036854775807);
	//printf("%jhd", 9223372036854775807);
	//ft_printf("|%lhl|\n", 9223372036854775807);
	//printf("%lhl", 9223372036854775807);
	//ft_printf("|%lhlz|\n", 9223372036854775807);
	//printf("%lhlz", 9223372036854775807);
	//ft_printf("|%zj|\n", 9223372036854775807);
	//printf("%zj", 9223372036854775807);
	//printf("%D\n", -1L);
	//ft_printf("% ");
	//printf("|% |");
	//ft_printf("% h");
	//printf("% h");
	//ft_printf("%jhd", 9223372036854775807);
	//printf("%jhd", 9223372036854775807);
	//ft_printf("{%10R}\n");
	//printf("{%10R}\n");
	//ft_printf("ft = %U\n", 42);
	//printf("%U\n", 42);
	//ft_printf("ft = %hU\n", 4294967296);
	//printf("%hU\n", 4294967296);
	//ft_printf("ft = %U\n", 4294967296);
	//printf("%U\n", 4294967296);
	/*char* l = setlocale(LC_ALL, "");
	if (l == NULL) {
	printf("Locale not set\n");
	} else {
	printf("Locale set to %s\n", l);
	}
	printf("%C\n", 1080);
	printf("ret= %d\n", ft_printf("ft= %C\n", -'a'));*/
	//printf("%d\n", ft_printf("uni= |%C|\n", 1000));
	//printf("%d\n", printf("uni= |%C|\n", 1000));
	//ft_printf("ma ft= %-5%");
	//printf("ft= %-5%");
	//ft_printf("%+d", 4242424242424242424242);
	/*ft_printf("ma ft=% d\n", -42);
	printf("% d\n", -42);
	ft_printf("ma ft=%+d\n", 0);
	printf("%+d\n", 0);
	ft_printf("ma ft=%0+5d\n", -42);
	printf("%0+5d\n", -42);
	ft_printf("ma ft= |% h|\n");
	printf("ft = |% h|\n");
	ft_printf("@moulitest: %s\n", NULL);
	ft_printf("%5%\n");
	printf("%5%\n");*/
	/*ft_printf("ft%%%\n", "test");
	printf("%%%\n", "test");
	ft_printf("%5+d\n", 42);
	printf("%5+d\n", 42);*/

  //ft_printf("Pointeur [p] : {%p}\n", z);
	//printf("Pointeur [p] : {%p}\n", z);
	/*if (i & 1)
   	{
    	printf("%i est impair.\n", i);
	}
	else
  	{
    	printf("%i est pair.\n", i);
  	}*/


	//free(op);
	return (0);
}
