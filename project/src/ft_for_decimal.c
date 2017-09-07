/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatyshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 18:58:27 by alatyshe          #+#    #+#             */
/*   Updated: 2016/12/08 13:11:05 by alatyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libprintf.h"

size_t	num_count(long long int n)
{
	size_t			i;
	size_t			b;

	i = 0;
	if (n < 0)
	{
		b = (size_t)(-n);
		i++;
	}
	else
		b = (size_t)n;
	while (b >= 10)
	{
		i++;
		b = b / 10;
	}
	i++;
	return (i);
}

char	*ft_itoa(intmax_t n)
{
	unsigned int	i;
	char			*b;
	size_t			s;
	int				c;

	c = 1;
	i = num_count(n);
	if (!(b = (char *)malloc(sizeof(char) * num_count(n) + 1)))
		return (NULL);
	b[i] = '\0';
	if (n < 0)
	{
		s = (size_t)(-n);
		c = -1;
	}
	else
		s = (size_t)n;
	while (i--)
	{
		b[i] = s % 10 + 48;
		s = s / 10;
	}
	if (c == -1)
		b[0] = '-';
	return (b);
}

int		ft_check_for_atoi(char *str)
{
	int				i;

	i = 0;
	if (str[i] >= '0' && str[i] <= '9')
		return (1);
	else
		return (0);
}

int		ft_atoi_plus(const char *str, int *c)
{
	unsigned long	i;
	int				b;
	int				z;

	i = 0;
	b = 0;
	z = 1;
	if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
		i++;
		z = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		b = b * 10 + (str[i] - 48);
		i++;
	}
	(*c) = (*c) + i - 1;
	return (b * z);
}
