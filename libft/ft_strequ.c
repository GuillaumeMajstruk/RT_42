/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmlynarc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:32:08 by jmlynarc          #+#    #+#             */
/*   Updated: 2017/11/13 15:38:58 by jmlynarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;

	i = 0;
	if (!(s1) || !(s2))
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (!(s1[i]) && !(s2[i]));
}
