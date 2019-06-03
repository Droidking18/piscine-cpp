#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX_CONTACTS = 9;

class    Contact
{
public:
    Contact(void);
    ~Contact(void);
    void            setFirstName(std::string);
    void            setLastName(std::string);
    void            setNickname(std::string);
    void            setLogin(std::string);
    void            setPostalAddress(std::string);
    void            setEmailAddress(std::string);
    void            setPhoneNumber(std::string);
    void            setBirthdayDate(std::string);
    void            setFavouriteMeal(std::string);
    void            setUnderwearColour(std::string);
    void            setDarkestSecret(std::string);
    std::string     getFirstName(void);
    std::string     getLastName(void);
    std::string     getNickname(void);
    std::string     getLogin(void);
    std::string     getPostalAddress(void);
    std::string     getEmailAddress(void);
    std::string     getPhoneNumber(void);
    std::string     getBirthdayDate(void);
    std::string     getFavouriteMeal(void);
    std::string     getUnderwearColour(void);
    std::string     getDarkestSecret(void);

private:
    std::string     _firstName;
    std::string     _lastName;
    std::string     _nickname;
    std::string     _login;
    std::string     _postalAddress;
    std::string     _emailAdress;
    std::string     _phoneNumber;
    std::string     _birthdayDate;
    std::string     _favouriteMeal;
    std::string     _underwearColour;
    std::string     _darkestSecret;
};

Contact             add(void);
void                selectAll(Contact phonebook[], int contact_index);

#endif
