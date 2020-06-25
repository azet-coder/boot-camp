/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:40:03 by lmdluli           #+#    #+#             */
/*   Updated: 2020/06/25 13:36:55 by lmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr(char *str)
{
	int index;
	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index = index + 1;
	}
}