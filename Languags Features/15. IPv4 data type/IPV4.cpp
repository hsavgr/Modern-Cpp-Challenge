//
// Created by hsavgr on 5/1/24.
//

#include <sstream>
#include "IPV4.h"

bool IPV4::isValidate(std::string add)
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

std::vector<int> IPV4::split(std::string add)
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
