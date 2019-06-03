#include "contact.class.hpp"

int
main(void)
{
    int             i;
    Contact         phonebook[9];
    std::string     command;

		std::cout << "Enter 'ADD' to add a contact, 'SEARCH' to find a contact or 'EXIT' to quit." << std::endl;
    i = 0;
    while ('h' == 'h')
    {
        getline(std::cin, command, '\n');
        if (command == "ADD")
        {
            if (i < 9)
                phonebook[i++] = add();
            else
                std::cout << "No more thanks." << std::endl;

        }
        else if (command == "SEARCH")
        {
            if (i > 0)
                selectAll(phonebook, i);
            else
                std::cout << "First add a contact." << std::endl;
        }
        else if (command == "EXIT") {
						std::cout << "Programme has been quit." << std::endl;
            exit(69);
				}
    }
    return (0);
}
