/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:43:07 by lmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 16:51:44 by lmdluli          ###   ########.fr       */
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
    char ch;

    ch = 'z';
    while (ch >= 'a')
    {
        ft_putchar(ch);
        ch--;
    }
}

int     main()
{
    ft_print_alphabet();
    return (0);
}
