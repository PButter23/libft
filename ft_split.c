/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arde-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:29:16 by arde-jes          #+#    #+#             */
/*   Updated: 2024/11/11 19:18:34 by arde-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_char(char *s, char c)
{
	int	ct;
	int	lct;
	int	in_word;

	ct = 0;
	lct = 0;
	in_word = 0;
	while (s[ct] != '\0')
	{
		if (s[ct] != c)
		{
			if (in_word == 0)
			{
				lct++;
				in_word = 1;
			}
		}
		else
			in_word = 0;
		ct++;
	}
	return (lct);
}

int	ft_betwenc(char *s, char c, int ct)
{
	int	ctt;

	ctt = 0;
	while (s[ct] != c && s[ct] != '\0')
	{
		ctt++;
		ct++;
	}
	return (ctt);
}

void	*ft_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free (arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split_2(char const *s, char c, char **arr)
{
	int		ct;
	int		cta;
	int		len;
	char	*substr;

	ct = 0;
	cta = 0;
	while (s[ct])
	{
		if (s[ct] != c)
		{
			len = ft_betwenc((char *)s, c, ct);
			substr = ft_substr(s, ct, len);
			if (!substr || substr[0] == '\0')
				return (ft_free(arr));
			arr[cta++] = substr;
			ct += len;
		}
		else
			ct++;
	}
	arr[cta] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = (char **)malloc((ft_count_char((char *)s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (ft_split_2(s, c, arr));
}
/*
int main(void)
{
	char    *s;
	char    c;
	char    **arr;
	int i;

	s = "banana;dino;ssauro";
	c = ';';
	arr = ft_split(s, c);
	if (arr != NULL)
	{
		i = 0;
		while (arr[i] != NULL)
		{
			printf ("%s ", arr[i]);
			i++;
		}
		i = 0;
		while (arr[i] != NULL)
		{
			free (arr[i]);
			i++;
		}
		free (arr);
	}
	else
		printf ("Error in the memory allocation");
	return (0);
}*/