/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:25:12 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/24 17:01:18 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
    int         _index;
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

    std::string _fillData(std::string toPrint);
    std::string _putRightLength(std::string textToAdjust) const;



public:
    Contact();
    ~Contact();
    void    printContact(int index) const;
    void    printDetails(int index) const;
    void    saveNew(void);
    void    modifyIndex(int index);
};

#endif