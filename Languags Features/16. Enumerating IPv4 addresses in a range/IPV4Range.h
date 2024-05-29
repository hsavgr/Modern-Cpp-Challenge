//
// Created by hsavgr on 5/1/24.
//

#ifndef INC_16__ENUMERATING_IPV4_ADDRESSES_IN_A_RANGE_IPV4RANGE_H
#define INC_16__ENUMERATING_IPV4_ADDRESSES_IN_A_RANGE_IPV4RANGE_H

#include "iostream"
#include <vector>

class IPV4Range
{
public:
    bool isValidate(std::string add);
    std::vector<int> split(std::string add);
    void printIPRange(const char* startIP, const char* endIP);
};


#endif //INC_16__ENUMERATING_IPV4_ADDRESSES_IN_A_RANGE_IPV4RANGE_H
