/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbotasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:40:18 by rbotasse          #+#    #+#             */
/*   Updated: 2022/07/24 18:40:20 by rbotasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
int i = 0;

while(str[i] != '\0')
	{
	write(1, &str[i], 1);
	i++;
	}
}

int main()
{
	char s1[] = "snake";
	ft_putstr(s1);
}