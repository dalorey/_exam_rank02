#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
	int	num;
	
	num = 0;
	while (begin_list)
	{
//		printf("[fls] TEST TEST TEST!!!\n");
		begin_list = begin_list->next;
		num++;
	}
	return (num);
}
