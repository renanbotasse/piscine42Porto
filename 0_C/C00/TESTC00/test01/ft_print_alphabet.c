/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 15:00:23 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/17 09:30:21 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c < 122)
	{
		++c;
		write(1, &c, 1);
	}
}


int main ()
{
ft_print_alphabet();
return(0);
}
