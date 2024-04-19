#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> commonDivisors;
    int firstNum, secondNum;

    cout << "Enter first number :> ";
    cin >> firstNum;
    cout << "Enter second number :> ";
    cin >> secondNum;

    int greaterNum = max(firstNum, secondNum) / 2 + 0.5;

    for(int i = 1; i <= greaterNum; i++)
    {
        if (firstNum % i == 0 && secondNum % i == 0)
        {
            commonDivisors.push_back(i);
        }
    }

    cout << "GCD of " <<firstNum << " and " << secondNum<<  " is " << commonDivisors.back();

    return 0;
}
