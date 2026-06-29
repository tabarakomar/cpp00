/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talshoub <talshoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:25:06 by talshoub          #+#    #+#             */
/*   Updated: 2026/06/29 14:49:06 by talshoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
class PhoneBook
{
    private :
        int couter_loop;
        Contact contacts_book[8];
    public :   
        PhoneBook();
        void add_contact(Contact contact);
        bool search_ifexist(int index);
        void printing_contact(int index);
};
#endif