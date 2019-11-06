/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ichougra <ichougra@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 17:16:58 by ichougra     #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 16:13:19 by ichougra    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_trim(char const *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		charset(char s1, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	end = ft_strlen_trim(s1) - 1;
	while (charset(s1[start], set) == 1)
		start++;
	while (charset(s1[end], set) == 1 && end >= start)
		end--;
	str = malloc(sizeof(char) * (end - start) + 2);
	while (start < end + 1)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
