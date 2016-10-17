/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showtabint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 21:29:52 by amaitre           #+#    #+#             */
/*   Updated: 2016/10/17 11:05:00 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_showtabint(int *a, int nb_nb)
{
	int i;

	i = -1;
	ft_putstr("\n");
	while (++i < nb_nb)
	{
		ft_putstr("  \033[93mtab\033[91m[\033[96m");
		ft_putnbr(i);
		ft_putstr("\033[91m]");
		ft_putstr("\033[0m = \033[92m");
		ft_putnbr(a[i]);
		ft_putstr("\033[0m\n");
	}
	if (nb_nb == 0)
	{
		ft_putstr("  \033[93mtab \033[96m➜ \033[91m 0 element\033[0m\n");
	}
	ft_putstr("\n");
}
