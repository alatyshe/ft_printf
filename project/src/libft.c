/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alatyshe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 22:27:57 by alatyshe          #+#    #+#             */
/*   Updated: 2016/12/05 19:23:32 by alatyshe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libprintf.h"

int		ft_size_bin(wchar_t a)
{
	int		j;

	j = 0;
	while (a >= 2)
	{
		a = a / 2;
		j++;
	}
	j++;
	return (j);
}

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*b;

	i = 0;
	b = (char *)malloc(sizeof(char) * (int)size + 1);
	if (b)
	{
		while (size--)
		{
			b[i] = '\0';
			i++;
		}
		b[i] = '\0';
		return (b);
	}
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlen_big(wchar_t *s)
{
	size_t	i;
	int		j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		j = ft_size_bin(s[i]);
		if (j <= 7)
			k += 1;
		else if (j <= 11)
			k += 2;
		else if (j <= 16)
			k += 3;
		else
			k += 4;
		i++;
	}
	return (k);
}

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*result;

	i = 0;
	while (s1[i] != '\0')
		i++;
	result = (char *)malloc(sizeof(*s1) * i + 1);
	if (result == NULL)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
