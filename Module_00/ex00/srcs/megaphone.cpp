#include <iostream>

void    Toupper(char *str)
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
    while (argv[i])
    {
        Toupper(argv[i]);
        std::cout << " " << argv[i];
        i++;
    }
    return (0);
}