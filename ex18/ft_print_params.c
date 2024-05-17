/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrahins <lbrahins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:02:04 by lbrahins          #+#    #+#             */
/*   Updated: 2024/05/14 11:23:11 by lbrahins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			j = 0;
			while (av[i][j])
				ft_putchar(av[i][j++]);
			ft_putchar('\n');
			i++;
		}
	}
	return (1);
}
