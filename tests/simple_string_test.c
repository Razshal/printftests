/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_string_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 15:59:26 by mfonteni          #+#    #+#             */
/*   Updated: 2017/12/17 16:11:21 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printftests.h"

void simple_string_test(void)
{
	int fd = 1;
	char str[2048+1];

	printf("test");
	read(fd, str, 2048);
	printf("captured : %s\n",str);
}
