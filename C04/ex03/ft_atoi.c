/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgulal <zgulal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 19:52:32 by zgulal            #+#    #+#             */
/*   Updated: 2022/11/01 19:52:37 by zgulal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	result;

	i = 0;
	count = 1;
	result = 0;
	while (str[i] >= 9 && (str[i] <= 13 || str[i] == 32))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	while ((str[i] >= 48) && (str[i] <= 57))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (count * result);
}
