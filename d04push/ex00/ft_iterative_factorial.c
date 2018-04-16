/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:09:51 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/14 13:09:53 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int product;
	int j;

	j = 1;
	product = 1;
	if (nb < 0)
		return (0);
	while (j <= nb)
	{
		product *= j;
		j++;
	}
	return (product);
}
