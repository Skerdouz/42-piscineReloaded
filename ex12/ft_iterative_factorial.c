/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:57:52 by lbrahins          #+#    #+#             */
/*   Updated: 2024/05/15 10:02:06 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	result = nb;
	while (nb > 1)
		result = result * --nb;
	return (result);
}
