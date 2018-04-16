/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 09:01:42 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/15 09:01:43 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int g_counter = 1;
/*int	ft_sqrt(int nb)
{
	int counter;

	counter = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
	{
		return (1);
	}
	while (counter < nb)
	{
		if (nb % counter == 0)
		{
			if (counter * counter == nb)
			{
				return (counter);
			}
		}
		counter++;
	}
	return (0);
}*/

int	ft_iterative_power(int nb, int power)
{
	int ret;
	int count;

	ret = nb;
	count = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power - 1)
	{
		ret *= nb;
		count++;
	}
	return (ret);
}


int ft_sqrt(int nb)
{
	if (nb < 0 )
		return 0;
	if (nb == 1)
		return 1;

	if (nb % counter == 0)
		ft_sqrt()
		
}

int main(void)
{
	printf(ft_sqrt(4));
	return (0);
}