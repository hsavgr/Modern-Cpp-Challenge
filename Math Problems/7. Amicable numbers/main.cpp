#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> am1;

int divisorsSum(int number)
{
    int sum = 1;
    int limit = (int)(number / 2 + 0.5);

    for (int i = 2; i <= limit; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    return sum;
}

void amicableList(int limit)
{
    for (int number = 1; number < limit; ++number)
    {
        auto sum1 = divisorsSum(number);

        if (sum1 < limit && number != sum1)
        {
            auto sum2 = divisorsSum(sum1);
            auto isContain = am1.find(number)->first || am1.find(sum1)->second;

            if (sum2 == number)
            {
                am1.insert(am1.end(), pair<int, int>(number, sum1));
                cout << "(" << number << "," << sum1 << ")" << endl;
            }
        }
    }
}

int main()
{
    int limit;

    cout << "Enter a limit number :> ";
    cin >> limit;

    amicableList(limit);

    return 0;
}