/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 07:59:03 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/16 14:47:24 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> ////////////////////////////////////////////////////////////

int		ft_newstrstr(char *s1, char *s2, int index)
{
	while (*s1 != *s2 && *s1 != '\0') //tant qu'il sont pas egaux
	{
		printf("\t\t\t%c : %c\n", *s1, *s2); ////////////////////////
		s1++;
	}
	if (*s1 == '\0' && *s2 != '\0') //s1 est fini donc pas de match
		return (0);
	else //match possible
	{
		while (*s1 ==*s2 && *s1 != '\0' && *s2 != '\0' && *s2 != '*')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0' || *s2 == '*') //si ils sont egaux jusqu'au * ou au boutde la chaine
		{
			if (index > 0) //si l'index n'est pas encore a 0
			{
				while (*s2 == '*' && *s2 != '\0') //suppression des etoiles
					s2++;
				if (*s2 == '\0') //si s2 fini par une etoile ca match
					return (1);
				printf("\t\t\tla recusivite de newstrstr\n"); /////////////
				return (ft_newstrstr(s1, s2, index - 1));
			}
			else //si l'index == 0 donc on as trouver le n eme element
			{
				printf("\t\t\tla fin de newstrstr\n"); /////////////////////
				return (1);
			}
		}
		else //s2 != a '\0' ou '*' donc pas de trouvage
			return (0);
	}
}

int		match(char *s1, char *s2)
{
	int		i;
	int		retour;

	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') //tant qu'ils sont egaux
	{
		s1++;
		s2++;
		printf("while (ils ont egaux)\n"); ////////////////////////////////
	}
	if (*s1 == '\0' && *s2 == '\0') //ils sont tt les 2 fini donc ok
		return (101);
	if (*s2 == '*') //s2 est une *
	{
		printf("\t*s2 == '*'\n"); /////////////////////////////////////////////
		while (*s2 == '*') // || *s2 != '\0') //tant que s2 est une *
			s2++;
		if (*s2 == '\0') //si s2 == '\0' alors il fini par une * donc ok
			return (201);
		i = 0;
		printf("\t\tft_newstrstr\n");/////////////////////////////////////
		while (ft_newstrstr(s1, s2, i)) //tant qu'il y as *s2* dans s1
		{
			printf("\t\tft_newstrstr\n");/////////////////////////////////////
			retour = match(s1, s2);
			i++;
		}
		return (retour);
	}
	else //s2 n'as pas d'etoile et *s1 != *s2 donc pas de match
		return (100);
	return (200); //normalement on arrive jamais ici
}
