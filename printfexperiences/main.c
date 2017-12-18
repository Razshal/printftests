/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:34:29 by mfonteni          #+#    #+#             */
/*   Updated: 2017/12/18 18:02:08 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

///////////////===============================================================
//Printf experiences, collection of tests to check what i need to handle on my
//printf implementation
///////////////==============================================================

int main(void)
{
	printf("%%test\n");
	printf("%%stest\n");
	// If %%, the second % needs to be treated as a simple char
	printf("%d\n", 1.5f);
	//Behaviour seems undefined when giving a wrong arg to a specific flag
//printf("%s\n", 5); > segfault, it means that we don't care about handlinguser mistakes with flags
	
}
