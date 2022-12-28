/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:17:43 by psuanpro          #+#    #+#             */
/*   Updated: 2022/12/28 11:06:01 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
#include <sys/signal.h>
# include <unistd.h>
# include <stdlib.h>
# include <readline/readline.h>
# include <readline/history.h>
# include "libft/libft.h"
# include <dirent.h>
# include "color.h"
# include <sys/wait.h>
# include <signal.h>
# include <fcntl.h>
# include <curses.h>

// # define SQUOTE 39
// # define DQUOTE 34
// # define DOLLAR 36
// # define OPAREN 40
// # define CPAREN 41
// # define MORE 62
// # define LESS 60
// # define PIPE 124

typedef struct s_lst
{
	char			*cmd;
	char			**allcmd;
	struct s_lst	*next;
} 				t_lst;

typedef struct s_lexer
{
	char	*cmd;
	char	*trim;
	char	**split;
}				t_lex;

typedef struct s_parser
{
	t_lst		*lst;
}				t_par;

typedef struct s_program
{
	t_lex		lex;
	t_par		par;
}				t_pro;

// LEXER
void	lexer(t_pro *p);
char	**lexer_split(char *s);

// PARSER
void	parser(t_pro *p);

// EXPANDER

// EXECUTER
void	executer(t_pro *p);
// BUILDINFUNCTION
void	ft_echo(t_pro *p);
void	ft_pwd(t_pro *p);
void	ft_cd(t_pro *p);

#endif