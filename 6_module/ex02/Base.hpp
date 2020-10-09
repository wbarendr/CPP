/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 22:55:38 by wester        #+#    #+#                 */
/*   Updated: 2020/10/09 11:15:30 by wbarendr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

# include <iostream>
# include <cstdlib>

class Base
{
  public:
    virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

#endif
