/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 13:06:35 by moguille          #+#    #+#             */
/*   Updated: 2025/03/12 13:39:58 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_ckeck_signed(int nbr)
{
	if (nbr >= 0)
		return (nbr);
	write(1, "-", 1);
	return (-nbr);
}

void	ft_putnbr(int nb)
{
	unsigned int	u_nbr;
	int				divisor;
	int				quotient;

	u_nbr = ft_ckeck_signed(nb);
	divisor = 1;
	while (u_nbr / divisor >= 10)
		divisor = divisor * 10;
	while (divisor >= 1)
	{
		quotient = (u_nbr / divisor);
		write(1, &"0123456789"[quotient], 1);
		u_nbr = u_nbr % divisor;
		divisor = divisor / 10;
	}
}

/*int	main()
{
	ft_putnbr(-1234);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(10);
	write(1, "\n", 1);
	return (0);
}*/
