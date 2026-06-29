#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        void set_first_name(std::string name);
        void set_last_name(std::string name);
        void set_nickname(std::string name);
        void set_phone_number(std::string phone_num);
        void set_darkest_secret(std::string secret);

        std::string getter_first_name();
        std::string getter_last_name();
        std::string getter_nickname();
        std::string getter_phone_number();
        std::string getter_darkest_secret();
        void setting_contact();
        int checking_if_valid_phone_number(std::string phone_num);

};
#endif