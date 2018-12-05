#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new_node;

	if (!(new_node = (t_list*)malloc(sizeof(t_list))))
	return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);	
}