/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printftests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 15:29:49 by mfonteni          #+#    #+#             */
/*   Updated: 2017/12/17 17:34:42 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFTESTS_H
#define PRINTFTESTS_H
#include "../printf/includes/libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define NAME(name) printf("=== %s ===\n", name);
#define SUCCESSMSG "\e[32m[Success]\e[39m\n"
#define PRINTFSUCCESS printf("%s", SUCCESSMSG)
#define FAILUREMSG "\e[31m[Failure]\e[39m\n"
#define PRINTFFAILURE printf("%s", FAILUREMSG)
#define EASYTESTFAIL printf("Echec d'un test de fonctionnement basique\n");
#define INTMIN "-2147483648"
#define INTMAX "2147483647"
#define GNLRETURN(ret) printf("Return Value : %d\n", ret)

void simple_string_test(void);

#endif
