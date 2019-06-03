#include "contact.class.hpp"
#include <stdlib.h>

static void  selectOne(Contact contacts[], int arr_len)
{
    int          i;

    std::cout << "Select a valid index: " << std::endl;
    std::cin >> i;
    std::cout << std::endl;
    if (std::cin.good() && (i >= 0 && i < arr_len))
    {
        std::cout << "First Name: " + contacts[i].getFirstName() << std::endl;
        std::cout << "Last Name: " + contacts[i].getLastName() << std::endl;
        std::cout << "Ncikname: " + contacts[i].getNickname() << std::endl;
        std::cout << "Login: " + contacts[i].getLogin() << std::endl;
        std::cout << "Postal address: " + contacts[i].getPostalAddress() << std::endl;
        std::cout << "Email address: " + contacts[i].getEmailAddress() << std::endl;
        std::cout << "Phone number: " + contacts[i].getPhoneNumber() << std::endl;
        std::cout << "Birthday Date: " + contacts[i].getBirthdayDate() << std::endl;
        std::cout << "Favourite meal: " + contacts[i].getFavouriteMeal() << std::endl;
        std::cout << "Underwear Colour: " + contacts[i].getUnderwearColour() << std::endl;
        std::cout << "Darkest Secret: " + contacts[i].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cout << "Please choose an existing index. (A valid index is one
          between and including 0 and less than " + std::to_string(arr_len) + ")" << std::endl;
        selectOne(contacts, arr_len);
    }
}

static std::string  trim(std::string field) {
    return (field.erase((9), field.length() - (9)).append("."));
}

void   selectAll(Contact contacts[], int arr_len)
{
    std::string     first;
    std::string     last;
    std::string     nickname;

    std::cout << std::setw(10);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < arr_len; i ++)
    {
        first = contacts[i].getFirstName();
        last = contacts[i].getLastName();
        nickname = contacts[i].getNickname();

        std::cout << "|" << std::setw(10) << i;
        first = (first.length() > 10) ? trim(first) : first;
        std::cout << "|" << std::setw(10) << first;

        last = (last.length() > 10) ? trim(last) : last;
        std::cout << "|" << std::setw(10) << last;

        nickname = (nickname.length() > 10) ? trim(nickname) : nickname;
        std::cout << "|" << std::setw(10) << nickname;
        std::cout << "|" << std::endl;
    }
    selectOne(contacts, arr_len);
}
