#include <iostream>

int main(int ac, char **av) {
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++) {
            for (int j = 0; j < (int)std::strlen(av[i]); j++) {
                std::cout << (char)std::toupper(av[i][j]);
            }
            std::cout << " ";
        }
        std::cout << "\n";
    }
    return (0);
}