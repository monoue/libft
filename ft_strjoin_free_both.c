/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free_both.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 10:37:04 by monoue            #+#    #+#             */
/*   Updated: 2020/08/20 10:37:27 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin_free_both(char const *s1, char const *s2)
{
	char	*joined_str;

	joined_str = ft_strjoin(s1, s2);
	SAFE_FREE(s1);
	SAFE_FREE(s2);
	return (joined_str);
}
