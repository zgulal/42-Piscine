/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zgulal <zgulal@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:52:45 by zgulal            #+#    #+#             */
/*   Updated: 2022/10/26 16:26:30 by zgulal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hexadecimal(unsigned char hex)
{
	ft_putchar("0123456789abcdef"[hex / 16]);
	ft_putchar("0123456789abcdef"[hex % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 32 || str[i] == 127))
			ft_putchar(str[i]);
		else if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			ft_hexadecimal(str[i]);
		}
		i++;
	}
}
