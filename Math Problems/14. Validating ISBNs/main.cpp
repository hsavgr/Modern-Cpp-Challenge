#include <iostream>

using namespace std;

bool isISBN(string isbn)
{
    int sum = 0;

    if (isbn.length() != 10)
    {
        return false;
    }

    for (int i = 0; i < 9; i++)
    {
        sum += (isbn.at(i) - 48) * (10 - i);
    }

    if (isbn[9] == 'x' || isbn[9] == 'X')
    {
        sum += 10;
    }
    else
    {
        sum += isbn.at(9) - 48;
    }

    if (sum % 11 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string isbn;
    std::cout << "please entert ISBN's string :> ";
    cin >> isbn;

    if (isISBN(isbn))
    {
        std::cout << "the entered expression is ISBN-10!";
    }
    else
    {
        std::cout << "the entered expression is not ISBN-10!";
    }

    return 0;
}
