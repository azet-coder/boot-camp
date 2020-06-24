/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:10:58 by lmdluli           #+#    #+#             */
/*   Updated: 2020/06/24 10:49:35 by lmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int main()
{
   char src[] = "Hello";
    char dest[10];
   int i = 0;
   while (i < 3)
   {
		dest[i] = src[i];
		i++;
   }
	dest[i] = '\0';
	printf("src = %s\n", src);
    printf("dest = %s\n", dest);
    return 0;
}

