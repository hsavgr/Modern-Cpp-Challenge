#include <iostream>
#include <map>
#include "vector"

using namespace std;

string toRomanNuber(unsigned int roman)
{
    string result;
    std::vector<std::pair<unsigned int, char const*>> romanNumber {
            { 1000, "M" },{ 900, "CM" }, { 500, "D" },{ 400, "CD" },
            { 100, "C" },{ 90, "XC" }, { 50, "L" },{ 40, "XL" },
            { 10, "X" },{ 9, "IX" }, { 5, "V" },{ 4, "IV" }, { 1, "I" }};

    for (auto const & val : romanNumber)
    {
        while (roman >= val.first)
        {
            result += val.second;
            roman -= val.first;
        }
    }

    return result;
}

int main()
{
    unsigned int number = 0;

    cout << "Enter number :> ";
    cin >> number;

    cout << "Roman number of " << number << " is " << toRomanNuber(number);

    return 0;
}
