/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:34:29 by mfonteni          #+#    #+#             */
/*   Updated: 2018/01/02 18:29:39 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

///////////////===============================================================
//Printf experiences, collection of tests and notes to check what I need to
//realize my printf implementation
///////////////==============================================================

/* Important things :
 * THE 0 FLAG IS IGNORED IF PRECISION EXISTS
 * When called my printf command is parsed in this struct
typedef struct	s_plist
{
	void				*arg;
	int					parameter;
	int					width; //minimum writen
	int					precision; //maximum writen
	char				*length; //conversion
	char				type; //type of arg
	struct s_list	*next;
}				t_plist;
*/

int main(void)
{
	printf("%%test\n");
	printf("%%stest\n");
	// If %%, the second % needs to be treated as a simple char
	printf("%d\n", 1.5f);
	//Behaviour seems undefined when giving a wrong arg to a specific flag
//printf("%s\n", 5); > segfault, it means that we don't care about handlinguser mistakes with flags
	printf("%%2\n"); // = %2
	printf("%\n"); //is blank !
	printf("%-10.15lld\n", (long long)1568646874865);
	printf("%10s\n", "laser");
}
