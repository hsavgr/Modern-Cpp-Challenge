//
// Created by hsavgr on 5/1/24.
//

#include "IPV4Range.h"
#include <sstream>
#include <arpa/inet.h>


bool IPV4Range::isValidate(std::string add)
{
    std::vector<int> ipFactor;

    ipFactor = split(add);

    for (int i = 0; i < ipFactor.size(); ++i)
    {
        if(ipFactor[i] > 255 || ipFactor[i] < 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> IPV4Range::split(std::string add)
{
    std::vector<int> ipFactor;
    std::stringstream ss;
    int val{0};

    for(int i = 0; i < add.length() - 1; i++)
    {
        char a = add[i];
        if(!isdigit(a))
        {
            add[i] = ' ';
        }
    }

    ss << add;

    while (ss >> val)
    {
        ipFactor.push_back(val);
    }

    return ipFactor;
}

void IPV4Range::printIPRange(const char* startIP, const char* endIP) {
    struct in_addr start, end;
    inet_pton(AF_INET, startIP, &start);
    inet_pton(AF_INET, endIP, &end);

    unsigned long startAddr = ntohl(start.s_addr);
    unsigned long endAddr = ntohl(end.s_addr);

    for (unsigned long addr = startAddr; addr <= endAddr; ++addr) {
        struct in_addr ipAddr;
        ipAddr.s_addr = htonl(addr);
        std::cout << inet_ntoa(ipAddr) << std::endl;
    }
}
