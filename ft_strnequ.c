/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcallens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 05:01:18 by tcallens          #+#    #+#             */
/*   Updated: 2017/11/15 05:02:03 by tcallens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t a;

	a = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[a] || s2[a]) && a < n)
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	return (1);
}