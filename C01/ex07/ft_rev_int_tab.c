/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgulal <zgulal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:25:20 by zgulal            #+#    #+#             */
/*   Updated: 2022/10/22 19:25:31 by zgulal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	size--;
	while (a < size)
	{
		b = tab[a];
		tab[a] = tab[size];
		tab[size] = b;
		a++;
		size--;
	}
}
