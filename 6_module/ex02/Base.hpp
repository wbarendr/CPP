/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: wester <wester@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/16 22:55:38 by wester        #+#    #+#                 */
/*   Updated: 2020/09/17 11:08:09 by wester        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BASE_HPP_
# define _BASE_HPP_

# include <iostream>

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
