#include "../printftests.h"

void	print_list(t_plist *list)
{
	printf("Arg:%s\n", (char*)list->arg);
	printf("flags:%s\n", list->flag);
	printf("width:%d\n", list->width);
	printf("precision:%d\n", list->precision);
	printf("length:%s\n", list->length);
	printf("type:%c\n\n", list->type);
	if (list->next)
	{
		list = list->next;
		print_list(list);
	}
}

int main(int argc, char **argv)
{
	t_plist *list = NULL;
//	char *str = "Quelle belle %s nous fimes, quelques hymenomycetes %d au total"; //poule, 2
	list = parse_input(argv[1]);
	if (list)
		print_list(list);
	return (argc);
}
