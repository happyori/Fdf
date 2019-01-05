/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otahirov <otahirov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 09:43:45 by otahirov          #+#    #+#             */
/*   Updated: 2019/01/05 13:17:02 by otahirov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;

	i = 0;
	j = len;
	if (!(s))
		return (NULL);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (i < j)
	{
		str[i] = s[(size_t)start];
		i++;
		start++;
	}
	return (str);
}
