/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:36:58 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/10 06:05:05 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		j;
	size_t	result;

	i = 0;
	j = 0;
	result = ft_strlen(dest) + ft_strlen(src);
	while (dest[i])
	{
		i++;
	}
	while (src[j] && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size <= ft_strlen(dest))
	{
		return (ft_strlen(src) + size);
	}
	return (result);
}
