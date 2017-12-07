/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcallens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 04:58:44 by tcallens          #+#    #+#             */
/*   Updated: 2017/11/15 05:00:49 by tcallens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t a;

	a = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[a] || s2[a])
	{
		if (s1[a] != s2[a])
			return (0);
		a++;
	}
	return (1);
}