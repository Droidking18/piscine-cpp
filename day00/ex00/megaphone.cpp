#include <cctype>
#include <string>
#include <iostream>

int   main(int ac, char **av) {
  int i = 1;
  int j = 0;

  if (ac == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  }
  while (i < ac) {
    while (j < (int)strlen(av[i])) {
      std::cout << (char)toupper(av[i][j]);
      j++;
    }
    i++;
    j = 0;
  }
  std::cout << std::endl;
}
