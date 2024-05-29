#include <iostream>
#include <string>
#include <vector>

std::string joinString(std::vector<std::string> input, char delimiter)
{
    std::string output;

    if(input.empty())
    {
        return "";
    }

    for (int i = 0; i < input.size(); ++i)
    {
        output += input[i];

        if (i < input.size() - 1)
        {
            output += delimiter;
        }
    }

    return output;
}



int main()
{
    std::vector<std::string> input = {"this", "is", "an", "example"};
    char delimiter = ' ';

    std::string output = joinString(input, delimiter);

    std::cout << "Output is:> "<< output << std::endl;

    return 0;
}
