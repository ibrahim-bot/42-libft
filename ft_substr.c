/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <ichougra@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 12:58:41 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/15 16:25:36 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	c;
	size_t	n;

	p = malloc(len + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	c = 0;
	n = 0;
	while (s[n])
		n++;
	if (start > n)
		len = 0;
	while (c < len && s[start + c] != '\0')
	{
		p[c] = s[start + c];
		c++;
	}
	p[c] = '\0';
	return (p);
}
