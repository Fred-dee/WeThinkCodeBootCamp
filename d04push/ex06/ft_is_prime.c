/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 12:22:32 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/15 12:22:33 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int counter;
	int num_divisors;

	counter = 1;
	num_divisors = 0;
	if (nb <= 1)
		return (0);
	while (counter <= nb)
	{
		if (nb % counter == 0)
		{
			num_divisors++;
		}
		if (num_divisors > 2)
			return (0);
		counter++;
	}
	return (1);
}
