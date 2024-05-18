/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Classes.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:35:51 by ama10362          #+#    #+#             */
/*   Updated: 2024/05/18 16:37:30 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSES
# define CLASSES

# include <iostream>
# include <cstdlib>

class Base 
{
	public:

		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif