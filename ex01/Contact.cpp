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

