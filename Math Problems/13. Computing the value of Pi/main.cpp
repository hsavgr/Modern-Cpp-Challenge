#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double i = 1, num = 0;
    long double sum = 0;

    for (long int j = 1; j <= 100000000; ++j)
    {
        if(j % 2 == 0)
        {
            num = 1;
            sum += 4 * pow(-1, num) / i;
        }
        else
        {
            num = 2;
            sum += 4 * pow(-1, num) / i;
        }
        i+=2;
    }

    cout << "sum is " << sum;
    return 0;
}
