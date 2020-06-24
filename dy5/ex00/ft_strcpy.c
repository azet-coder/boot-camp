/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmdluli <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 12:28:05 by lmdluli           #+#    #+#             */
/*   Updated: 2020/06/24 10:47:39 by lmdluli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strcpy(char *dest, char *src);

int main()
{
char src[] = "hello";
char dest[10];
int i = 0;
 while(src[i] != '\0')
{
	dest[i] = src[i];
		i++;
}
	dest[i] = '\0';
	printf("src = %s\n", src);
	printf("dest = %s\n", dest);
	return 0;
}
