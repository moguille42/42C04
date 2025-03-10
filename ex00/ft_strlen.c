/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moguille <moguille@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:26:27 by moguille          #+#    #+#             */
/*   Updated: 2025/03/10 18:50:31 by moguille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*#include <stdio.h>

int	main(void)
{
	int	len;
	char	str[] = "mañana será bonito\n";

	len = ft_strlen(str);
	printf("la cadena: %s\n", str);
	printf("mide: %d\n", len);
}*/	
