/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_string_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 15:59:26 by mfonteni          #+#    #+#             */
/*   Updated: 2018/01/08 18:14:12 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printftests.h"

void simple_string_test(void)
{
	char *str = ft_strnew(4092);
	str = printf_to_str(str, 4092, "je suis une :%s", "poule");
	printf("printf\n%s\nsize:%lu", str, ft_strlen(str));
}
