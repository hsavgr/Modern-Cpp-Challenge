#include <iostream>
#include "IPV4.h"

int main()
{
    IPV4 ip;
    std::string address;

    std::cout << "Enter a Ip :> ";
    std::cin >> address;

    if(ip.isValidate(address))
    {
        std::cout << "IP " << address << " is valid";
    }
    else
    {
        std::cout << "IP " << address << " is not valid";
    }

    return 0;
}
