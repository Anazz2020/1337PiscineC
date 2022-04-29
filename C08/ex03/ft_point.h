/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anazz <lovewithacoco10@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:27:58 by anazz             #+#    #+#             */
/*   Updated: 2022/04/29 14:28:51 by anazz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_POINT_H
# define __FT_POINT_H

typedef struct	s_point
{
	int	x;
	int	y;
}				t_point;

void			set_point(t_point *point);

#endif

