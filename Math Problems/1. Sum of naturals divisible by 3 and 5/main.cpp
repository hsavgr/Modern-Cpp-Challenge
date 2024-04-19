#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> threeFiveDivisors;
    int limitNumber;

    cout << "Enter the upper limit to find numbers :>";
    cin >> limitNumber;

    for(int i = 1; i < limitNumber; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            threeFiveDivisors.push_back(i);
        }
    }

    cout << " the list is :> \n [";

    for (int i = 0; i < threeFiveDivisors.size(); ++i)
    {
        if (threeFiveDivisors.size() - 1 == i)
        {
            cout << threeFiveDivisors[i] << "]";
        }
        else
        {
            cout << threeFiveDivisors[i] << ", ";
        }
    }

    return 0;
}
