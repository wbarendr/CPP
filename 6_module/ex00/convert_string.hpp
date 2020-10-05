/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   convert_string.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 16:16:41 by wester        #+#    #+#                 */
/*   Updated: 2020/10/04 14:37:35 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONVERT_STRING_HPP
# define _CONVERT_STRING_HPP

# include <iostream>
# include <string>
# include <locale>
# include <iomanip>
# include <cstdlib>

typedef struct s_types
{
    char        C;
	int         NUM;
	float       FL;
	double      DB;
    int         NEG;
    int         num_fixed;
}               t_types;

#endif
