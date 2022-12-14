/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expander.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 01:27:24 by psuanpro          #+#    #+#             */
/*   Updated: 2022/12/31 15:46:18 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

// void	expander(t_par *p, int index)
// {
// 	if (!ft_strncmp(p->cmd[index].cmd, "echo", 5))
// 		ft_echo(p);
// 	else if (!ft_strncmp(p->cmd[index].cmd, "cd", 3))
// 		ft_cd(p);
// 	else if (!ft_strncmp(p->cmd[index].cmd, "pwd", 4))
// 		ft_pwd(p);
// 	else if (!ft_strncmp(p->cmd[index].cmd, "export", 7))
// 		ft_export(p);
// 	else if (!ft_strncmp(p->cmd[index].cmd, "unset", 6))
// 		ft_unset(p);
// 	else
// 	 	access();
// }

// echo with option -n
// ◦ cd with only a relative or absolute path
// ◦ pwd with no options
// ◦ export with no options
// ◦ unset with no options
// ◦ env with no options or arguments
// ◦ exit with no options