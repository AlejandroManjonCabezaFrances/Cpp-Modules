#include <iostream>

void    toUpper(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
    if (argv[1000] == NULL)
        std::cout << "ese argumento es null" << std::endl;
    while (argv[i])
    {
        toUpper(argv[i]);
        std::cout << argv[i];
        i++;
    }
    if (argc != 1)
        std::cout << std::endl;
    return (0);
}