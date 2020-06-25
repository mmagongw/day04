/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmagongw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 15:32:17 by mmagongw          #+#    #+#             */
/*   Updated: 2020/06/25 15:39:05 by mmagongw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if(nb < 0 || nb > 12)
		return(0);
	if(nb ==0 || nb == 1)
		return(1);
	return nb * ft_recursive_factorial(nb - 1);
}
