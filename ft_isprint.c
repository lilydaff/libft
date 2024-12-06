/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:42:58 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/02 16:24:32 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c <= 31) || c >= 127)
		return (0);
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isprint(48));
}*/