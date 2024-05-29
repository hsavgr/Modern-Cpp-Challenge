//
// Created by hsavgr on 5/1/24.
//

#ifndef INC_15__IPV4_DATA_TYPE_IPV4_H
#define INC_15__IPV4_DATA_TYPE_IPV4_H

#include "iostream"
#include <vector>

class IPV4
{
public:
    bool isValidate(std::string add);
    std::vector<int> split(std::string add);
};


#endif //INC_15__IPV4_DATA_TYPE_IPV4_H
