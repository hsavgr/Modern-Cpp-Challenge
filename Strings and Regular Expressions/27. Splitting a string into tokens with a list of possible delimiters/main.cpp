#include <iostream>
#include <vector>
#include <string>
#include <regex>

std::vector<std::string> splitString(std::string str)
{
    std::vector<std::string> tokens;
    std::regex regexPattern("[,.! ]+");
    std::sregex_token_iterator iter(str.begin(), str.end(), regexPattern, -1);
    std::sregex_token_iterator end;

    while(iter != end)
    {
        if (!iter->str().empty())
        {
            tokens.push_back(iter->str());
        }
        ++iter;
    }

    return tokens;
}

int main()
{
    std::string input;
    input = "this,is.a sample!!";

    std::vector<std::string> output = splitString(input);
    for (int i = 0; i < output.size(); i++)
    {
        if(i == 0)
            std::cout << "{" << "\"" << output[i] << "\", ";
        else if(i == output.size() - 1)
            std::cout << "\"" << output[i] << "\"" << "}";
        else
            std::cout << "\"" << output[i] << "\", ";
    }

    return 0;
}
