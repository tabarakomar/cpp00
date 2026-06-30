#include "Contact.hpp"

void Contact:: set_first_name(std::string name)
{
    first_name=name;
}

void Contact:: set_last_name(std::string name)
{
    last_name=name;
}

void Contact:: set_nickname(std::string name)
{
    nickname=name;
}
int Contact::checking_if_valid_phone_number(std::string phone_num)
{
    int i=0;
    while(phone_num[i])
    {
        if(isdigit(phone_num[i]))
            i++;
        else
            return(0);
        i++;
    }
    return(1);
}
void Contact::set_phone_number(std::string phone_num)
{
    phone_number=phone_num;
}

void Contact::set_darkest_secret(std::string secret)
{
    darkest_secret=secret;
}
std::string Contact:: getter_first_name()
{
    return (first_name);
}
std::string Contact:: getter_last_name()
{
    return (last_name);
}
std::string Contact:: getter_nickname()
{
    return (nickname);
}
std::string Contact:: getter_phone_number()
{
    return (phone_number);
}
std::string Contact:: getter_darkest_secret()
{
        return (darkest_secret);
}

void Contact:: setting_contact()
{
    std::string name;
    std::cout<<"Enter First Name : "<<std::endl;
    std::cin>>name;
    first_name=name;
    std::cout<<"Enter Last Name : "<<std::endl;
    std::cin>>name;
    last_name=name;
    std::cout<<"Enter Nickname : "<<std::endl;
    std::cin>>name;
    nickname=name;
    std::cout<<"Enter Phone Number : "<<std::endl;
    std::cin>>name;
    if(checking_if_valid_phone_number(name)==1)
        phone_number=name;
    else
    {
        while(checking_if_valid_phone_number(name)==0)
        {
            std::cout<<"Not valid please enter a valid phone number : "<<std::endl;
            std::cin>>name;
        }
        phone_number=name;
    }
    std::cout<<"Enter Darkest Secret : "<<std::endl;
    std::cin>>name;
    darkest_secret=name;
}

