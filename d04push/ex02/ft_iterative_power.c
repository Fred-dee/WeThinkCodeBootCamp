/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:59:49 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/14 14:59:50 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
