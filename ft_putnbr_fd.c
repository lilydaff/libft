/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmessaou <hmessaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:42:03 by hmessaou          #+#    #+#             */
/*   Updated: 2024/12/04 17:16:51 by hmessaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ecrit lentier 'n' sur le descripteur de fichier donne*/
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10 + '0'), fd);
}
// int	main(void)
// {
// 	ft_putnbr_fd(15498879, 2);
// }