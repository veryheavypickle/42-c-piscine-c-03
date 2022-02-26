/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xcarroll <xcarroll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:16:55 by xcarroll          #+#    #+#             */
/*   Updated: 2022/02/26 01:32:03 by xcarroll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	d_len = j;
	s_len = get_strlen(src);
	if (size == 0 || size <= d_len)
		return (s_len + size);
	while (src [i] != '\0' && i < size - d_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d_len + s_len);
}
/*
#include <stdio.h>
int main (void)
{
	char src[] = "hellooo";
    	char dest [] = "42";
    printf("%i \n", ft_strlcat(dest, src, 22));
    printf("%s \n", dest);
}*/
