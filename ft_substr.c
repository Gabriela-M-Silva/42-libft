/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 07:37:39 by gde-mora          #+#    #+#             */
/*   Updated: 2022/06/12 08:28:35 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	size_s;

	if (!s)
		return (NULL);
	size_s = ft_strlen(s);
	if (start > size_s)
		return (ft_strdup(""));
	if (size_s - start <= len)
	{
		sub = (char *)malloc(sizeof(char) * (size_s - start + 1));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, (size_s - start + 1));
	}
	else
	{
		sub = (char *)malloc(sizeof(char) * (len + 1));
		if (!sub)
			return (NULL);
		ft_strlcpy(sub, s + start, len + 1);
	}
	return (sub);
}
