/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 08:06:32 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/11 08:22:58 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
