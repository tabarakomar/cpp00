/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabarak <tabarak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:24:58 by talshoub          #+#    #+#             */
/*   Updated: 2026/06/30 19:53:45 by tabarak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    couter_loop = 0;
}

void PhoneBook::add_contact(Contact contact)
{
    contacts_book[couter_loop%8]= contact;
    couter_loop++;
}

void PhoneBook::printing_contact(int index)
{
    std::cout<<"First Name : "<<contacts_book[index].getter_first_name()<<std::endl;
    std::cout<<"Last Name : "<<contacts_book[index].getter_last_name()<<std::endl;
    std::cout<<"Nickname : "<<contacts_book[index].getter_nickname()<<std::endl;
    std::cout<<"Phone Number : "<<contacts_book[index].getter_phone_number()<<std::endl;
    std::cout<<"Darkest Secret : "<<contacts_book[index].getter_darkest_secret()<<std::endl;
}

void PhoneBook::print_in_table()
{
    int i = 0;
    std::cout << std::setw(10) << std::right << "index" << "|";
    std::cout << std::setw(10) << std::right << "first name" << "|";
    std::cout << std::setw(10) << std::right << "last name" << "|";
    std::cout << std::setw(10) << std::right << "nickname" << std::endl;
    while (i < 8)
    {
        std::cout << std::setw(10) << std::right << i << "|";
        std::cout << std::setw(10) << std::right << contacts_book[i].getter_first_name() << "|";
        std::cout << std::setw(10) << std::right << contacts_book[i].getter_last_name() << "|";
        std::cout << std::setw(10) << std::right << contacts_book[i].getter_nickname() << std::endl;
        i++;
    }
}

bool PhoneBook::search_ifexist(int index)
{
    int i=0;
    while(i<8)
    {
        if(i==index)
        {
            printing_contact(i);
            return true;
        }
        else
            i++;
    }
    return false;
}



