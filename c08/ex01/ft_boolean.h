/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lxin-zhi <lxin-zhi@student.42kl.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:21:48 by lxin-zhi          #+#    #+#             */
/*   Updated: 2022/06/08 14:47:53 by lxin-zhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

# define EVEN(n) 	n % 2 == 0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define TRUE		1
# define FALSE		0
# define SUCCESS	0

typedef int	t_bool;

#endif
