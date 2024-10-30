/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eates <eates@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:19:52 by eates             #+#    #+#             */
/*   Updated: 2023/07/05 15:17:22 by eates            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	if (tmp_dst == tmp_src)
		return (dst);
	if (tmp_src < tmp_dst)
	{
		while (len--)
			tmp_dst[len] = tmp_src[len];
		return (dst);
	}
	while (i < len)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
