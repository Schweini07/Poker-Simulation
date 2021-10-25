#include "gm.h"

#include <iostream>

int main(int argc, char *argv[])
{
    if (argv[1] == NULL)
    {
        std::cout << "Number of players not specified!" << std::endl;
        return EINVAL;
    }

    GM gm;
    gm.startGame(atoi(argv[1]));

    return 0;
}