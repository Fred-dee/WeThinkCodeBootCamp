/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 07:59:37 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/13 07:59:38 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrev(char *str)
{
	int		count;
	int		size;
	int		rev;
	char	*arr;

	count = 0;
	rev = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	arr = (char *)malloc(count * sizeof(char));
	size = count;
	while (rev < size)
	{
		arr[rev] = str[count - 1];
		rev++;
		count--;
	}
	return (arr);
}
