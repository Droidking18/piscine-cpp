#include "contact.class.hpp"

Contact::Contact(void) { return ; }
Contact::~Contact(void) { return ; }

std::string Contact::getFirstName(void)
{
    return (this->_firstName);
}

std::string Contact::getLastName(void)
{
    return (this->_lastName);
}

std::string Contact::getNickname(void)
{
    return (this->_nickname);
}

std::string Contact::getLogin(void)
{
    return (this->_login);
}

std::string Contact::getPostalAddress(void)
{
    return (this->_postalAddress);
}

std::string Contact::getEmailAddress(void)
{
    return (this->_emailAdress);
}

std::string Contact::getPhoneNumber(void)
{
    return (this->_phoneNumber);
}

std::string Contact::getBirthdayDate(void)
{
    return (this->_birthdayDate);
}

std::string Contact::getFavouriteMeal(void)
{
    return (this->_favouriteMeal);
}

std::string Contact::getUnderwearColour(void)
{
    return (this->_underwearColour);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkestSecret);
}

void        Contact::setFirstName(std::string str)
{
    this->_firstName = str;
    return ;
}

void        Contact::setLastName(std::string str)
{
    this->_lastName = str;
    return ;
}

void        Contact::setNickname(std::string str)
{
    this->_nickname = str;
    return ;
}

void        Contact::setLogin(std::string str)
{
    this->_login = str;
    return ;
}

void        Contact::setPostalAddress(std::string str)
{
    this->_postalAddress = str;
    return ;
}

void        Contact::setEmailAddress(std::string str)
{
    this->_emailAdress = str;
    return ;
}

void        Contact::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
    return ;
}

void        Contact::setBirthdayDate(std::string str)
{
    this->_birthdayDate = str;
    return ;
}

void        Contact::setFavouriteMeal(std::string str)
{
    this->_favouriteMeal = str;
    return ;
}

void        Contact::setUnderwearColour(std::string str)
{
    this->_underwearColour = str;
    return ;
}

void        Contact::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
    return ;
}
