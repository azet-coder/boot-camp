/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:44:37 by lmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 15:44:44 by lmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void    ft_print_alphabet(void)
{
    char nu;

    nu = '0';
    while (nu <= '9')
    {
        ft_putchar(nu);
        nu++;
    }
}

int     main()
{
    ft_print_alphabet();
    return (0);
}
