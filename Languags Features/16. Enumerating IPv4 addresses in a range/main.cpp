#include <iostream>
#include "IPV4Range.h"

int main()
{
    IPV4Range ip;
    std::string address1, address2;

    std::cout << "Enter a first Ip :> ";
    std::cin >> address1;
    std::cout << "Enter a second Ip :> ";
    std::cin >> address2;


    if(!ip.isValidate(address1) || !ip.isValidate(address2))
    {
        std::cout << "IP are not valid";
        return 0;
    }

    ip.printIPRange(address1.c_str(), address2.c_str());

    return 0;
}
