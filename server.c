/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgill <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 15:27:52 by hgill             #+#    #+#             */
/*   Updated: 2023/01/25 14:33:25 by hgill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_handler(int signal)
{
	static int	bit;
	static int	i;

/* SIGUSR1 = 1 and SIGUSR2 = 0*/
/* 0x01 is the hex rep*/
/* since starting point for bit is 0 as a static variable,*/
/* things only change when the signal is 1*/
/* after the entire binary rep is read through,*/
/* bit and i are reset to 0, ready to read the next chracter*/
	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char **argv)
{
	(void)argv;
	ft_printf("Hey!\n");
	ft_printf("PID is: %d\n", getpid());
	while (argc == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause();
	}
	return (0);
}
