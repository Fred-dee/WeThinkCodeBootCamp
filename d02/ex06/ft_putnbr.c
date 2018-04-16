/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 08:12:32 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/12 18:10:04 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char n);

void	init(int *a, int *b, int *or, int *n)
{
	a = 0;
	b = 0;
	*or = *n;
}

void	count_digits(int *nb, int *counter)
{
	int nbr;

	while (*nb > 0)
	{
		*counter = *counter + 1;
		nbr = *nb;
		*nb = nbr / 10;
	}
}

void	ft_putnbr(int nb)
{
	int		original;
	int		digit;
	int		counter;
	int		tmp;
	char	*result;

	init(&tmp, &counter, &original, &nb);
	count_sigits(&nb, &counter);
	nb = original;
	result = (char*)malloc(counter * sizeof(char));
	while (tmp < counter)
	{
		digit = nb % 10;
		result[tmp] = digit + 48;
		nb /= 10;
		tmp++;
	}
	while (counter > 0)
	{
		ft_putchar(result[counter - 1]);
		counter--;
	}
	free(result);
	ft_putchar('\n');
}
