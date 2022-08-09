/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewurstei <ewurstei@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 09:42:13 by ewurstei          #+#    #+#             */
/*   Updated: 2022/08/09 17:18:02 by ewurstei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	errors(t_vault *data)
{
	if (data->error_code == 0)
		return ;
	else if (data->error_code == 1)
		printf("%s\n%s\n", "Error", "Paramètres non valides (lettres)");
	else if (data->error_code == 2)
		printf("%s\n%s\n", "Error", "Il y a des doublons");
	exit (0);
}

