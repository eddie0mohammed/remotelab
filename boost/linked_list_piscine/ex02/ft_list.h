#ifndef	FT_LIST_H
# define FT_LIST_H

typedef	struct s_list
{
	struct s_list	*next;
	void			*data;	
}				t_list;


t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = data;
	new->next = NULL;
	return (t_list);
}
#endif