/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 00:19:18 by ama10362          #+#    #+#             */
/*   Updated: 2024/02/24 15:34:16 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
    Contact _mylist[8];

public:
    PhoneBook();
    ~PhoneBook();
    void initiate(void) const;
    void addNew(void);
    void printList(void) const;
    void search(void) const;
};

#endif