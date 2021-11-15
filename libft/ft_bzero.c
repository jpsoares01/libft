/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-s < jpedro-s@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 07:55:54 by jpedro-s          #+#    #+#             */
/*   Updated: 2021/10/07 16:11:03 by jpedro-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*change;

	change = s;
	while (n != 0)
	{
		*change = 0;
		change++;
		n--;
	}
}
