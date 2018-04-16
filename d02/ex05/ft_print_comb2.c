/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdilapi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 12:24:03 by mdilapi           #+#    #+#             */
/*   Updated: 2018/04/12 12:24:07 by mdilapi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	incrementor(int *to_increment, int *by_variable)
{
	*to_increment = *by_variable + 1;
	*by_variable = *by_variable + 1;
}

void	initializer(int *x, int *y, int *z, int *w)
{
	*x = '0';
	*y = '0';
	*z = '0';
	*w = '1';
}

void	printer(int i, int j, int k, int z)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(' ');
	ft_putchar(k);
	ft_putchar(z);
	if (i <= '9' && j <= '9' && k <= '9' && z <= '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int z;

	initializer(&i, &j, &k, &z);
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				while (z <= '9')
				{
					printer(i, j, k, z);
					z++;
				}
				incrementor(&z, &k);
			}
			incrementor(&k, &j);
		}
		j = '0';
		i++;
	}
	ft_putchar('\n');
}
