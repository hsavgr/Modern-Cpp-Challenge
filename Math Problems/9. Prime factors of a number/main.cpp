#include <iostream>
#include <vector>

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
    vector<int> primeDivisors;
    int number = 0;

    cout <<"Enter number to find prime factors :> ";
    cin >> number;

    for (int j = number; j >= 2; j--)
    {
        if(isPrime(j))
        {
            primeDivisors.push_back(j);
        }
    }

    cout <<"List of prime factors of " << number << " is : \n [";

    for (int i = 0; i < primeDivisors.size(); ++i)
    {
        if (primeDivisors.size() - 1 == i)
        {
            cout << primeDivisors[i] << "]";
        }
        else
        {
            cout << primeDivisors[i] << ", ";
        }
    }

    return 0;
}
