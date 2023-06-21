/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgulal <zgulal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:10:59 by zgulal            #+#    #+#             */
/*   Updated: 2022/10/22 19:30:48 by zgulal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	a = 0;
	size--;
	while (a < size)
	{
		if (tab [a] > tab [a + 1])
		{
			b = tab[a];
			tab [a] = tab [a + 1];
			tab [a + 1] = b;
			a = 0;
		}
		else
			a++;
	}
}
