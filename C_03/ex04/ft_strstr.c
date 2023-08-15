/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpramann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:08:56 by vpramann          #+#    #+#             */
/*   Updated: 2023/08/15 14:23:50 by vpramann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = 0;
	if (!str || !to_find)
		return (0);
	while (str[i1])
	{
		if (str[i1] == to_find[i2])
		{
			while (str[i1] == to_find[i2] && to_find[i2])
			{
				i1++;
				i2++;
			}
		}
		if (!to_find[i2])
		{
			i1 = i1 - i2;
			break ;
		}	
		i1++;
	}
	return (str + i1);
}
