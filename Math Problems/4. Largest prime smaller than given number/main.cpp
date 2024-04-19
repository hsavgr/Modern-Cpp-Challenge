#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    int i = num / 2;

    for (i = num / 2; i >= 2; i--)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main ()
{
    int number = 0;

    cout << "Enter the upper limit to find largest prime number :> ";
    cin >> number;

    if (number == 2 || number == 3)
    {
        cout << "largest Prime number is " << number;
        return 0;
    }
    else
    {
        for (int j = number; j >= 4; j--)
        {
            if(isPrime(j))
            {
                cout << "largest Prime number is " << j;
                break;
            }
        }
    }

    return 0;
}
