/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:17:41 by psuanpro          #+#    #+#             */
/*   Updated: 2022/12/08 23:30:22 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "minishell.h"

int	main(void)
{
	t_pro	p;
	// printf("hello\n");
	p.hello = readline("hello");

	printf("->%s", p.hello);
	return 0;
}