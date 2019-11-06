/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <ichougra@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/21 12:01:57 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/22 14:47:38 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*new;
	t_list		*copie;
	t_list		*deb;

	deb = NULL;
	copie = NULL;
	if (!lst || !(deb = ft_lstnew(lst->content)))
		return (deb);
	deb->content = f(deb->content);
	copie = deb;
	lst = lst->next;
	while (lst)
	{
		if (!(new = ft_lstnew(lst->content)))
		{
			ft_lstclear(&copie, del);
			return (NULL);
		}
		new->content = f(new->content);
		deb->next = new;
		deb = deb->next;
		lst = lst->next;
	}
	return (copie);
}
