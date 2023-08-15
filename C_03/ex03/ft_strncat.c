/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpramann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 13:37:24 by vpramann          #+#    #+#             */
/*   Updated: 2023/08/15 16:25:06 by vpramann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	if (!src)
		return (0);
	while (dest[i2])
	{
		i2++;
	}
	while (src[i1] && i1 < nb)
	{
		dest[i2] = src[i1];
		i1++;
		i2++;
	}
	dest[i2] = '\0';
	return (dest);
}
