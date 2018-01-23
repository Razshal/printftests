/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_string_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 15:59:26 by mfonteni          #+#    #+#             */
/*   Updated: 2018/01/22 20:12:43 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printftests.h"
#include <locale.h>

void simple_string_test(void)
{
	char *ptr;

	setlocale(LC_ALL, "");
	ptr = ft_strnew(6);
	printf("%d\n", printf("je suis une :%.2s\n", "poule")); fflush(stdout);
	printf("%d\n", ft_printf("je suis une :%.2s\n", "poule"));

	printf("%d\n", printf("je suis une :%025.15d\n", 1234)); fflush(stdout);
	printf("%d\n", ft_printf("je suis une :%025.15d\n", 1234));

	printf("%d\n", printf("je suis une :%025.15ld\n", (long)1234)); fflush(stdout);
	printf("%d\n", ft_printf("je suis une :%025.15ld\n", (long)1234));

	printf("chars:%d\n", printf("je suis une :%.15o\n", 1234)); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%.15o\n", 1234));

	printf("chars:%d\n", printf("je suis une :%#25.15X\n", 12345678)); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%#25.15X\n", 12345678));

	printf("chars:%d\n", printf("je suis une :%25.15s\n", "123456789")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%25.15s\n", "123456789"));

	printf("chars:%d\n", printf("je suis une :%p\n", ptr)); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%p\n", ptr));

	printf("chars:%d\n", printf("je suis une :%%\n")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%%\n"));

	printf("chars:%d\n", printf("je suis une :%+%\n")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%+%\n"));

	printf("chars:%d\n", printf("je suis une :%s%s%s\n", "123", "456", "789")); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%s%s%s\n", "123", "456", "789"));

	printf("chars:%d\n", printf("%#x\n", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#x\n", 0));

	printf("chars:%d\n", printf("%05d\n", -42)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%05d\n", -42));

	printf("chars:%d\n", printf("%5%\n")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%5%\n")); fflush(stdout);
ft_putendl("##########################");
//	printf("chars:%d\n", printf("%x", 4294967296)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%x\n", 4294967296)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%s\n", NULL)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%s\n", NULL)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%5.x %5.0x\n", 0, 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%5.x %5.0x\n", 0, 0)); fflush(stdout);

ft_putendl("##########################");
//	printf("chars:%d\n", printf("%c\n", NULL)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%c\n", NULL)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%10s is a string\n", "this")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%10s is a string\n", "this")); fflush(stdout);

ft_putendl("##########################");
//	printf("chars:%d\n", printf("%-05o", 2500)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%-05o\n", 2500)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%03.2d\n", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%03.2d\n", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%d\n", 42)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%d\n", 42)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%03.2d\n", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%03.2d\n", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%03.2d\n", -1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%03.2d\n", -1)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#.o %#.0o\n", 0, 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#.o %#.0o\n", 0, 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#.x %#.0x\n", 0, 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#.x %#.0x\n", 0, 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%p\n", (void*)0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%p\n", (void*)0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%c\n", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%c\n", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%S\n", L"我是一只猫。")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%S\n", L"我是一只猫。")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#o", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#o", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("{%-30S}", L"我是一只猫。")); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%-30S}", L"我是一只猫。")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#o", 42)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#o", 42)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%15.4s", "I am 42")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%15.4s", "I am 42")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%15.4s", "42 is the answer")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%15.4s", "42 is the answer")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%3%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%3%")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%0.3%")); fflush(stdout);
	printf("chars:%d\n", ft_printf("%0.3%")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#5.3o", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#5.3o", 1)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#026.5o", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#026.5o", 1)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#025o", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#025o", 1)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#025x", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#025x", 1)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("%#025.10x", 1)); fflush(stdout);
	printf("chars:%d\n", ft_printf("%#025.10x", 1)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("{%5.s}", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%5.s}", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("je suis une :%#25.15X\n", 12345678)); fflush(stdout);
	printf("chars:%d\n", ft_printf("je suis une :%#25.15X\n", 12345678));

ft_putendl("##########################");
	printf("chars:%d\n", printf("{%05.%}")); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%05.%}")); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("{%05.d}", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%05.d}", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", printf("{%3c}", 0)); fflush(stdout);
	printf("chars:%d\n", ft_printf("{%3c}", 0)); fflush(stdout);

ft_putendl("##########################");
	printf("chars:%d\n", ft_printf("Ceci{BLUE} est un %s de{EOC} couleur\n", "test")); fflush(stdout);
}
