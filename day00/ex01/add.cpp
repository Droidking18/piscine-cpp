#include "contact.class.hpp"

Contact
add(void)
{
    Contact          new_contact;
    std::string      input;

    std::cout << "Please enter First name: ";
    std::cin >> input;
    new_contact.setFirstName(input);
    std::cout << "Please enter Last name: ";
    std::cin >> input;
    new_contact.setLastName(input);
    std::cout << "Please enter Nick name: ";
    std::cin >> input;
    new_contact.setNickname(input);
    std::cout << "Please enter Login: ";
    std::cin >> input;
    new_contact.setLogin(input);
    std::cout << "Please enter Postal Address: ";
    std::cin >> input;
    new_contact.setPostalAddress(input);
    std::cout << "Please enter Email Address: ";
    std::cin >> input;
    new_contact.setEmailAddress(input);
    std::cout << "Please enter Phone Number: ";
    std::cin >> input;
    new_contact.setPhoneNumber(input);
    std::cout << "Please enter Birthday: ";
    std::cin >> input;
    new_contact.setBirthdayDate(input);
    std::cout << "Please enter Favourite Meal: ";
    std::cin >> input;
    new_contact.setFavouriteMeal(input);
    std::cout << "Please enter Underwear Colour: ";
    std::cin >> input;
    new_contact.setUnderwearColour(input);
    std::cout << "Please enter Darkest Secret: ";
    std::cin >> input;
    new_contact.setDarkestSecret(input);
    std::cout << std::endl << "Data has been saved." << std::endl;
    return (new_contact);
}
