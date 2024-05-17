/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:35:53 by lbrahins          #+#    #+#             */
/*   Updated: 2024/05/15 11:26:04 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			result++;
		i++;
	}
	return (result);
}
