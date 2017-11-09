/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 08:07:10 by tnicolas          #+#    #+#             */
/*   Updated: 2017/07/15 14:21:50 by tnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_back(char *s1, char *s2, int *wild)
  {
  int		decal;

  (void)s1;
  (void)s2;
  (void)wild;
  decal = 0;
  while (*s2 != '*')
  {
  decal++;
  s2--;
  }
  s2 += 2 + decal;
  printf("-");
  int		i = -1;
  while (*(s2+(++i)))
  printf("%c", s2[i]);
  }

  int		ft_cmp(char *s1, char *s2, int *wild)
  {
  while (*s1 == *s2)
  {
  if (*s1 == '\0' && *s2 == '\0')
  return (1);
  s1++;
  s2++;
  }
  if (*s1 == '\0')
  return (0);
  if (*s2 == '*')
  while (*s2 == '*')
  {
 *wild++;
 s2++;
 }
 else if (*wild > 0 && *(s2 - 1) == '*')
 {
 *wild--;
 ft_back(s1, s2, wild);
 }
 while (*s1 != *s2 && s1 != '\0')
 s1++;
 if (*s2 == '\0' && *s1 != '\0')
 return (1);
 if (s1 == '\0')
 return (0);
 s2++;
 return (ft_cmp(s1, s2, wild));
 }*/

int		ft_cmp(char *s1, char *s2, char *last_s1, char *last_s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0' && s2 == '\0')
		return (1);
	else if (*s1 == '\0')
		return (100);
	else if (*s2 == '*')
	{
		while (*s2 == '*')
			s2++;
		if (*s2 == '\0')
			return (1);
		last_s1 = s1;
		last_s2 = s2;
		while (*s1 != *s2 && s1 != '\0' && *s2 != '\0')
		{
			s1++;
		}
	}
	else if (*s2 == '\0' && last_s2 != 0)
	{
		s1 = last_s1;
		s2 = last_s2++;
//		if (*(s2 - 1) == '\0')
//			return (200);
		while (*s1 != *s2 && s1 != '\0' && *s2 != '\0')
		{
			s1++;
		}
		if (*(s2 - 1) == '\0')
			return (200);
//		s2 = last_s2;
	}
//	if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0'))
//		return (300);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (ft_cmp(s1, s2, last_s1, last_s2));
}

int		match(char *s1, char *s2)
{
//	int		last_s2_p;
	char	*last_s1;
	char	*last_s2;
	//	int		wildcard;
	//	int		*wild;

//	last_s2_p = 0;
	last_s1 = 0;
	last_s2 = 0;//&last_s2_p;
	//	(void)wild;
	//	wildcard = 0;
	//	wild = &wildcard;
	return (ft_cmp(s1, s2, last_s1, last_s2));
}
