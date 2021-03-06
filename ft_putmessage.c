/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmessage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaitre <amaitre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 19:38:22 by amaitre           #+#    #+#             */
/*   Updated: 2016/10/17 11:03:03 by amaitre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putmessage(char *text)
{
	ft_putstr("\n\033[32m--------------------------\033[0m\n");
	ft_putstr("\033[91m➜  \033[36m\033[1;5m");
	ft_putstr(text);
	ft_putstr(" \033[0m");
	ft_putstr("\n\033[32m--------------------------\033[0m\n\n");
}
