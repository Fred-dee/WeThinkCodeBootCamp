/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 12:24:56 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/11 13:18:51 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_tabs(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	printer(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
}

void	initializer(int *x, int *y, int *z)
{
	*x = '0';
	*y = '1';
	*z = '2';
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	initializer(&i, &j, &k);
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				printer(i, j, k);
				if (i != '7' && j <= '8' && k <= '9')
				{
					ft_tabs();
				}
				k++;
			}
			j++;
		}
		i++;
	}
	ft_putchar('\n');
}
