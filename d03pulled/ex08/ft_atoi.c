/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 09:38:13 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/13 09:38:15 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int sum;
	int count;
	int tru;

	count = 0;
	tru = 0;
	while (str[count] != '\0' && tru == 0)
	{
		if (str[count] >= 48 && str[count] <= 57)
		{
			sum = sum * 10 + str[count] - '0';
		}
		else
		{
			tru = 1;
		}
		count++;
	}
	return (sum);
}
