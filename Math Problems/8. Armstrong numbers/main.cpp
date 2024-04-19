#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isArmstrong(int num)
{
    int sum = 0;
    string number = to_string(num);

    for (int i = 0; i < number.size(); ++i)
    {
        sum += pow(number[i] - 48, number.size());

        if (i == number.size() - 1 && sum == num)
        {
            return true;
        }
    }

    return false;
}

int main ()
{
    vector<int> armstrongNumbers;
    string number;

    cout <<"Enter the upper limit to find armstrong number :> ";
    cin >> number;

    int num = stoi(number);

    for (int j = num; j >= 1; j--)
    {
        if(isArmstrong(j))
        {
            armstrongNumbers.push_back(j);
        }
    }

    cout << "armstrong list is : \n [";

    for (int i = 0; i < armstrongNumbers.size(); ++i)
    {
        if (armstrongNumbers.size() - 1 == i)
        {
            cout << armstrongNumbers[i] << "]";
        }
        else
        {
            cout << armstrongNumbers[i] << ", ";
        }
    }

    return 0;
}
