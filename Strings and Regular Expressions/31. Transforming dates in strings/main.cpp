#include <iostream>
#include <regex>
#include <string>

std::string dateFormat(std::string text)
{
    std::regex dateRegex(R"(([0]?[1-9]|[1|2][0-9]|[3][0|1])(\.|-)([0]?[1-9]|[1][0-2])(\.|-)([0-9]{4}|[0-9]{2}))");
    std::string newPattern {"$5-$3-$1"};

    return std::regex_replace(text, dateRegex, newPattern);
}

int main()
{
    std::string text {"Today's date is 29.05.2024 and tomorrow will be 30-05-2024."};

    std::string newText = dateFormat(text);

    std::cout << "The old text is:> " << text;
    std::cout << "\nThe new text is:> " << newText;

    return 0;
}
