#include <cctype>
#include <string>
#include <iostream>

int   main(int ac, char **av) {
  int i = 1;
  int j = 0;

  (void)av;
  while (i < ac) {
    while (j < (int)strlen(av[i])) {
      std::cout << (char)toupper(av[i][j]);
      j++;
    }
    if (i != ac - 1)
      std::cout << (' ');
    i++;
    j = 0;
  }
}