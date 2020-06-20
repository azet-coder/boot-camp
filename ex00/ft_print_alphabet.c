/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:40:15 by lmdluli           #+#    #+#             */
/*   Updated: 2020/06/19 16:50:44 by lmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_alphabet(void)
{
    char c;
    c = 'a';
    while(c <= 'z')
    {ft_putchar(c);
    c++;
    }
}
int main()
{ft_print_alphabet();
 return(0);
}
