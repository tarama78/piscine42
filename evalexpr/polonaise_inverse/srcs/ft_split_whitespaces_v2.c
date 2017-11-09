/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 14:13:22 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/22 19:16:27 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/incl.h"

void		ft_malloc_string(char **tab, char *str, int i, int string)
{
	int		word;

	i = -1;
	string = 0;
	word = 0;
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			word++;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			if (i != 0)
				if (str[i - 1] != ' ' && str[i - 1] != '\n'
						&& str[i - 1] != '\t')
				{
					if ((tab[string] = malloc(sizeof(**tab) * (word + 1))) == 0)
						return ;
					word = 0;
					string++;
				}
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			if (str[i + 1] == '\0')
				if ((tab[string++] = malloc(sizeof(**tab) * (word + 1))) == 0
						&& !(word = 0))
					return ;
	}
}

void		ft_fill_string(int i, int string, char *str, char **tab)
{
	int		word;

	i = -1;
	string = 0;
	word = 0;
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			if (str[i + 1] != '\0')
				tab[string][word++] = str[i];
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && i != 0 &&
				(str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t'))
		{
			tab[string++][word] = '\0';
			word = 0;
		}
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			if (str[i + 1] == '\0')
			{
				tab[string][word++] = str[i];
				tab[string++][word] = '\0';
				word = 0;
			}
	}
}

char		**ft_split_whitespaces_v2(char *str, int *nb_word)
{
	char	**tab;
	int		i;
	int		string;

	i = 0;
	string = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			if (i != 0)
				if (str[i - 1] != ' ' && str[i - 1] != '\n'
						&& str[i - 1] != '\t')
					string++;
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			if (str[i + 1] == '\0')
				string++;
		i++;
	}
	tab = malloc(sizeof(*tab) * (string + 1));
	tab[string] = 0;
	ft_malloc_string(tab, str, i, string);
	ft_fill_string(i, string, str, tab);
	tab[string] = 0;
	*nb_word = string;
	return (tab);
}
