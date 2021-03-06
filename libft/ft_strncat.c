/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 14:02:48 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/17 12:46:46 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t c;
	size_t x;

	c = 0;
	x = ft_strlen(s1);
	while (s2[c] != '\0' && c < n)
	{
		s1[x + c] = s2[c];
		c++;
	}
	s1[x + c] = '\0';
	return (s1);
}
