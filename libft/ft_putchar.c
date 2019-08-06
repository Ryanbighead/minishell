/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhutchin <rhutchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:24:10 by fremoor           #+#    #+#             */
/*   Updated: 2019/08/06 10:41:38 by rhutchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
