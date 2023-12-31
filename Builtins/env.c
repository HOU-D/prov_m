/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 01:03:46 by hoakoumi          #+#    #+#             */
/*   Updated: 2023/08/05 08:35:35 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"
#include "../include/shell.h"

void printf_env(t_env *list_env)
{
    while (list_env != NULL)
    {
        // printf("%s=%s\n", list_env->key, list_env->val);
        if (list_env->val != NULL)
        {
            printf("%s=%s\n", list_env->key, list_env->val);
        }
        list_env = list_env->next;
    }
}


void	ft_env(t_env *list_env, char **av)
{
	if (av[1] !=  NULL)
	{
		g_info.exit_status = 127;
        _print(2,"env: cd: %s : No such file or directory\n", av[1]);
		return ;
	}
	g_info.exit_status = 0;
	printf_env(list_env);
}
