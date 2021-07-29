/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorenius <jorenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:40:41 by jorenius          #+#    #+#             */
/*   Updated: 2021/07/11 16:25:22 by jorenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int count;
	int fact;

	count = 1;
	fact = 1;
	while (fact <= nb)
	{
		count = count * fact;
		fact++;
	}
	if (nb < 0)
		return (0);
	else
	return (count);
}
