/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdora <mdora@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:32:29 by mdora             #+#    #+#             */
/*   Updated: 2022/12/18 18:39:57 by mdora            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (haystack == NULL)
		return (NULL);
	if (n_len == 0 || haystack == needle)
		return ((char *)haystack);
	while (((char *)(haystack))[i] != '\0' && i < len)
	{
		c = 0;
		while (((char *)(haystack))[i + c] != '\0' && needle[c] != '\0'
			&& ((char *)(haystack))[i + c] == needle[c] && i + c < len)
			c++;
		if (c == n_len)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}
