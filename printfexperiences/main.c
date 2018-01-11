/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:34:29 by mfonteni          #+#    #+#             */
/*   Updated: 2018/01/10 17:48:37 by mfonteni         ###   ########.fr       */
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
	int test = 5;
	printf("%%test\n");
	printf("%%stest\n");
	// If %%, the second % needs to be treated as a simple char
	printf("%d\n", 1.5f);
	//Behaviour seems undefined when giving a wrong arg to a specific flag
//printf("%s\n", 5); > segfault, it means that we don't care about
//handling user mistakes with flags
	printf("%%2\n"); // = %2
	printf("%%\\n : %d\n", printf("%\n")); //is blank !
	printf("bad printf %d\n", printf("%   ;;;;;;;;;;\n", test));
	printf("bad printf second test %d\n", printf("%   ;;;;;;;;;; %d\n", test, 5));
	printf("%-10.15lld\n", (long long)123456789123);
	printf("%10s\n", "laser");
	printf("Quelle belle %s nous fimes, %d hymenomycetes, %f\n", "Cueillette", 5, 4);
	printf("%#-o\n", 25);
	printf("%");
	printf("%#5o\n", 255);
	printf("%4.5d\n", 255);
	printf("%0.15d\n", 1234567891);
	printf("%.25o\n", 1234567891);

}
