/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tabarak <tabarak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 14:54:34 by talshoub          #+#    #+#             */
/*   Updated: 2026/06/30 19:54:13 by tabarak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
int main()
{
    PhoneBook phonebook;
    std::string comm;
    while(1)
    {
        std::cout<<"Please enter one of these commands : ADD, SEARCH, EXIT"<<std::endl;
        std::cin>>comm;
        if(comm=="ADD")
        {
            Contact contact;
            contact.setting_contact();
            phonebook.add_contact(contact);
        }
        else if(comm=="SEARCH")
        {
            int index;
            phonebook.print_in_table();
            std::cout<<"Enter the index for search : "<<std::endl;
            std::cin>>index;
            if(phonebook.search_ifexist(index)==false)
                std::cout<<"Contact not found"<<std::endl;
        }
        else if(comm=="EXIT")
            return 0;
        // else
        // {
        //     std::cout<<"Please enter one of these commands : ADD, SEARCH, EXIT"<<std::endl;
        // }
    }
}