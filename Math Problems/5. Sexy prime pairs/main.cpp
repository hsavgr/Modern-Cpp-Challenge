#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
    int i = num / 2;

    if (num == 2 || num == 3)
    {
        return true;
    }

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

    cout <<"Enter the upper limit to find sexy prime pair numbers :> ";
    cin >> number;

    cout <<"List of sexy prime pair number is: \n";

    for (int j = number; j >= 2; j--)
    {
        if(isPrime(j) && isPrime(j+6) && j+6 <= number)
        {
            cout << "(" << j << ", " << j+6 << ")" << endl;
        }
    }

    return 0;
}
