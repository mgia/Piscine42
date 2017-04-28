/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by olkovale          #+#    #+#             */
/*   Updated: 2017/04/23 19:37:07 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcount_if(char *str, char needle);
char	*ft_strchr(char *str, char needle);
char	*ft_strcpy(char *dest, const char *src);

#endif
