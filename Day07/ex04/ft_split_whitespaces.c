/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matcharr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 06:56:35 by matcharr          #+#    #+#             */
/*   Updated: 2018/08/09 13:46:29 by matcharr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*substr(char *str, int start, int end)
{
	int		track;
	char	*sub_str;

	sub_str = malloc(end - start + 1);
	track = start - 1;
	while (++track < end)
		sub_str[track - start] = str[track];
	sub_str[track - start] = '\0';
	return (sub_str);
}

char	*get_next_word(char *str, int *index)
{
	int		track;
	int		start;
	int		in_word;
	char	c;

	in_word = 0;
	start = -1;
	track = *index - 1;
	while (str[++track])
	{
		c = str[track];
		if (c == '\t' || c == '\n' || c == ' ')
		{
			if (in_word)
				break ;
		}
		else if (!in_word)
		{
			start = track;
			in_word = 1;
		}
	}
	*index = track;
	return (start != -1 ? substr(str, start, track) : NULL);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		track;
	int		length;
	char	*word;
	int		index;

	words = NULL;
	index = 0;
	length = 1;
	while ((word = get_next_word(str, &index)) != NULL)
		length++;
	words = malloc(sizeof(char*) * length);
	track = -1;
	index = 0;
	while ((word = get_next_word(str, &index)) != NULL)
		words[++track] = word;
	words[length - 1] = NULL;
	return (words);
}
