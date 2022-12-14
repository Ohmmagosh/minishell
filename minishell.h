/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:17:43 by psuanpro          #+#    #+#             */
/*   Updated: 2023/01/05 15:00:54 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <sys/signal.h>
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

typedef struct s_infd
{
	int		redirect;
	int		infd;
	int		outfd;
}				t_ifd;

typedef struct s_cmd
{
	int		index;
	char	*cmd;
	char	**allcmd;
	char	*option;
	t_ifd	re;
} 				t_cmd;

typedef struct s_lexer
{
	char	*cmd;
	char	*trim;
	char	**split;
}				t_lex;

typedef struct s_parser
{
	int		size;
	t_cmd	*cmd;
}				t_par;

typedef struct s_program
{
	t_lex	lex;
	t_par	par;
	
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