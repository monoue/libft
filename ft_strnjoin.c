/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 16:01:19 by monoue            #+#    #+#             */
/*   Updated: 2021/02/10 08:28:45 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	join_len = ft_strnlen(s2, n);
	char			*ret_s;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strndup(s2, n));
	if (!s2)
		return (ft_strdup(s1));
	ret_s = malloc((s1_len + join_len + 1) * sizeof(char));
	if (!ret_s)
		return (NULL);
	ft_strcpy(ret_s, s1);
	ft_strncpy(&ret_s[s1_len], s2, join_len);
	return (ret_s);
}
