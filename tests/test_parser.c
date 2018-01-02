#include "../printftests.h"

int parse_one(t_plist *list, const char *format);

int main(void)
{
	t_plist *list;
	list = NULL;
	parse_one(list, "%d");
	printf ("flags :%s\nwidth:%d\nprecision:%d\nlength:%s\ntype:%c\n", list->flag, list->width, list->precision, list->length, list->type);
}
