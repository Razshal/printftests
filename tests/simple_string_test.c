/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_string_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 15:59:26 by mfonteni          #+#    #+#             */
/*   Updated: 2018/01/23 13:54:21 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printftests.h"
#include <locale.h>

void simple_string_test(void)
{
	char *ptr;

	setlocale(LC_ALL, "");
	ptr = ft_strnew(6);
	printf("chars:%d\n", printf("je suis une :%.2s", "poule"));
	fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%.2s", "poule"));

ft_putendl("##########################1");
	printf("chars:%d\n", printf("je suis une :%025.15d", 1234));
	fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%025.15d", 1234));

ft_putendl("##########################2");
	printf("chars:%d\n", printf("je suis une :%025.15ld", (long)1234));
	fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%025.15ld", (long)1234));

ft_putendl("##########################3");
	printf("chars:%d\n", printf("je suis une :%.15o", 1234));
	fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%.15o", 1234));

ft_putendl("##########################4");
	printf("chars:%d\n", printf("je suis une :%#25.15X", 12345678));
	fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%#25.15X", 12345678));

ft_putendl("##########################5");
	printf("chars:%d\n",
			printf("je suis une :%25.15s", "123456789")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%25.15s", "123456789"));

ft_putendl("##########################6");
	printf("chars:%d\n", printf("je suis une :%p", ptr)); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%p", ptr));

ft_putendl("##########################7");
	printf("chars:%d\n", printf("je suis une :%%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%%"));

ft_putendl("##########################8");
	printf("chars:%d\n", printf("je suis une :%+%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%+%"));

ft_putendl("##########################9");
	printf("chars:%d\n", printf("je suis une :%s%s%s", "123", "456", "789")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%s%s%s", "123", "456", "789"));
ft_putendl("##########################10");
	printf("chars:%d\n", printf("%#x", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#x", 0));

ft_putendl("##########################11");
	printf("chars:%d\n", printf("%05d", -42)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%05d", -42));

ft_putendl("##########################12");
	printf("chars:%d\n", printf("%5%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%5%")); fflush(stdout);

ft_putendl("##########################13");
//	printf("chars:%d\n", printf("%x", 4294967296)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%x", 4294967296)); fflush(stdout);

ft_putendl("##########################14");
	printf("chars:%d\n", printf("%s", NULL)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%s", NULL)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%5.x %5.0x", 0, 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%5.x %5.0x", 0, 0)); fflush(stdout);

ft_putendl("##########################15");
//	printf("chars:%d\n", printf("%c\n", NULL)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%c", NULL)); fflush(stdout);

ft_putendl("##########################16");
	printf("chars:%d\n", printf("%10s is a string\n", "this")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%10s is a string\n", "this")); fflush(stdout);

ft_putendl("##########################17");
	printf("chars:%d\n", printf("%-05o", 2500)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%-05o", 2500)); fflush(stdout);

ft_putendl("##########################18");
	printf("chars:%d\n", printf("%03.2d", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%03.2d", 0)); fflush(stdout);

ft_putendl("##########################19");
	printf("chars:%d\n", printf("%d", 42)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%d", 42)); fflush(stdout);

ft_putendl("##########################20");
	printf("chars:%d\n", printf("%03.2d", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%03.2d", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%03.2d", -1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%03.2d", -1)); fflush(stdout);

ft_putendl("##########################21");
	printf("chars:%d\n", printf("%#.o %#.0o", 0, 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#.o %#.0o", 0, 0)); fflush(stdout);

ft_putendl("##########################22");
	printf("chars:%d\n", printf("%#.x %#.0x", 0, 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#.x %#.0x", 0, 0)); fflush(stdout);

ft_putendl("##########################23");
	printf("chars:%d\n", printf("%p", (void*)0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%p", (void*)0)); fflush(stdout);

ft_putendl("##########################24");
	printf("chars:%d\n", printf("%c", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%c", 0)); fflush(stdout);

ft_putendl("##########################25");
	printf("chars:%d\n", printf("%S", L"我是一只猫。")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%S", L"我是一只猫。")); fflush(stdout);

ft_putendl("##########################26");
	printf("chars:%d\n", printf("%#o", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#o", 0)); fflush(stdout);

ft_putendl("##########################27");
	printf("chars:%d\n", printf("{%-30S}", L"我是一只猫。")); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%-30S}", L"我是一只猫。")); fflush(stdout);

ft_putendl("##########################28");
	printf("chars:%d\n", printf("%#o", 42)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#o", 42)); fflush(stdout);

ft_putendl("##########################29");
	printf("chars:%d\n", printf("%15.4s", "I am 42")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%15.4s", "I am 42")); fflush(stdout);

ft_putendl("##########################30");
	printf("chars:%d\n", printf("%15.4s", "42 is the answer")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%15.4s", "42 is the answer")); fflush(stdout);

ft_putendl("##########################31");
	printf("chars:%d\n", printf("%3%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%3%")); fflush(stdout);

ft_putendl("##########################32");
	printf("chars:%d\n", printf("%0.3%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%0.3%")); fflush(stdout);

ft_putendl("##########################33");
	printf("chars:%d\n", printf("%#5.3o", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#5.3o", 1)); fflush(stdout);

ft_putendl("##########################34");
	printf("chars:%d\n", printf("%#026.5o", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#026.5o", 1)); fflush(stdout);

ft_putendl("##########################35");
	printf("chars:%d\n", printf("%#025o", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#025o", 1)); fflush(stdout);

ft_putendl("##########################36");
	printf("chars:%d\n", printf("%#025x", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#025x", 1)); fflush(stdout);

ft_putendl("##########################37");
	printf("chars:%d\n", printf("%#025.10x", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#025.10x", 1)); fflush(stdout);

ft_putendl("##########################38");
	printf("chars:%d\n", printf("{%5.s}", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%5.s}", 0)); fflush(stdout);

ft_putendl("##########################39");
	printf("chars:%d\n", printf("je suis une :%#25.15X", 12345678)); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%#25.15X", 12345678));

ft_putendl("##########################40");
	printf("chars:%d\n", printf("{%05.%}")); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%05.%}")); fflush(stdout);

ft_putendl("##########################41");
	printf("chars:%d\n", printf("{%05.d}", 56)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%05.d}", 56)); fflush(stdout);

ft_putendl("##########################42");
	printf("chars:%d\n", printf("{%05.d}", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%05.d}", 0)); fflush(stdout);

ft_putendl("##########################43");
	printf("chars:%d\n", printf("{%3c}", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%3c}", 0)); fflush(stdout);

ft_putendl("##########################44");
	printf("chars:%d\n", ft_printf("Ceci{BLUE} est un %s de{EOC} couleur {BLUE}COC{EOC}OR{RED}ICO{EOC}\n", "test")); fflush(stdout);

ft_putendl("##########################45");
	printf("chars:%d\n", printf("{%-3c}", 'h')); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%-3c}", 'h')); fflush(stdout);

ft_putendl("##########################46");
	printf("chars:%d\n", printf("{%-3d}", NULL)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%-3d}", NULL)); fflush(stdout);

ft_putendl("##########################47");
	printf("chars:%d\n", printf("{%-3d}", "test")); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%-3d}", "test")); fflush(stdout);

	ft_putendl("##########################47");
	printf("chars:%d\n", printf("%zhd", 4294967296)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%zhd", 4294967296)); fflush(stdout);
}
